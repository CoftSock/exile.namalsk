if !(ExileClientPlayerIsPlayer) exitWith {};
if !((vehicle player) isEqualTo player) exitWith {}; 
   if (ExileClientPlayerMoney > 600) then {

    titleText ["", "PLAIN DOWN"];
    player playActionNow "Medic"; 
    _spawnPos = player modelToWorld [0,2,0];
    _spawnDir = (getDir player) -90;
    do_MakeBike = [player, _spawnPos, _spawnDir];

			_poptabs = 600;
			_newPoptabs = ExileClientPlayerMoney - _poptabs;
			ENIGMA_UpdateStats = [player,_newPoptabs];
			publicVariableServer "ENIGMA_UpdateStats";

    uiSleep 3;
    publicVariableServer "do_MakeBike"; 
    uiSleep 1;
    ['BIKE DEPLOYED for 600$',0,0.6,2,0] spawn bis_fnc_dynamictext;
};
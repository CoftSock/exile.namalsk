[] execVM "Custom\EnigmaRevive\init.sqf";
execVM "R3F_LOG\init.sqf";

if(hasInterface) then{
	[] execVM "Custom\service\service_point.sqf";
};

//TO BE USED ONLY ON SERVER
if (isDedicated || isServer) then {
	"do_MakeBike" addPublicVariableEventHandler {
		_parameters = (_this select 1);
		_parameters2  =(_parameters select 1);
		diag_log format ["createVehicleRequested %1 ", _parameters]; // YOU NEED THIS FOR LOGS TO SEE WHO DID IT
		veh = createVehicle["Exile_Bike_QuadBike_Black", _parameters2 , [] ,0 , "NONE"];
	};
};

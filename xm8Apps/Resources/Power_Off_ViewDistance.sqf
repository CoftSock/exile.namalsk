disableSerialization;
if(ExileClientXM8IsPowerOn) then{
_display = (findDisplay 8459) closeDisplay 0;
playSound ["SndXM8PowerOff", true];
ExileClientXM8IsPowerOn = false;
};
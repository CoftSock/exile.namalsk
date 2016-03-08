private["_vehicleObject","_myUid","_targetPosition","_ownerUid","_targetVehicle","_vehicleMarker","_vehicleName"];
_vehicleObject = _this;
_myUid = getPlayerUID _vehicleObject;
//_vehicleObject getVariable ["account_uid", ""],
{
//_ownerUid = _x getVariable ["ExileOwnerUID", ""];
	_ownerUid = getVariable ["ExileOwnerUID", ""];
	if (_ownerUid isEqualTo _myUid) then 
	{
_targetPosition = getPosATL _vehicleObject;
_targetVehicle = _vehicleObject;
hint "hello";
_Marker = "vehicleMarker" + (str _vehicleObject);
_vehicleMarker = createMarkerLocal _targetPosition;
_vehicleMarker setMarkerTypeLocal "Select";
_vehicleMarker setMarkerColorLocal "BLUE";
_vehicleMarker setMarkerSizeLocal [1.0, 1.0];
_vehicleMarker setMarkerTextLocal format ["Here is your: %1",_vehicleName];
};
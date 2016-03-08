if (!isServer) exitWith {};

//SET DATE
__startingdate = [2015, 04, 25, 10, 00]; //2015 = Year, 04 = Month, 3+floor //(random 8) = random time between 3am and 10am, 00 = minite
setdate _startingdate;

//If you dont want a random start time change 3+floor (random 8) to a solid 24 hour time integer, like 10 for 10am

while {true} do
{
	if (daytime >= 19 || daytime < 5) then   // Adjust these for when you want "night time"
	{
		setTimeMultiplier 10      // adjust this value for slower or faster night cycle 
	}
	else
	{
		setTimeMultiplier 5      // adjust this value for slower or faster day cycle  
	};

	uiSleep 120;
};
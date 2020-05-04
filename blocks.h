//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{" ", "~/bin/statusbar/music",				1,		0},
	{" ", "~/bin/statusbar/stocks",				30,		10},
	{" ", "~/bin/statusbar/weather",			600,	0},
	{" ", "~/bin/statusbar/volume",				0,		10},
	{" ", "~/bin/statusbar/mail",				1,		0},
	{" ", "~/bin/statusbar/wifi",				1,		0},
	{" ", "~/bin/statusbar/battery",			5,		0},
	/* {" ", "~/bin/statusbar/cpu",				1,		10}, */
	{" ", "~/bin/statusbar/memory",				1,		0},
	{" ", "~/bin/statusbar/temp",			5,		0},
	{" ", "date +'%a %b %d, %R'",				1,		0},
	/* {"🧠", "free -m | awk 'FNR==2{ printf "%.0f%\n", $3*100/$2 }'",	30,		0}, */
	/* {"", "cat ~/.pacupdate | sed /📦0/d",					0,		9}, */
};
 
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

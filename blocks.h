//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/																/*Update Interval*/		/*Update Signal*/
	{"", 		"date '+%b %d %I:%M %p'",																	5,			0},
	/* {"", 		"sb-forecast",																						3600,		0}, */
	{"📦", 	"xbps-install -Sun | wc -l",															1800,		12},
	{"", 		"sb-battery",																							5,			0},
	{"\n", 	"mpc current -f \"[[%artist% - ]%title%]|[%file%]\"",			0,			11},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 2;

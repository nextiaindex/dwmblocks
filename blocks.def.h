//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{"VOL ", "status-volume", 2, 10},
	{"NET ", "status-network", 2, 0},
	{"BRI ", "status-brightness", 2, 11},
	{"BAT ", "status-battery",	2, 0},
	{"UTC+7 ", "date '+%H:%M'", 5, 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

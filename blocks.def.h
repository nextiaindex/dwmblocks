//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/		/*Update Signal*/
	{"", 		"status-volume", 		2, 						10},
	{"", 		"status-seperator",		2, 						0},
	{"", 		"status-network", 		2, 						0},
	{"", 		"status-seperator",		2, 						0},
	{"",		"status-brightness",	2, 						11},
	{"",		"status-seperator",		2, 						0},
	{"",		"status-battery",		2, 						0},
	{"",		"status-seperator",		2, 						0},
	{"",		"status-clock", 		5, 						0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = "\0";
static unsigned int delimLen = 5;

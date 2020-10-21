//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"printf ' '",								0,			9},
	{"",	"statusbar_mailbox",				0,			2},
	/* {"",	"statusbar_news",						0,			8}, */
	/*{"",	"statusbar_packages",				1,			19},*/
	/* {"",	"statusbar_mounted",				1,			18}, */
	{"",	"statusbar_memavail",				1,			3},
	{"",	"statusbar_memused",				1,			4},
	{"",	"statusbar_music",				  0,			17},
	{"",	"statusbar_volume",					0,			12},
	{"",	"statusbar_batstatus",			5,			6},
	{"",	"statusbar_batcapacity",		5,			5},
	{"",	"statusbar_backlight",			0,			7},
	{"",	"statusbar_internet",				5,			20},
	/* {"",	"statusbar_weather",				6000,			10}, */
	{"",	"statusbar_today",					900,		11}, /* 900s = 15 min */
	{"",	"statusbar_clock",					30,			1},
	{"",	"printf ' '",								0,			14},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    {"", "mpc current", 0, 11},
    {"", "sb-forecast", 3600, 0},
    {"", "date '+%a %b %d %I:%M %p'", 5, 0},
    {"", "sb-battery", 5, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 4;

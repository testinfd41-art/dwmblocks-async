#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "systemstatus", 1, 1)  \
    X("", "diskspace", 1, 2)  \
    X("", "updates", 86400, 3)  \
    X("", "music", 1, 4)  \
    X("", "bt", 1, 5)  \
    X("", "audio", 1, 6)   \
    X("󰃠", "brightness", 1, 7) \
    X("", "internet", 5, 8) \
    X("", "battery", 1, 9) \
    X("󰃰 ", "TZ=Asia/Kolkata date '+%b %d - %I:%M%p'",      60,      10) 

#endif  // CONFIG_H

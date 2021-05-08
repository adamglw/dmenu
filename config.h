/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;             /* -b  option; if 0, dmenu appears at bottom          */
static int fuzzy = 1;              /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int min_width = 500;        /* minimum width of centered dmenu                    */ 

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack Nerd Font:weight=bold:size=11:antialias=true:hinting=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
                          /*     fg         bg       */
	[SchemeNorm]          = { "#a39ec4", "#262626" },
	[SchemeSel]           = { "#191919", "#615d7d" }, /* #655d92 = Ume dark */
    [SchemeSelHighlight]  = { "#191919", "#ac8a8c" },
    [SchemeNormHighlight] = { "#c49ea0", "#262626" },
	[SchemeOut]           = { "#191919", "#747093" }, /* #747093 = Ajisai dark */
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 3;

/* -h option: minimum height of a menu line */
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;

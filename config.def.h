/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack Nerd Font:weight=regular:pixelsize=15:antialias=true:hinting=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
                /*     fg         bg       */
	[SchemeNorm] = { "#b39ddb", "#282a36" },
	[SchemeSel] = { "#000010", "#836fa9" },
	[SchemeOut] = { "#000010", "#b39ddb" },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 9;
static unsigned int columns    = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;

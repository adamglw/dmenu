/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;             /* -b  option; if 0, dmenu appears at bottom          */
static int fuzzy = 1;              /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int min_width = 500;        /* minimum width of centered dmenu                    */ 

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "Hack Nerd Font:weight=bold:pixelsize=14:antialias=true:hinting=true";
static const char *fonts[] = {
	font,
    "monospace:size=10",
};
static char *prompt         = NULL;   /* -p  option; prompt to the left of input field */

static char normfgcolor[]   = "#bbbbbb";
static char normbgcolor[]   = "#222222";
static char selfgcolor[]    = "#eeeeee";
static char selbgcolor[]    = "#005577";
static char outfgcolor[]    = "#000000";
static char outbgcolor[]    = "#00ffff";
static char normhlfgcolor[] = "#ff0000";
static char normhlbgcolor[] = "#222222";
static char selhlfgcolor[]  = "#00ff00";
static char selhlbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {

                           /* fg             bg */
    [SchemeNorm]          = { normfgcolor,   normbgcolor },
    [SchemeSel]           = { selfgcolor,    selbgcolor  }, 
    [SchemeSelHighlight]  = { selhlfgcolor,  selhlbgcolor }, 
    [SchemeNormHighlight] = { normhlfgcolor, normhlbgcolor }, 
	[SchemeOut]           = { outfgcolor,    outbgcolor },
};

/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 2;

/* -h option: minimum height of a menu line */
static unsigned int lineheight = 26;
static unsigned int min_lineheight = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 1;

/*
* Xresources preferences to load at startup
*/
ResourcePref resources[] = {
    { "font",          STRING, &font },
    { "normfgcolor",   STRING, &normfgcolor },
    { "normbgcolor",   STRING, &normbgcolor },
    { "selfgcolor",    STRING, &selfgcolor },
    { "selbgcolor",    STRING, &selbgcolor },
    { "outfgcolor",    STRING, &outfgcolor },
    { "outbgcolor",    STRING, &outbgcolor },
    { "normhlfgcolor", STRING, &normhlfgcolor },
    { "normhlbgcolor", STRING, &normhlbgcolor },
    { "selhlfgcolor",  STRING, &selhlfgcolor },
    { "selhlbgcolor",  STRING, &selhlbgcolor },
    { "prompt",        STRING, &prompt },
};


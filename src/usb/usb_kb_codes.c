#include "usb_kb_codes.h"

const keymap keycode_map[] = {
    {NULL},
    {NULL},
    {NULL},
    {NULL},
    {.name="A", .keys="Aa"},
    {.name="B", .keys="Bb"},
    {.name="C", .keys="Cc"},
    {.name="D", .keys="Dd"},
    {.name="E", .keys="Ee"},
    {.name="F", .keys="Ff"},
    {.name="G", .keys="Gg"},
    {.name="H", .keys="Hh"},
    {.name="I", .keys="Ii"},
    {.name="J", .keys="Jj"},
    {.name="K", .keys="Kk"},
    {.name="L", .keys="Ll"},
    {.name="M", .keys="Mm"}, // 0x10
    {.name="N", .keys="Nn"},
    {.name="O", .keys="Oo"},
    {.name="P", .keys="Pp"},
    {.name="Q", .keys="Qq"},
    {.name="R", .keys="Rr"},
    {.name="S", .keys="Ss"},
    {.name="T", .keys="Tt"},
    {.name="U", .keys="Uu"},
    {.name="V", .keys="Vv"},
    {.name="W", .keys="Ww"},
    {.name="X", .keys="Xx"},
    {.name="Y", .keys="Yy"},
    {.name="Z", .keys="Zz"},
    {.name="1", .keys="1"},
    {.name="2", .keys="2"},
    {.name="3", .keys="3"}, // 0x20
    {.name="4", .keys="4"},
    {.name="5", .keys="5"},
    {.name="6", .keys="6"},
    {.name="7", .keys="7"},
    {.name="8", .keys="8"},
    {.name="9", .keys="9"},
    {.name="0", .keys="0"},
    {.name="ENTER", .keys="\n"},
    {.name="ESCAPE", .keys=NULL},
    {.name="BACKSPACE", .keys="\b"},
    {.name="TAB", .keys="\t"},
    {.name="SPACE", .keys=" "},
    {.name="MINUS", .keys="-_"}, //- _
    {.name="EQUAL", .keys="="},
    {.name="LEFTBRACKET", .keys="["},
    {.name="RIGHTBRACKET", .keys="]"}, // 0x30
    {.name="BACKSLASH", .keys="\\"}, // \ |
    {.name="NONUS_HASH", .keys="#~"}, // Non-US # ~
    {.name="SEMICOLON", .keys=";:"}, // ; :
    {.name="QUOTE", .keys="\"'"}, // ' "
    {.name="GRAVE", .keys="~`"}, // ~ `
    {.name="COMMA", .keys=","}, // < ,
    {.name="DOT", .keys="."},   // > .
    {.name="SLASH", .keys="?/"},  // ? /
    {.name="CAPSLOCK", .keys=NULL},
    {.name="F1", .keys=NULL},
    {.name="F2", .keys=NULL},
    {.name="F3", .keys=NULL},
    {.name="F4", .keys=NULL},
    {.name="F5", .keys=NULL},
    {.name="F6", .keys=NULL},
    {.name="F7", .keys=NULL}, // 0x40
    {.name="F8", .keys=NULL},
    {.name="F9", .keys=NULL},
    {.name="F10", .keys=NULL},
    {.name="F11", .keys=NULL},
    {.name="F12", .keys=NULL},
    {.name="PRINTSCREEN", .keys=NULL},
    {.name="SCROLLLOCK", .keys=NULL},
    {.name="PAUSE", .keys=NULL},
    {.name="INSERT", .keys=NULL},
    {.name="HOME", .keys=NULL},
    {.name="PGUP", .keys=NULL},
    {.name="DELETE", .keys=NULL},
    {.name="END", .keys=NULL},
    {.name="PGDOWN", .keys=NULL},
    {.name="RIGHT", .keys=NULL},
    {.name="LEFT", .keys=NULL}, // 0x50
    {.name="DOWN", .keys=NULL},
    {.name="UP", .keys=NULL},
    {.name="NUMLOCK", .keys=NULL},
    {.name="KP_SLASH", .keys=NULL},
    {.name="KP_ASTERISK", .keys=NULL},
    {.name="KP_MINUS", .keys=NULL},
    {.name="KP_PLUS", .keys=NULL},
    {.name="KP_ENTER", .keys=NULL},
    {.name="KP_1", .keys=NULL},
    {.name="KP_2", .keys=NULL},
    {.name="KP_3", .keys=NULL},
    {.name="KP_4", .keys=NULL},
    {.name="KP_5", .keys=NULL},
    {.name="KP_6", .keys=NULL},
    {.name="KP_7", .keys=NULL},
    {.name="KP_8", .keys=NULL}, // 0x60
    {.name="KP_9", .keys=NULL},
    {.name="KP_0", .keys=NULL},
    {.name="KP_DOT", .keys=NULL},
    {.name="NONUS_BACKSLASH", .keys="\\|"}, // Non-US \ |
    {.name="APPLICATION", .keys=NULL},
    {.name="POWER", .keys=NULL},
    {.name="KP_EQUAL", .keys=NULL},
    {.name="F13", .keys=NULL},
    {.name="F14", .keys=NULL},
    {.name="F15", .keys=NULL},
    {.name="F16", .keys=NULL},
    {.name="F17", .keys=NULL},
    {.name="F18", .keys=NULL},
    {.name="F19", .keys=NULL},
    {.name="F20", .keys=NULL},
    {.name="F21", .keys=NULL}, // 0x70
    {.name="F22", .keys=NULL},
    {.name="F23", .keys=NULL},
    {.name="F24", .keys=NULL},
    {.name="EXECUTE", .keys=NULL},
    {.name="HELP", .keys=NULL},
    {.name="MENU", .keys=NULL},
    {.name="SELECT", .keys=NULL},
    {.name="STOP", .keys=NULL},
    {.name="AGAIN", .keys=NULL},
    {.name="UNDO", .keys=NULL},
    {.name="CUT", .keys=NULL},
    {.name="COPY", .keys=NULL},
    {.name="PASTE", .keys=NULL},
    {.name="FIND", .keys=NULL},
    {.name="MUTE", .keys=NULL},
    {.name="VOLUME_UP", .keys=NULL}, // 0x80
    {.name="VOLUME_DOWN", .keys=NULL},
    {.name="LOCKING_CAPS", .keys=NULL},
    {.name="LOCKING_NUM", .keys=NULL},
    {.name="LOCKING_SCROLL", .keys=NULL},
    {.name="KP_COMMA", .keys=NULL},
    {.name="KP_EQUAL_AS400", .keys=NULL}, // = on AS/400
    {.name="INT1", .keys=NULL},
    {.name="INT2", .keys=NULL},
    {.name="INT3", .keys=NULL},
    {.name="INT4", .keys=NULL},
    {.name="INT5", .keys=NULL},
    {.name="INT6", .keys=NULL},
    {.name="INT7", .keys=NULL},
    {.name="INT8", .keys=NULL},
    {.name="INT9", .keys=NULL},
    {.name="LANG1", .keys=NULL}, // 0x90
    {.name="LANG2", .keys=NULL},
    {.name="LANG3", .keys=NULL},
    {.name="LANG4", .keys=NULL},
    {.name="LANG5", .keys=NULL},
    {.name="LANG6", .keys=NULL},
    {.name="LANG7", .keys=NULL},
    {.name="LANG8", .keys=NULL},
    {.name="LANG9", .keys=NULL},
    {.name="ALT_ERASE", .keys=NULL},
    {.name="SYSREQ", .keys=NULL},
    {.name="CANCEL", .keys=NULL},
    {.name="CLEAR", .keys=NULL},
    {.name="PRIOR", .keys=NULL},
    {.name="RETURN", .keys=NULL},
    {.name="SEPARATOR", .keys=NULL},
    {.name="OUT", .keys=NULL}, // 0xa0
    {.name="OPER", .keys=NULL},
    {.name="CLEAR_AGAIN", .keys=NULL},
    {.name="CRSEL", .keys=NULL},
    {.name="EXSEL", .keys=NULL},

    {.name="SYSTEM_POWER", .keys=NULL},
    {.name="SYSTEM_SLEEP", .keys=NULL},
    {.name="SYSTEM_WAKE", .keys=NULL},

    {.name="AUDIO_MUTE", .keys=NULL},
    {.name="AUDIO_VOL_UP", .keys=NULL},
    {.name="AUDIO_VOL_DOWN", .keys=NULL},
    {.name="MEDIA_NEXT_TRACK", .keys=NULL},
    {.name="MEDIA_PREV_TRACK", .keys=NULL},
    {.name="MEDIA_STOP", .keys=NULL},
    {.name="MEDIA_PLAY_PAUSE", .keys=NULL},
    {.name="MEDIA_SELECT", .keys=NULL},
    {.name="MEDIA_EJECT", .keys=NULL}, // 0xb0
    {.name="MAIL", .keys=NULL},
    {.name="CALCULATOR", .keys=NULL},
    {.name="MY_COMPUTER", .keys=NULL},
    {.name="WWW_SEARCH", .keys=NULL},
    {.name="WWW_HOME", .keys=NULL},
    {.name="WWW_BACK", .keys=NULL},
    {.name="WWW_FORWARD", .keys=NULL},
    {.name="WWW_STOP", .keys=NULL},
    {.name="WWW_REFRESH", .keys=NULL},
    {.name="WWW_FAVORITES", .keys=NULL},
    {.name="MEDIA_FAST_FORWARD", .keys=NULL},
    {.name="MEDIA_REWIND", .keys=NULL}, // 0xbc

    {.name="LEFT_CTRL", .keys=NULL}, // 0xbd
    {.name="LEFT_SHIFT", .keys=NULL}, // 0xbe
    {.name="LEFT_ALT", .keys=NULL}, // 0xbf
    {.name="LEFT_GUI", .keys=NULL}, // 0xc0
    {.name="RIGHT_CTRL", .keys=NULL}, // 0xc1
    {.name="RIGHT_SHIFT", .keys=NULL}, // 0xc2
    {.name="RIGHT_ALT", .keys=NULL}, // 0xc3
    {.name="RIGHT_GUI", .keys=NULL}, // 0xc4
};

const keymap *USB_KB_get_keymap(enum kb_hid_code code) {
  return &keycode_map[code];
}

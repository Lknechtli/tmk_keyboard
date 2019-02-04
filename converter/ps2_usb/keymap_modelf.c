#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: default
     * ,-------.  ,-----------------------------------------------------------.  ,---------------.
     * |F1 |F2 |  |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| \ | ` |  |  7|  8|  9|  /|
     * |-------|  |-----------------------------------------------------------|  |---------------|
     * |F3 |F4 |  |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|  |  4|  5|  6|  *|
     * |-------|  |-----------------------------------------------------------|  |---------------|
     * |F5 |F6 |  |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |  |  1|  2|  3|  -|
     * |-------|  |-----------------------------------------------------------|  |---------------|
     * |F7 |F8 |  |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |  |  0|Up |  .|  +|
     * |-------|  |-----------------------------------------------------------|  |-----------|---|
     * |F9 |F10|  |Alt  |----|Gui |         Space         |Gui |----|----| Fn |  |Lef|Dow|Rig|Ent|
     * `-------'  `-----------------------------------------------------------'  `---------------'
     */
    KEYMAP_MODEL_F(
    F1, F3,   ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0, MINS,EQL,BSLS,GRAVE  P7,  P8,  P9,PSLS
    F3, F4,   TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P, LBRC,RBRC,  BPSC,    P4,  P5,  P6,PAST
    F5, F6,  LCTRL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,     P1,  P2,  P3,PMNS
    F7, F8,   LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,    P0,  UP,PDOT,PPLS
    F9, F10,  LALT,      LGUI,        SPC,                RGUI,      FN0,             LEFT,DOWN,RIGHT,PENT
    ),

    /* 1: Fn Layer
     */
    KEYMAP_MODEL_F(
    ),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),    // tilde
};
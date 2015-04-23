/* 
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Gui|Alt |         Space         |Fn1  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,       \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,             \
                LGUI,LALT,          SPC,                FN1, RALT),

    /* Layer 1: Dvorak Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  [|  ]|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  :|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Gui|Alt |         Space         |Fn1  |Alt|
     *       `-------------------------------------------'
     */
    [1] = \
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC, BSLS,GRV,   \
           TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL, BSPC,       \
           LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,ENT,             \
           LSFT,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,   RSFT,FN0,             \
                LGUI,LALT,          SPC,                FN1, RALT),

    /* Layer 2: Alt Fn
    * ,-----------------------------------------------------------.
    * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |
    * |-----------------------------------------------------------|
    * |     |Hom|Up |End|PgU|   |   |   |   |   |   |   |   |     |
    * |-----------------------------------------------------------|
    * |      |Lef|Dow|Rig|PgD|   |   |   |   |   |   |   |        |
    * |-----------------------------------------------------------|
    * |        |   |   |   |   |   |   |   |   |   |   |      |   |
    * `-----------------------------------------------------------'
    *       |   |     |                       |     |   |
    *       `-------------------------------------------'
    */
    [2] = \
    KEYMAP(TRNS, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, TRNS, \
           TRNS,HOME,UP,  END, PGUP,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  TRNS, \
           TRNS,LEFT,DOWN,RGHT,PGDN,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  TRNS, \
           TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  TRNS,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 3: HHKB mode[HHKB Fn]
    * ,-----------------------------------------------------------.
    * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
    * |-----------------------------------------------------------|
    * |     |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |     |
    * |-----------------------------------------------------------|
    * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|        |
    * |-----------------------------------------------------------|
    * |        |FN2|FN3|FN4|   |   |  +|  -|End|PgD|Dow|      |   |
    * `-----------------------------------------------------------'
    *       |   |     |                       |     |   |
    *       `-------------------------------------------'
    */
    [3] = \
    KEYMAP(GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           TRNS,NO,  NO,  NO,  NO,  NO,  NO,  NO,  PSCR,SLCK,PAUS, UP, NO,  TRNS, \
           TRNS,VOLD,VOLU,MUTE,NO,  NO,  PAST,PSLS,HOME,PGUP,LEFT,RGHT,TRNS, \
           TRNS,FN2, FN3, FN4, NO,  NO,  PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_MOMENTARY(3),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_TOGGLE(1),
    [3] = ACTION_LAYER_TOGGLE(3),
    [4] = ACTION_LAYER_TOGGLE(2),
};

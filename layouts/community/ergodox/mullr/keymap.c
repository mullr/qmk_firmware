#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define L1   1

/* #define KC_CA (MOD_LCTL | MOD_LSFT) */
/* #define MOD_SCA (MOD_LCTL | MOD_LSFT | MOD_LALT) */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *

 　　
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  | SCA  |           |  SCA |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Ctrl   |   A  |   S  |   D  | L1,F |   G  |------|           |------|   H  | L1,J |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  CA  |           |  CA  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  `   |  '   |      |   ←  | GUI,→|                                       | GUI,↑|   ↓  |   [  |   ]  |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Copy | Paste|       | PgUp | PgDn |
 *                                 ,------|------|------|       |------+------+-----.
 *                                 |      |      |      |       |      |      |     |
 *                                 | SPC  |  BS  |------|       |------| RET  | SPC |
 *                                 |      |      | ALT  |       |  ESC |      |     |
 *                                 `--------------------'       `-------------------'
 */
  [BASE] = LAYOUT_ergodox(  // layer 0 : default
    // left
    KC_GRV,   KC_1,    KC_2,    KC_3,     KC_4,           KC_5,   KC_NO,
    KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,           KC_T,   LSFT(LCA(KC_NO)),
    KC_LCTL,  KC_A,    KC_S,    KC_D,     LT(L1, KC_F),   KC_G,
    KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,           KC_B,   LCA(KC_NO),
    KC_GRV,   KC_QUOT, KC_NO,   KC_LEFT,  GUI_T(KC_RIGHT),

    // left thumb
             LCTL(KC_C), LSFT(KC_INS),
                         KC_NO,
    KC_SPC,  KC_BSPC,    KC_LALT,

    // right
    KC_NO,            KC_6,         KC_7,         KC_8,    KC_9,    KC_0,    KC_MINS,
    LSFT(LCA(KC_NO)), KC_Y,         KC_U,         KC_I,    KC_O,    KC_P,    KC_BSLS,
                      KC_H,         KC_J,         KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    LCA(KC_NO),       KC_N,         KC_M,         KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                    GUI_T(KC_UP), KC_DOWN, KC_LBRC, KC_RBRC, KC_NO,

    // right thumb
    KC_PGUP, KC_PGDN,
    KC_NO,
    KC_ESC, KC_ENT, KC_SPC
  ),

/* Layer 1
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        | F1   |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |  F11   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      | Home | PgDn | PgUp | End  |      |  F12   |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|   ←  |   ↓  |  ↑   |  →   |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA AND MOUSE
[L1] = LAYOUT_ergodox(
  // left
  KC_TRNS,   KC_F1,        KC_F2,      KC_F3,   KC_F4,   KC_F5,   KC_TRNS,
  KC_TRNS,   KC_TRNS,      KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS,   KC_TRNS,      KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS,   KC_TRNS,      KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS,   KC_TRNS,      KC_TRNS,    KC_TRNS, KC_TRNS,

  // left thumb
            KC_TRNS, KC_TRNS,
                     KC_TRNS,
  KC_TRNS,  KC_LSFT, KC_TRNS,

  // right
  KC_TRNS,  KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_F11,
  KC_TRNS,  KC_HOME,   KC_PGDN, KC_PGUP, KC_END,  KC_TRNS,   KC_F12,
            KC_LEFT,   KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS,   KC_TRNS,
  KC_TRNS,  KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,

  // right thumb
  KC_TRNS,  KC_TRNS,
  KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS
)
};


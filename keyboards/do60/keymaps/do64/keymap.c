#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // 0: Base Layer
  [0] = LAYOUT_all(
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_GRV,   KC_BSPC,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,           KC_BSLS,
      MO(1),   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_NO,             KC_ENT,
      KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_SLSH, KC_UP,    KC_DEL,
      KC_LCTL, KC_LGUI, KC_LALT,                  KC_SPC, KC_SPC, KC_BSPC,                 KC_RGUI, MO(1),    KC_LEFT, KC_DOWN,  KC_RIGHT
    ),

  // 1: Function Layer
  [1] = LAYOUT_all(
      RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_NO,    KC_PSCR,
      KC_TAB,  KC_MUTE, KC_WH_U, KC_VOLU, RGB_MOD,  BL_ON,  BL_OFF, KC_NO,  KC_INS, KC_NO,   KC_PSCR, KC_SLCK,  KC_PAUS,           KC_DEL,
      KC_NO,   KC_NO,   KC_WH_D, KC_VOLD, RGB_RMOD, KC_NO,  KC_LEFT,KC_DOWN,KC_UP,  KC_RIGHT,KC_NO,   KC_NO,    KC_NO,             KC_ENT,
      KC_LSFT, KC_NO,   KC_MPRV, KC_MNXT, KC_MPLY,  KC_MSTP,KC_NO,  KC_NO,  KC_NO,  KC_HOME, KC_END,  KC_RSFT,  KC_RSFT, KC_PGUP,  KC_INS,
      KC_LCTL, KC_LGUI, KC_LALT,                    KC_BSPC,KC_SPC, KC_DEL,                  KC_RGUI, MO(1),    KC_HOME, KC_PGDOWN,KC_END
    ),

};

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// Base
	[0] = LAYOUT(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, LCTL_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH), KC_UP, LT(2,KC_DEL), KC_LCTL, KC_LGUI, LM(1,MOD_LALT), KC_SPC, KC_RALT, MO(1), KC_LEFT, KC_DOWN, KC_RGHT),
	// Fn
	[1] = LAYOUT(TO(3), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TRNS, KC_GRV, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_CALC, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, RESET, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGUP, EEP_RST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_PGDN, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, TO(4), TO(5), KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT),
	// Light
	[2] = LAYOUT(KC_TRNS, KC_F2, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_TRNS, RGB_TOG, KC_TRNS, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPI, RGB_SPD, KC_TRNS, KC_TRNS, EEP_RST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	// Numpad
	[3] = LAYOUT(KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_PENT, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_PDOT, KC_PENT, KC_P0, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS),
	// Switch Lalt and Lgui
	[4] = LAYOUT(KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLASH, LCTL_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH), KC_UP, LT(2,KC_DEL), KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RALT, TO(0), KC_LEFT, KC_DOWN, KC_RGHT),
	// Functional
	[5] = LAYOUT(KC_NO, TO(6), TO(7), TO(8), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_NO, KC_MPRV, KC_MS_U, KC_MNXT, KC_MPLY, KC_MSTP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_ENT, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, TO(0), KC_MS_L, KC_MS_D, KC_MS_R),
	// Dvorak layout
	[6] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC, KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_PLUS, KC_BSLS, KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT, KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_UP, LT(2,KC_DEL), KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, TO(0), KC_LEFT, KC_DOWN, KC_RGHT),
	[7] = LAYOUT(KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO),
	[8] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO)
};

void rgb_matrix_indicators_user(void) {
	  uint8_t this_led = host_keyboard_leds();
	  if (!g_suspend_state) {
	    switch (biton32(layer_state)) {
        case 3:
          if ( this_led & (1<<USB_LED_NUM_LOCK)) {
            rgb_matrix_set_color(13, 0xFF, 0x00, 0x00);
          } else {
            rgb_matrix_set_color(13, 0x00, 0x00, 0x00);
          }
          rgb_matrix_set_color(0, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(1, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(1, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(2, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(3, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(4, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(5, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(6, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(7, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(8, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(9, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(10, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(11, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(12, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(14, 0x00, 0x00, 0xFF);
          rgb_matrix_set_color(15, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(16, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(17, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(18, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(19, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(20, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(21, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(22, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(23, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(24, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(25, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(26, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(27, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(28, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(29, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(30, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(31, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(32, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(33, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(34, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(35, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(36, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(37, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(38, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(39, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(40, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(41, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(42, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(43, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(44, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(45, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(46, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(47, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(48, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(49, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(50, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(51, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(52, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(53, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(54, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(55, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(56, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(57, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(58, 0x00, 0xFF, 0x00);
          rgb_matrix_set_color(59, 0xFF, 0x00, 0x00);
          rgb_matrix_set_color(60, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(61, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(62, 0x00, 0x00, 0x00);
          break;
	      case 4:
	        rgb_matrix_set_color_all(0xFF, 0xFF, 0x00);
          break;
        case 5:
          rgb_matrix_set_color(0, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(1, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(2, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(3, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(4, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(5, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(6, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(7, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(8, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(9, 0x00, 0x00, 0x00);
          rgb_matrix_set_color(10, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(11, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(12, 0xFF, 0xFF, 0x00);
          rgb_matrix_set_color(25, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(32, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(33, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(37, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(38, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(39, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(44, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(45, 0x8A, 0x2B, 0xE2);
          rgb_matrix_set_color(46, 0x8A, 0x2B, 0xE2);
		  break;
        case 6:
		  rgb_matrix_set_color_all(0x00, 0x00, 0xFF);
		  break;
      }
    }
    if ( this_led & (1<<USB_LED_CAPS_LOCK)) {
      rgb_matrix_set_color(40, 0xFF, 0xFF, 0xFF);
    }
}

void matrix_init_user(void) {
  //user initialization
}

void matrix_scan_user(void) {
  //user matrix
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	  return true;
}
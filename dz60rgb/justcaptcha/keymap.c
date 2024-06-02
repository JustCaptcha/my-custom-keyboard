#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC,        KC_1,    KC_2,            KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL,  KC_BSPC,
        KC_TAB,         KC_Q,    KC_W,            KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,         KC_RBRC, KC_BSLS,
        CTL_T(KC_CAPS), KC_A,    KC_S,            KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                  KC_ENT,
        KC_LSFT,                 KC_Z,            KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH), KC_UP,   LT(2, KC_DEL),
        KC_LCTL,        KC_LGUI, LM(1, MOD_LALT),                            KC_SPC,                    KC_RALT, MO(1),   KC_LEFT,         KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        TO(3),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, _______, KC_UP,   _______, _______, _______, KC_CALC, _______, KC_INS,  _______, KC_PSCR, KC_SCRL, KC_PAUS, QK_BOOT,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP,          EE_CLR,
        _______,          _______, _______, _______, _______, _______, NK_TOGG, _______, _______, KC_END,  KC_PGDN, KC_VOLU, KC_MUTE,
        _______, _______, _______,                            _______,                   _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [2] = LAYOUT(
        KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, RGB_TOG, _______, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, RGB_MOD, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPI, RGB_SPD, _______, _______,          EE_CLR,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, _______,
        _______, KC_P7,   KC_P8,   KC_P9,   _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   _______, _______, TO(0),
        _______, KC_P4,   KC_P5,   KC_P6,   _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   _______,          KC_PENT,
        _______,          KC_P1,   KC_P2,   KC_P3,   _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
        _______, KC_P0,   KC_LALT,                            KC_PENT,                   KC_P0,   KC_PDOT, _______, _______, _______
    )
};


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 3: {
                rgb_matrix_set_color(0, 0xFF, 0xFF, 0xFF); // Backspace
                rgb_matrix_set_color(1, 0xFF, 0xFF, 0xFF); // +
                rgb_matrix_set_color(2, 0xFF, 0xFF, 0xFF); // -
                rgb_matrix_set_color(3, 0xFF, 0xFF, 0xFF); // 0
                rgb_matrix_set_color(4, 0xFF, 0xFF, 0xFF); // 9
                rgb_matrix_set_color(5, 0x00, 0x00, 0x00); // 8
                rgb_matrix_set_color(6, 0x00, 0x00, 0x00); // 7
                rgb_matrix_set_color(7, 0x00, 0x00, 0x00); // 6
                rgb_matrix_set_color(8, 0x00, 0x00, 0x00); // 5
                rgb_matrix_set_color(9, 0xFF, 0xFF, 0xFF); // 4
                rgb_matrix_set_color(10, 0xFF, 0xFF, 0xFF); // 3
                rgb_matrix_set_color(11, 0xFF, 0xFF, 0xFF); // 2
                rgb_matrix_set_color(12, 0xFF, 0xFF, 0xFF); // 1
                rgb_matrix_set_color(13, 0xFF, 0xFF, 0xFF); // ESC
                rgb_matrix_set_color(14, 0x00, 0x00, 0xFF); // '\'
                rgb_matrix_set_color(15, 0x00, 0x00, 0x00); // ]
                rgb_matrix_set_color(16, 0x00, 0x00, 0x00); // [
                rgb_matrix_set_color(17, 0xFF, 0xFF, 0x00); // p
                rgb_matrix_set_color(18, 0xFF, 0xFF, 0x00); // o
                rgb_matrix_set_color(19, 0xFF, 0xFF, 0x00); // i
                rgb_matrix_set_color(20, 0x00, 0x00, 0x00); // u
                rgb_matrix_set_color(21, 0x00, 0x00, 0x00); // y
                rgb_matrix_set_color(22, 0x00, 0x00, 0x00); // t
                rgb_matrix_set_color(23, 0x00, 0x00, 0x00); // r
                rgb_matrix_set_color(24, 0xFF, 0xFF, 0x00); // e
                rgb_matrix_set_color(25, 0xFF, 0xFF, 0x00); // w
                rgb_matrix_set_color(26, 0xFF, 0xFF, 0x00); // q
                rgb_matrix_set_color(27, 0x00, 0x00, 0x00); // TAB
                rgb_matrix_set_color(28, 0xFF, 0xFF, 0xFF); // ENTER
                rgb_matrix_set_color(29, 0x00, 0x00, 0x00); // '
                rgb_matrix_set_color(30, 0xFF, 0xFF, 0x00); // ;
                rgb_matrix_set_color(31, 0xFF, 0xFF, 0x00); // l
                rgb_matrix_set_color(32, 0xFF, 0xFF, 0x00); // k
                rgb_matrix_set_color(33, 0x00, 0x00, 0x00); // j
                rgb_matrix_set_color(34, 0x00, 0x00, 0x00); // h
                rgb_matrix_set_color(35, 0x00, 0x00, 0x00); // g
                rgb_matrix_set_color(36, 0x00, 0x00, 0x00); // f
                rgb_matrix_set_color(37, 0xFF, 0xFF, 0x00); // d
                rgb_matrix_set_color(38, 0xFF, 0xFF, 0x00); // s
                rgb_matrix_set_color(39, 0xFF, 0xFF, 0x00); // a
                rgb_matrix_set_color(40, 0x00, 0x00, 0x00); // CAPS_LOCK
                rgb_matrix_set_color(41, 0x00, 0x00, 0x00); // Delete
                rgb_matrix_set_color(42, 0x00, 0x00, 0x00); // UP
                rgb_matrix_set_color(43, 0xFF, 0xFF, 0x00); // RIGHT_SHIFT
                rgb_matrix_set_color(44, 0xFF, 0xFF, 0x00); // .
                rgb_matrix_set_color(45, 0xFF, 0xFF, 0x00); // ,
                rgb_matrix_set_color(46, 0x00, 0x00, 0x00); // m
                rgb_matrix_set_color(47, 0x00, 0x00, 0x00); // n
                rgb_matrix_set_color(48, 0x00, 0x00, 0x00); // b
                rgb_matrix_set_color(49, 0x00, 0x00, 0x00); // v
                rgb_matrix_set_color(50, 0xFF, 0xFF, 0x00); // c
                rgb_matrix_set_color(51, 0xFF, 0xFF, 0x00); // x
                rgb_matrix_set_color(52, 0xFF, 0xFF, 0x00); // z
                rgb_matrix_set_color(53, 0x00, 0x00, 0x00); // LEFT_SHIFT
                rgb_matrix_set_color(54, 0x00, 0x00, 0x00); // RIGHT
                rgb_matrix_set_color(55, 0x00, 0x00, 0x00); // DOWN
                rgb_matrix_set_color(56, 0x00, 0x00, 0x00); // LEFT
                rgb_matrix_set_color(57, 0xFF, 0xFF, 0xFF); // Smiley face
                rgb_matrix_set_color(58, 0xFF, 0xFF, 0x00); // Kanji
                rgb_matrix_set_color(59, 0xFF, 0xFF, 0xFF); // Space
                rgb_matrix_set_color(60, 0x00, 0x00, 0x00); // LEFT_ALT
                rgb_matrix_set_color(61, 0xFF, 0xFF, 0x00); // SYSTEM_KEY
                rgb_matrix_set_color(62, 0x00, 0x00, 0x00); // LEFT_CTRL
                break;
            }
            case 2:
                //rgb_matrix_set_color(i, RGB_BLUE);
                break;
            case 1:
                rgb_matrix_set_color(1, RGB_GOLD);
                rgb_matrix_set_color(2, RGB_GOLD);
                rgb_matrix_set_color(3, RGB_GOLD);
                rgb_matrix_set_color(4, RGB_GOLD);
                rgb_matrix_set_color(5, RGB_GOLD);
                rgb_matrix_set_color(6, RGB_GOLD);
                rgb_matrix_set_color(7, RGB_GOLD);
                rgb_matrix_set_color(8, RGB_GOLD);
                rgb_matrix_set_color(9, RGB_GOLD);
                rgb_matrix_set_color(10, RGB_GOLD);
                rgb_matrix_set_color(11, RGB_GOLD);
                rgb_matrix_set_color(12, RGB_GOLD);
                rgb_matrix_set_color(13, RGB_BLUE);
                rgb_matrix_set_color(14, RGB_RED);
                rgb_matrix_set_color(15, RGB_PURPLE);
                rgb_matrix_set_color(16, RGB_PURPLE);
                rgb_matrix_set_color(19, RGB_PURPLE);
                rgb_matrix_set_color(25, RGB_WHITE);
                rgb_matrix_set_color(28, RGB_GREEN);
                rgb_matrix_set_color(29, RGB_PURPLE);
                rgb_matrix_set_color(30, RGB_PURPLE);
                rgb_matrix_set_color(37, RGB_WHITE);
                rgb_matrix_set_color(38, RGB_WHITE);
                rgb_matrix_set_color(39, RGB_WHITE);
                rgb_matrix_set_color(41, RGB_CORAL);
                rgb_matrix_set_color(42, RGB_CORAL);
                rgb_matrix_set_color(43, RGB_PURPLE);
                rgb_matrix_set_color(44, RGB_PURPLE);
                rgb_matrix_set_color(55, RGB_CORAL);
                break;
            default:
                break;
        }
    }
    return false;
}

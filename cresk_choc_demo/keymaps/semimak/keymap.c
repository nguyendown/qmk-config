#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ F │ L │ H │ V │ Z │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *               ┌───┐           ┌───┐
      *               │Bsp├───┐   ┌───┤Ent│
      *               └───┤Tab│   │Spc├───┘
      *                   └───┘   └───┘
      */
    [0] = LAYOUT_split_3x5_2(
        KC_F, KC_L, KC_H, KC_V, KC_Z, KC_C, KC_W, KC_U, KC_O, KC_Y,
        KC_S, KC_R, KC_N, KC_T, KC_K, KC_P, KC_D, KC_E, KC_A, KC_I,
        KC_X, KC_J, KC_B, KC_M, KC_Q, KC_QUOTE, KC_G, KC_COMMA, KC_DOT, KC_SLASH,
        OSL(1), KC_SPACE, OSM(MOD_LSFT), OSM(MOD_LCTL)
        ),
    [1] = LAYOUT_split_3x5_2(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_ESCAPE, KC_SEMICOLON, KC_DOWN, KC_BACKSPACE, KC_INSERT, KC_UP, KC_DELETE, KC_END, KC_HOME, KC_TAB,
        KC_GRAVE, KC_PAGE_UP, KC_LEFT_BRACKET, KC_ENTER, KC_LEFT, KC_RIGHT, KC_RIGHT_BRACKET, KC_MINUS, KC_EQUAL, KC_BACKSLASH,
        OSL(2), KC_TRNS, OSM(MOD_LALT), OSM(MOD_LGUI)
        ),
    [2] = LAYOUT_split_3x5_2(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
        KC_F11, KC_F12, KC_TRNS, KC_BACKSPACE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_PAGE_DOWN, KC_TRNS, KC_ENTER, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_NO, KC_TRNS, OSM(MOD_LSFT | MOD_LALT), OSM(MOD_LCTL | MOD_LGUI)
        ),
};

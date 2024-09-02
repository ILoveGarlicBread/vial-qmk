#include QMK_KEYBOARD_H
#include "keymap_steno.h"
enum layers {
    _STENO
};
/*
const uint16_t PROGMEM boot_combo[] = {KC_BSPC, KC_LSFT, COMBO_END};
combo_t combos[] = {
    COMBO(boot_combo, QK_BOOTLOADER),
};
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_STENO] = LAYOUT(
        KC_BSPC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_U, KC_I, KC_O, KC_P, KC_LBRC, QK_BOOT,
	 	KC_SPACE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LCTL,
	 	            KC_1, KC_C, KC_V, KC_N, KC_M, KC_2)
/*
    [_STENO] = LAYOUT(
        KC_BSPC, STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,  KC_LSFT ,
		KC_SPACE, STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,  KC_LCTL ,
		                  STN_N1,  STN_A,   STN_O,    STN_E,    STN_U,   STN_N2),
*/
};


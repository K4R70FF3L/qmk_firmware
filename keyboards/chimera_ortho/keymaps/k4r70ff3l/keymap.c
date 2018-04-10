// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include "chimera_ortho.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum chimera_ortho_layers
{
	_QWERTZ,
	_SHIFT,
  _WGS,
  _SWGS,
	_NUMPAD,
	_SYMBOLS,
	_MACROS,
	_NAV
};

enum {
  X_TAP_DANCE = 0
};

#define KC_NMPD MO(_NUMPAD)
#define KC_SYMB MO(_SYMBOLS)
#define KC_GTNA MO(_NAV)
#define KC_SPFN LT(_NAV,KC_EQL)
#define KC_WGS OSL(_WGS)
#define KC_SWGS OSL(_SWGS)
#define KC_SCTL MT(MOD_LCTL, KC_LBRC)
#define KC_SCTR MT(MOD_LCTL, KC_RBRC)
#define KC_SPLT MT(MOD_LALT, KC_MINS)
#define KC_SPRT MT(MOD_LALT, KC_1)
#define KC_GBRC MT(MOD_RGUI, KC_8)
#define KC_GQOT MT(MOD_LGUI, KC_QUOT)
#define KC_MESC LT(_MACROS, KC_ESC)
#define KC_LSSP LT(_SHIFT, KC_SPC)
#define KC_INCL M(0)
#define KC_PULL M(1)
#define KC_PUSH M(2)
#define KC_SCAP M(3)
#define KC_SCOF M(4)
#define KC_GALT TD(X_TAP_DANCE)
#define KC_CAD LALT(LCTL(KC_DEL))
#define KC_SNUBS S(KC_NUBS)
#define KC_SNUHS S(KC_NUHS)
#define KC_SQUOT S(KC_QUOT)
#define KC_SLBRC S(KC_LBRC)
#define KC_SSCLN S(KC_SCLN)
#define KC_SAST S(KC_RBRC)
#define KC_GAT LCTL(LALT(KC_Q))
#define KC_GLBK LCTL(LALT(KC_8))
#define KC_GRBK LCTL(LALT(KC_9))
#define KC_GLBC LCTL(LALT(KC_7))
#define KC_GRBC LCTL(LALT(KC_0))
#define KC_GBSL LCTL(LALT(KC_MINS))
#define KC_GPIP LCTL(LALT(KC_NUBS))
#define KC_EURO LCTL(LALT(KC_E))
#define KC_SA S(KC_A)
#define KC_SB S(KC_B)
#define KC_SC S(KC_C)
#define KC_SD S(KC_D)
#define KC_SE S(KC_E)
#define KC_SF S(KC_F)
#define KC_SG S(KC_G)
#define KC_SH S(KC_H)
#define KC_SI S(KC_I)
#define KC_SJ S(KC_J)
#define KC_SK S(KC_K)
#define KC_SL S(KC_L)
#define KC_SM S(KC_M)
#define KC_SN S(KC_N)
#define KC_SO S(KC_O)
#define KC_SP S(KC_P)
#define KC_SQ S(KC_Q)
#define KC_SR S(KC_R)
#define KC_SS S(KC_S)
#define KC_ST S(KC_T)
#define KC_SU S(KC_U)
#define KC_SV S(KC_V)
#define KC_SW S(KC_W)
#define KC_SX S(KC_X)
#define KC_SY S(KC_Y)
#define KC_SZ S(KC_Z)

#define LONGPRESS_DELAY 150
//#define LAYER_TOGGLE_DELAY 300

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC_ KC_TRNS 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTZ] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
     MESC, Q  , W  , E  , R  , T  ,GTNA,      GTNA, Y  , U  , I  , O  , P  ,BSPC,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     LALT, A  , S  , D  , F  , G  ,WGS ,      WGS , H  , J  , K  , L  , LT , AT ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     LCTL, Z  , X  , C  , V  , B  ,LGUI,      RALT, N  , M  ,COMM,DOT ,AMPR,ENT ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                         NMPD,LSSP,                LSSP,SYMB
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_SHIFT] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
     TILD, SQ , SW , SE , SR , ST ,    ,          , SY , SU , SI , SO , SP ,DEL ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     TAB, SA , SS , SD , SF , SG ,SWGS,      SWGS, SH , SJ , SK , SL , GT ,SNUHS,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     LCTL, SZ , SX , SC , SV , SB ,LGUI,      GALT, SN , SM ,NUBS,SNUBS,UNDS,INS,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                         SYMB,    ,                    ,    
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_WGS] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
         ,    ,    ,EURO,    ,    ,    ,          ,    ,LBRC,    ,SCLN,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,QUOT,MINS,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                             ,    ,                    ,    
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_SWGS] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,    ,          ,    ,SLBRC,   ,SSCLN,   ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,SQUOT,UNDS,   ,    ,    ,    ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                             ,    ,                    ,    
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_NUMPAD] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
         , 1  , 2  , 3  , 4  , 5  ,    ,          , 6  , 7  , 8  , 9  , 0  ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         , F1 , F2 , F3 , F4 , F5 , F6 ,          ,    ,GLBK,GRBK,SLSH,RPRN,GBSL,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         , F7 , F8 , F9 ,F10 ,F11 ,F12 ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                             ,    ,                    ,    
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_SYMBOLS] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
         ,EXLM,GAT ,NUHS,DLR ,PERC,    ,          ,GRV ,CIRC,SAST,ASTR,LPRN,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         , F1 , F2 , F3 , F4 , F5 ,    ,          ,    ,GLBC,GRBC,RBRC,QUES,GPIP,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         , F6 , F7 , F8 , F9 ,F10 ,    ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                             ,    ,                    ,
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_NAV] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,    ,          ,    ,    ,    ,    ,PSCR,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,          ,LEFT,DOWN, UP ,RGHT,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,    ,    ,    ,    ,    ,    ,          ,    ,PGUP,PGDN,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                             ,    ,                    ,    
  // \------------------+----+----+---/       \---+----+----+-------------------/
  ),

  [_MACROS] = KC_KEYMAP(  
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
         ,    ,    ,    ,    ,    ,    ,          ,    ,    ,INCL,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
         ,    ,    ,CAD ,    ,    ,    ,          ,    ,    ,    ,    ,    ,    ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     SCAP,    ,    ,    ,    ,    ,    ,          ,    ,    ,PULL,PUSH,    ,SCAP,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
                             ,    ,                    ,    
  // \------------------+----+----+---/       \---+----+----+-------------------/
  )

};


const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  switch(id) {
    /* include some kind of library or header */
    case 0:
      if (record->event.pressed) {
        SEND_STRING("#include <>");
        return MACRO( T(LEFT), END);
      }
      break;
    case 1:
      if (record->event.pressed) {
        SEND_STRING("git pull");
        return MACRO( T(ENT), END );
      }
      break;
    case 2:
      if (record->event.pressed){
        SEND_STRING("git push");
        return MACRO( T(ENT), END );
      }
      break;
    case 3:
      if (record->event.pressed){
        layer_on(_SHIFT);
        register_code(KC_CAPSLOCK);
        unregister_code(KC_CAPSLOCK);
      }
      break;
    case 4:
      if (record->event.pressed){
        layer_off(_SHIFT);
        register_code(KC_CAPSLOCK);
        unregister_code(KC_CAPSLOCK);
      }
      break;
  }
  return MACRO_NONE;
};
 

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);
    
    switch (layer) {
    	case _QWERTZ:
    	    set_led_green;
    	    break;
        case _SHIFT:
	    set_led_white;
	    break;
        case _NUMPAD:
            set_led_blue;
            break;
        case _SYMBOLS:
            set_led_red;
            break;
        case _NAV:
	    set_led_magenta;
	    break;
        case _MACROS:
	    set_led_cyan;
	    break;
       default:
            set_led_green;
            break;
    }
};

enum {
  SINGLE_TAP = 1,
  SINGLE_HOLD = 2,
  DOUBLE_TAP = 3,
  DOUBLE_HOLD = 4,
  DOUBLE_SINGLE_TAP = 5 //send SINGLE_TAP twice - NOT DOUBLE_TAP
  // Add more enums here if you want for triple, quadruple, etc.
};

typedef struct {
  bool is_press_action;
  int state;
} tap;

int cur_dance (qk_tap_dance_state_t *state) {
  if (state->count == 1) {
    //If count = 1, and it has been interrupted - it doesn't matter if it is pressed or not: Send SINGLE_TAP
    if (state->interrupted || state->pressed==0) return SINGLE_TAP;
    else return SINGLE_HOLD;
  }
  //If count = 2, and it has been interrupted - assume that user is trying to type the letter associated
  //with single tap. In example below, that means to send `xx` instead of `Escape`.
  else if (state->count == 2) {
    if (state->interrupted) return DOUBLE_SINGLE_TAP;
    else if (state->pressed) return DOUBLE_HOLD;
    else return DOUBLE_TAP;
  }
  else return 6; //magic number. At some point this method will expand to work for more presses
}

//**************** Definitions needed for quad function to work *********************//

//instanalize an instance of 'tap' for the 'x' tap dance.
static tap xtap_state = {
  .is_press_action = true,
  .state = 0
};

void x_finished (qk_tap_dance_state_t *state, void *user_data) {
  xtap_state.state = cur_dance(state);
  switch (xtap_state.state) {
    case SINGLE_TAP: register_code(KC_NO); break;
    case SINGLE_HOLD: register_code(KC_LALT); break;
    case DOUBLE_TAP: register_code(KC_NO); break;
    case DOUBLE_HOLD: register_code(KC_RALT); break;
    case DOUBLE_SINGLE_TAP: register_code(KC_NO); unregister_code(KC_NO); register_code(KC_NO);
    //Last case is for fast typing. Assuming your key is `f`:
    //For example, when typing the word `buffer`, and you want to make sure that you send `ff` and not `Esc`.
    //In order to type `ff` when typing fast, the next character will have to be hit within the `TAPPING_TERM`, which by default is 200ms.
  }
}

void x_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (xtap_state.state) {
    case SINGLE_TAP: unregister_code(KC_NO); break;
    case SINGLE_HOLD: unregister_code(KC_LALT); break;
    case DOUBLE_TAP: unregister_code(KC_NO); break;
    case DOUBLE_HOLD: unregister_code(KC_RALT);
    case DOUBLE_SINGLE_TAP: unregister_code(KC_NO);
  }
  xtap_state.state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [X_TAP_DANCE] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished, x_reset)
// Other declarations would go here, separated by commas, if you have them
};

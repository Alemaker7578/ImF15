// ImF15 A keyboard experiment for entertainment purposes only
// GeekMustHave.com June 2017
// Use or modify this sketch at your own risk

// DigiKeyboard - This is the keyboard library for the ATTiny85
// Full documentation at http://www.usb.org/developers/hidpage/Hut1_12v2.pdf

// NOTE: Changes needed to be made to the library below to include the DELETE key
// (jschust2) is my user name, yours will be different, unless you are a clone of me
// C:\Users\jschust2\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard\DisgiSparkKeyboard.h

// NOTE: Changes needed to the Digispark USB configuration file to make this USB look like an HP keyboard
// (jschust2) is my user name, yours will be different, unless you are a clone of me
// C:\Users\jschust2\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard\usbconfig.h
// Change vid=046d, pid=c52b

#include <DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:
  // Keyboard keys to Start Notepad, display message
  // It may need to be modified to include some missing keys

  DigiKeyboard.sendKeyStroke(0);  // Used to clean start keyboard
  delay(50);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // meta(Windows key)+r = Run
  delay(100);
  
  DigiKeyboard.sendKeyStroke(KEY_DELETE); // Clean up anything left from last run
  delay(3);
  DigiKeyboard.println("notepad");  // Start Notepad to display ICON
                                    // Note (println) end keys with (Enter)
 
  // Now the confidence message
  delay(2000);
  DigiKeyboard.println("I am your F15 key.  I'm here every minute for you.");
  DigiKeyboard.println("I will keep you active.");
  DigiKeyboard.println("You can close Notepad at any time.");
  DigiKeyboard.println("GeekMustHave.com");
 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Keyboard key (Shift)+(F3) which is the F15 key
  // F15 isn't used in any Windows application I am aware of
  // Press F15, wait a minuite, repeat, continue FOREVER
  DigiKeyboard.sendKeyStroke(KEY_F3, MOD_SHIFT_RIGHT); // (Shift) + (F3) = F15
  delay(60000); // I'm here for you every minute
  

}

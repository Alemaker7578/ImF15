# ImF15
I'm F15 is a small sketch for ATTiny85 USB to simulate a F15 keypress every 1 minute.

## Why?

Some corporate workstations require that you perform some keyboad action, after 15 or so minutes of inacticvity it logs you out.
Then you have to log back in again.

Yes, I know the corporate overlords do this to help in security in large offices or open areas.  
But, in small offices or working from home it is very inconvienent. 

The is a portable (Requires no installation ) Windows program called Caffiene that's sole purpose was to simulatr a F15 keypress once a minute.  Clever.

Some of the Corporate overlords got smart to Caffiene and started to scan for it's signauture and deleting from the workstation.  
Changing it's signature didn't help.

## ATTiny85

The smallest of the Aurdunio family is the ATTiny 85, (8) for 8 bit and (5) for 5 volts.
There is a version that has a USB connedctor on it.

Wait a minute, if you can plug a regular usb keyboard or mouse into the computer and it works then the USB will accept anything that "looks" like a keyboard.  This includes the ATTiny85 if it is coded correctly.


This is nothing but a simple mouse jiggler, to avoid screensavers or logoff policies when you leave your computer unattended, that can be made with a simple Digispark and Arduino IDE.
It moves the cursor by 10px right and back blinking the led.

If you want to anonymize the usb device you have to modify USB_CFG_VENDOR_ID and USB_CFG_DEVICE_ID in usbconfig.h, located in the Digistump hardware folder:
_%LOCALAPPDATA%\Arduino15\packages\digistump\hardware\avr\X.x.x\libraries\DigisparkMouse\usbconfig.h_

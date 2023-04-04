# WioSwitch-v1.0
WioSwitch v1.0 for WioSwitch iOS app and WioSwitchWifiRemote Apple Watch App

https://apps.apple.com/us/app/wioswitch/id1186122678

WioSwitchWiFiRemote v1.0 for Apple Watch

How to setup WioSwitchWiFiRemote and Apple Watch to control ESP8266, ESP32, or NodeMCU boards

We're going to program our ESP8266 board using Arduino IDE

So let's open the Arduino IDE

And open your Safari as well

Then we will copy a piece of code from GitHub https://github.com/cl4612688/WioSwitch-v1.0/blob/main/WioSwitch_v1.0.ino

Paste the sketch to your Arduino IDE

Save to a file

Close your Safari

Now plug the ESP8266 board into your Mac using the micro USB cable

In my example I use NodeMCU 12-F, you can use any board you like

Click on upload

After successfully flashing your ESP8266 device

Note: If you haven't downloaded WioSwitch or WioSwitchWiFiRemote, just go to App Store and search WioSwitch for iOS app or WioSwitchWiFiRemote for Apple Watch, you need to pay $1.99 per app

You can find two download links in the description of this video, one for WioSwitch v2.2 and one for WioSwitchWiFiRemote v1.0

After downloading the WioSwitchWiFiRemote app from the App Store

Open WioSwitchWiFiRemote

First we tap Settings and tap defaults

The defaults function will set the event name to WioSwitch

Tap the Enter ID text field to set the ID 

So let's  type in XyzXyz

Tap Done

Tap Enter the message text field

Type T or t 

Tap Done

Make sure the ID and Message are named correctly

Again make sure the ID is XyzXyz and the message is T or t

Tap < back

So we're done setting up the app

Let's try it now

Just tap the orange WiFi button to turn on the LED on the ESP8266 device

Your ESP8266's LED should light up

Tap the WiFi button again to turn off the LED

Open, close, open, close.

Great, you've managed to control your ESP8266 just by using your WioSwitchWiFiRemote app with your Apple Watch

If you ask family or friends from other countries, they have downloaded WioSwitchWiFiRemote from App Store, then do the same setup like you so they can control your ESP8266 from anywhere in the world

Very simple and easy!

✅ Change device's ID and message
Now let's change the ID and message of your device to make the ID and message unique

in sketch:
Lines 24 and 28 are for your ID
Lines 25 and 29 are for your message

Message T or t for toggle, G13 or g13 for turn on then turn off, and R or r for restart your ESP8266 board.

⚠️NOTE: If someone uses the same settings, you will control each other's device, so please make your ID and message unique, such as adding some emoji, special characters and numbers, so that the ID and message will be remembered.

If you burn the same code to different boards then you can control them together

⚠️Please, please don't trigger any booms or fires!



Usage:

WioSwitch iOS app for iPhone, iPad, and Mac

1. Tap Settings

![IMG_0470](https://user-images.githubusercontent.com/16783493/228397276-b7f2c735-b886-4ffe-8dbc-89fa1980e035.PNG)

2. Tap Default

3. Enter your ID and Message

![IMG_0471](https://user-images.githubusercontent.com/16783493/228397302-5cc76ec2-eff9-4e94-a81e-c1d1769a526e.PNG)

4. Tap Back

5. Tap first button (first image)

Note: Message T or t for toggle, g13 or G13 for on/off, r or R for restart your ESP8266 device


WioSwitchWiFiRemote watchOS app for Apple Watch
1. Tap Settings

![Simulator Screen Shot - Apple Watch Series 8 (45mm) - 2023-03-27 at 20 00 29](https://user-images.githubusercontent.com/16783493/228399937-0de9ceec-4217-46d3-a344-3be465432daf.png)

2. Tap Defaults

![Simulator Screen Shot - Apple Watch Series 8 (45mm) - 2023-03-27 at 20 01 35](https://user-images.githubusercontent.com/16783493/228399962-4e49b6f4-e507-46a9-9f3c-bf54bb5c42e0.png)

3. Enter your ID and Message

![Simulator Screen Shot - Apple Watch Series 8 (45mm) - 2023-03-27 at 20 02 01](https://user-images.githubusercontent.com/16783493/228399998-32fa744b-7611-42bd-beb4-890b4bb24953.png)

4. Tap Back

5. Tap wifi button


Note: Message T or t for toggle, g13 or G13 for on/off, r or R for restart your ESP8266 device


<img width="378" alt="Screenshot 2023-03-28 at 12 41 25 PM" src="https://user-images.githubusercontent.com/16783493/228399891-c22e87e2-24f6-4b2d-9eb6-ff072c298379.png">

<img width="378" alt="Screenshot 2023-03-28 at 12 37 23 PM" src="https://user-images.githubusercontent.com/16783493/228400099-d034c178-d216-4686-abc8-5154301e49d2.png">

<img width="378" alt="Screenshot 2023-03-28 at 12 38 31 PM" src="https://user-images.githubusercontent.com/16783493/228400119-a7fb239d-4c71-4505-8929-005cc1d0448f.png">

![Simulator Screen Shot - Apple Watch Series 8 (45mm) - 2023-03-27 at 20 02 09](https://user-images.githubusercontent.com/16783493/228404650-ec7dca1f-2994-482d-9a7f-5ea293ddb4a1.png)


![Simulator Screen Shot - Apple Watch Series 8 (45mm) - 2023-03-27 at 20 07 53](https://user-images.githubusercontent.com/16783493/228404688-57d5fec4-d17b-4f75-8884-1948ad823c9f.png)


![Simulator Screen Shot - Apple Watch Series 8 (45mm) - 2023-03-27 at 20 02 34](https://user-images.githubusercontent.com/16783493/228404701-c757b5ca-17f2-4f9a-9706-6dc9c5a8f587.png)


<img width="420" alt="49mm" src="https://user-images.githubusercontent.com/16783493/228907520-0afda104-dcf8-4aa8-b9c4-a15f3c69261b.png">


<img width="420" alt="Settings" src="https://user-images.githubusercontent.com/16783493/228907570-81f3d4aa-84d1-4f04-92c6-bc45d2eadfba.png">

<img width="420" alt="Xyz" src="https://user-images.githubusercontent.com/16783493/228907690-a828355c-a644-488a-9a14-f480b60e4294.png">

<img width="420" alt="SF Symbol for Open Closed 49mm" src="https://user-images.githubusercontent.com/16783493/228907732-6d4a07f7-1208-4fd8-8569-bf1d180b4635.png">

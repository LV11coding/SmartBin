# SmartBin <br/>
A smart bin made with an Arduio Uno.
## **Components** <br/>
  1. Some form of a bin with a cover.
  2. Arduino Uno <br/>
  3. Jumper wires, Breadboard (for prototype) <br/>
  4. 2x Ultrasonic sensor HC-SR04 <br/>
  5. 24W wall adapter (at least 2 USB A ports) <br/>
  6. USB A to Female DC Terminal cable <br/>
  7. USB B to USB A cable <br/>
  8. MG996R High Torque motor <br/>
     *not all components shown for final version* <br/> <br/>
## **Functionalities** <br/>
  1. Open bin cover when someone is present.  *completed* <br/>
  2. Built-in LEDs inside of the bin, which are turned on in certain hours. <br/>
  3. Small OLED screen on top of the bin, which shows how full it is. <br/>
  4. Send a message to the user's phone about how full the bin is via Bluetooth/Wi-Fi. <br/>
  5. Closes the bag inside of the bin when it's full. (using magnets to hold the bottom part and a gear rotating the upper part) <br/>
  6. Controled via buttons on the bin or possibly via the user's phone. <br/> <br/>
## **Instructions** <br/>
  *Most of the process is self-explanatory, but some parts might need an explanation.* <br/>
  Instead of buying a DC Terminal adapter, you can: <br/>
  - 1. Cut open a normal USB A cable. <br/>
    2. You'll find 4 smaller cables. (VCC, GND, DATA+, DATA-) <br/>
    3. Solder the VCC and GND cables to a normal jumper wire. (ignore DATA cables since only power is needed) <br/>
  Since the ground the motor have to share a common ground, connect a GND pin from the Arduino to the breadboard where the GND from the cable is connected. <br/> <br/>
### This is a work in progress.

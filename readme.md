# autoPIN

This is a code for a device that uses servos to enter pin on a terminal. 

### Prerequisites

* cc3200 launch XL testing board or arduino. 
* In case of arduino you need to change pin definitions. 
* Energia IDE and optionally Code Composer Studio
* A lot of LEGO 

### Getting started

CC3200 Launch XL board uses Com via USB to communicate with PC. Download the drivers from Energia.nu website and install them.

Then simply download Energia IDE, open the autoPIN.ino file from the project, compile and download.

You will need to connect servos. Typically wiring is: red +5V, brown GND, orange signal.

By default we use pins:

const int SERVO_THREE_PIN = 19;

const int SERVO_FIVE_PIN = 18;

const int SERVO_ZERO_PIN = 17;

const int SERVO_GREEN_PIN = 15;

but you can change them.

After you connect the board to USB, you should be able to communicate with the device via COM port. Baud is 9600 8n1. Every 5 seconds the device in idle state sends message:  "Waiting for commands". It also blinks green led if operating. 

## The construction

The servos are held in position with LEGO bricks. I found it the best for changing design. You can find photos and a video in Docs 

## Authors

* **Krzysztof Dłużyński** - *Initial work* 

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.



#include "Energia.h"

#line 1 "C:/Users/kdluzynski/workspace_v8/autoPIN/wpisywaniepinu.ino"
#include <Servo.h>
#include "SimpleTimer.cpp"




void setup();
void loop();
void test_servo(Servo *servo);
void move_selected_servo_to_position(int servo_number, int position);
void serialEvent();
void print_help();
void test_blik(const char servo_name[100], int start_position, int end_position,int delay_miliseconds);
void test_all_servos();
void push_button(Servo* servo, int move_to_position);
void write_pin_on_terminal(int servo1_position, int servo2_position, int servo3_position, int servo4_position);
void toggle_pin(int pin);
void establishContact();

#line 7
const int SERVO_THREE_PIN = 19;
const int SERVO_FIVE_PIN = 18;
const int SERVO_ZERO_PIN = 17;
const int SERVO_GREEN_PIN = 15;
const int SERVO_ANGLE = 30;
const int SERVO_DELAY = 500;

int inByte = 0; 

SimpleTimer status_led_timer;
SimpleTimer communication_timeout;

Servo three;
Servo zero;
Servo five;
Servo green;

void setup()
{
    
    Serial.begin(9600);

    pinMode(GREEN_LED, OUTPUT); 
    pinMode(RED_LED, OUTPUT); 
    pinMode(YELLOW_LED, OUTPUT);  

    
    three.attach(SERVO_THREE_PIN);
    zero.attach(SERVO_ZERO_PIN);
    five.attach(SERVO_FIVE_PIN);
    green.attach(SERVO_GREEN_PIN);

    three.write(0);
    zero.write(90);
    five.write(0);
    green.write(0);

}

void loop()
{
    if (communication_timeout.is_elapsed())
    {
        establishContact(); 
        communication_timeout.start(5000);
    }

    if (status_led_timer.is_elapsed())
    {
        toggle_pin (GREEN_LED);
        status_led_timer.start(500);
    }

}

void test_servo(Servo *servo)
{
    delay(1000);
    for (int angle = 0; angle < 180; angle++)
    {
        Serial.println(angle);
        servo->write(angle);
        delay(15);
    }
}

void move_selected_servo_to_position(int servo_number, int position)
{
    switch (servo_number)
    {
    case 1:
        three.write(position);
        break;
    case 2:
        zero.write(position);
        break;
    case 3:
        five.write(position);
        break;
    case 4:
        green.write(position);
        break;
    }
}

void serialEvent()
{
    char buffer[100] = { 0 };

    
    if (Serial.available() > 0)
    {
        Serial.readBytesUntil('\n', buffer, sizeof(buffer));

        char first_parameter[100] = {0};
        int second_parameter = 0, third_parameter = 0, fourth_parameter = 0, fifth_parameter = 0;
        int result = 0;
        String string_buffer = buffer;
        Serial.println(buffer);
        result = sscanf(buffer, "%s %d %d %d %d", first_parameter,
                        &second_parameter, &third_parameter, &fourth_parameter, &fifth_parameter);
        String first_parameter_string = first_parameter;

        if (first_parameter_string == "writepin" && result == 5)
        {
            write_pin_on_terminal(second_parameter, third_parameter,
                                  fourth_parameter, fifth_parameter);
        }
        if (string_buffer == "help")
        {
            print_help();
        }
        if (string_buffer == "toggle yellow led")
        {
            toggle_pin (YELLOW_LED);
        }
        if (first_parameter_string == "blik" && result == 4)
        {
            test_blik(buffer, second_parameter, fourth_parameter,third_parameter);
        }
        if (string_buffer == "test")
        {
            test_all_servos();
        }
        if (first_parameter_string == "servo")
        {
            move_selected_servo_to_position(second_parameter, third_parameter);
        }
        Serial.println("done!");
    }

    toggle_pin (RED_LED);

}





void print_help()
{
    Serial.println("Available commands:");
    Serial.println(
            "help, toggle yellow led, test, blik <start_position> <end_position> <delay>");
    Serial.println("servo <servo_number> <position>");
    Serial.println(
            "writepin <servo1_position> <servo2_position> <servo3_position> <servo4_position>");
}

void test_blik(const char servo_name[100], int start_position, int end_position,int delay_miliseconds)
{
    Serial.println(servo_name);
    three.write(start_position);
    delay(delay_miliseconds);
    three.write(end_position);
}

void test_all_servos()
{
    Serial.println("three");
    test_servo(&three);
    Serial.println("zero");
    test_servo(&zero);
    Serial.println("five");
    test_servo(&five);
    Serial.println("green");
    test_servo(&green);
    green.write(10);
    three.write(10);
    five.write(10);
    zero.write(10);
}

void push_button(Servo* servo, int move_to_position)
{
    int servo_start_position = 0;
    servo_start_position = servo->read();
    Serial.print("Moving servo to position: ");
    Serial.println(move_to_position, DEC);
    servo->write(move_to_position);
    delay(SERVO_DELAY);
    servo->write(servo_start_position);
    delay(SERVO_DELAY);
}

void write_pin_on_terminal(int servo1_position, int servo2_position, int servo3_position, int servo4_position)
{
    push_button(&three, servo1_position);
    push_button(&zero, servo2_position);
    push_button(&five, servo3_position);
    push_button(&zero, servo2_position);
    push_button(&three, servo1_position);
    push_button(&zero, servo2_position);
    push_button(&five, servo3_position);
    push_button(&zero, servo2_position);
    push_button(&green, servo4_position);
}

void toggle_pin(int pin)
{
    int pin_status = 0;
    pin_status = digitalRead(pin);
    if (pin_status == HIGH)
    {
        digitalWrite(pin, LOW);
    }
    else
    {
        digitalWrite(pin, HIGH);
    }
    pin_status = digitalRead(pin);
}

void establishContact()
{
    Serial.println("Waiting for commands (help to get command list)"); 
}





#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 1); // (rs, e, d4, d5, d6, d7)

int ldrpin = A0;   // Select the input pin for LDR
int ldrvalue = 0;  // Variable to store the value coming from the sensor
int pwmValue = 0;  // Variable to store the PWM value for the light intensity

void setup() {
    lcd.begin(16, 2); // Set up the LCD with 16 columns and 2 rows
    lcd.print("LDR Value: ");
    lcd.setCursor(0, 1); // Move cursor to the second line
    lcd.print("PWM Value: ");
    
    pinMode(9, OUTPUT); // PWM pin connected to the base of the transistor
}

void loop() {
    // Read the value from the sensor:
    ldrvalue = analogRead(ldrpin);    

    // Display the LDR value
    lcd.setCursor(10, 0); // Move cursor to the right side of the first line
    lcd.print(ldrvalue);

    // Determine the PWM value based on LDR value
    if (ldrvalue > 500) { // Maximum sunlight
        pwmValue = 0; // Turn off light
    } else if (ldrvalue > 200 & ldrvalue < 500) { // Medium sunlight
        pwmValue = 170; // Map LDR value to PWM range
    } else if (ldrvalue > 9 && ldrvalue < 199) { // No sunlight
        pwmValue = 255; // Turn on light to maximum brightness
    }
    
    // Control the light intensity
    analogWrite(9, pwmValue); // Set light intensity

    // Display the PWM value
    lcd.setCursor(10, 1); // Move cursor to the right side of the second line
    lcd.print(pwmValue);
    
    delay(100);                  
}



/*
 * Simple Display Test for LilyGo T-Display S3 using TFT_eSPI
 * This example initializes the display, turns on the backlight, and shows a test message.
 * It is designed as a minimal working setup to help users confirm their display is functioning.
 * Ensure that the custom script in platformio.ini has updated the TFT_eSPI setup correctly.
 */

#include "TFT_eSPI.h"

#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup()
{
    // Turn on display power - GPIO 15 is used for power control on T-Display S3
    pinMode(15, OUTPUT);
    digitalWrite(15, HIGH);

    // Initialize the display
    tft.init();
    tft.setRotation(1); // Adjust rotation as needed: 0, 1, 2, 3

    // Clear screen
    tft.fillScreen(TFT_BLACK);

    // Set text properties
    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);

    // Display test message
    tft.setCursor(0, 0);
    tft.println("LilyGo T-Display S3");
    tft.println("TFT_eSPI Test");
    tft.println("Display Working!");
}

void loop()
{
    // Nothing to do here for a static display test
    delay(1000);
}

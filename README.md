# LilyGo T-Display S3 TFT_eSPI Example

This project provides a simple working example for the LilyGo T-Display S3 using the TFT_eSPI library with PlatformIO. It addresses common issues such as black screen problems by providing the correct setup and configuration.

## Prerequisites

- PlatformIO installed in your development environment.
- LilyGo T-Display S3 board.

## Setup Instructions

1. **Clone or Download this Repository**
   - Clone this repository or download the ZIP file to your local machine.

2. **Open in PlatformIO**
   - Open the project folder in PlatformIO.

3. **Build and Upload**
   - Build the project using `pio run`.
   - Upload to your LilyGo T-Display S3 using `pio run -t upload`.

## How It Works

- The `platformio.ini` is configured to use the latest `espressif32` platform without specific version pinning to avoid compatibility issues.
- Build flags are minimized to prevent conflicts with the TFT_eSPI library setup.
- A custom script (`scripts/update_tft_espi_setup.py`) automatically updates `User_Setup_Select.h` in the TFT_eSPI library to use the correct setup for LilyGo T-Display S3 after library installation.
- The example code in `src/main.cpp` is a basic display test that initializes the display, turns on the backlight, and shows text.

## Files in this Project

- `src/main.cpp`: Simple example code to test the display.
- `patch/setup_new.h`: Custom setup file for TFT_eSPI to correctly configure for LilyGo T-Display S3.
- `scripts/update_tft_espi_setup.py`: Script to update TFT_eSPI setup automatically.
- `platformio.ini`: Configuration file for PlatformIO with necessary settings and dependencies.

## Troubleshooting

- If you still face a black screen, ensure that the backlight pin (GPIO 15 for power, GPIO 38 for control in some setups) is correctly set high in your code.
- Check that no conflicting build flags are set in `platformio.ini`.
- Verify the script `update_tft_espi_setup.py` ran successfully during the build process.

## License

This project is released under the MIT License. Feel free to use and modify as needed.

## Acknowledgments

- Thanks to the PlatformIO and TFT_eSPI communities for their invaluable resources and support.

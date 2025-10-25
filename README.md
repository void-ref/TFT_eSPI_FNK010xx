# TFT_eSPI Configurations for FNK010XX

[TFT_eSPI](https://github.com/Bodmer/TFT_eSPI) setup files for FNK010XX ESP32 Displays. Compatible with PlatformIO.

The configuration files were originally created by Freenove and uploaded to their GitHub repository as a
[ZIP archive](https://github.com/Freenove/Freenove_ESP32_Display/blob/199c9c9ec857e171afd49bac470c26694a72caf3/Libraries/TFT_eSPI_Setups_v1.0.zip).
All I've done is unzip those files and shuffle them around a little.



## Example `platformio.ini`

The main thing is that the `tft_defs` flags are included in `build_flags`.

```ini
[env]
platform = espressif32
framework = arduino
lib_deps =
    bodmer/TFT_eSPI
    https://github.com/void-ref/TFT_eSPI_FNK010xx

[env:esp32dev]
board = esp32dev
build_flags =
    ${devkit.tft_defs}

[devkit]
model = FNK0103S
tft_defs =
    -D USER_SETUP_LOADED=1
    -D ${devkit.model}
    -include "$PROJECT_LIBDEPS_DIR/$PIOENV/TFT_eSPI_FNK010xx/User_Setup_Select.h"
```

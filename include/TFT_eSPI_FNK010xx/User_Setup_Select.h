#ifndef _CONFIGURATIONS_TFT_E_SPI_SETUPS_USER_SETUP_SELECT_H
#define _CONFIGURATIONS_TFT_E_SPI_SETUPS_USER_SETUP_SELECT_H

// Lets PlatformIO users define settings in platformio.ini
#ifndef USER_SETUP_LOADED

#ifdef FNK0086A
#include "FNK0086A_2.8_240x320_ST7789.h"
#elif defined FNK0102A
#include "FNK0102A_1.14_135x240_ST7789.h"
#elif defined FNK0103B
#include "FNK0103B_2.8_240x320_ST7789.h"
#elif defined FNK0103F
#include "FNK0103F_2.8_240x320_ILI9341.h"
#elif defined FNK0103L
#include "FNK0103L_3.2_240x320_ST7789.h"
#elif defined FNK0103N
#include "FNK0103N_3.5_320x480_ST7796.h"
#elif defined FNK0103S
#include "FNK0103S_4.0_320x480_ST7796.h"
#else
#error "No model is -D'd or #define'd"
#endif

#endif // USER_SETUP_LOADED

#endif /* _CONFIGURATIONS_TFT_E_SPI_SETUPS_USER_SETUP_SELECT_H */

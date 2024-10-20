#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_6x4and4( \
    L00, L01, L02, L03, L04, L05,                R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,                R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,                R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35,                R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43,                                    R42, R43, R44, R45, \
                   L50, L51, L52,                R50, R51, R52 \
) { \
    { L00, L01, L02, L03, L04, L05 }, \
    { L10, L11, L12, L13, L14, L15 }, \
    { L20, L21, L22, L23, L24, L25 }, \
    { L30, L31, L32, L33, L34, L35 }, \
    { L40, L41, L42, L43, XXX, XXX }, \
    { L50, L51, L52, XXX, XXX, XXX }, \
\
    { R00, R01, R02, R03, R04, R05 }, \
    { R10, R11, R12, R13, R14, R15 }, \
    { R20, R21, R22, R23, R24, R25 }, \
    { R30, R31, R32, R33, R34, R35 }, \
    { XXX, XXX, R42, R43, R44, R45 }, \
    { R50, R51, R52, XXX, XXX, XXX } \
}

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    { 2,   8,  14, 9, 15, 26, 27, 3   },
    { 1,   7,  13, 10, 16, 25, 28, 4   },
    { 0,   6,  12, 11, 17, 24, 29, 5   },
    { NO_LED, 31,  33, 35, 37, 36, 39, NO_LED },
    { NO_LED, 30,  34, 32, 38, 41, 40, NO_LED },
    { NO_LED,   23,  19, 18, 20, 21, 22, NO_LED }
}, {
    {0,32},{3,19},{7,5},{25,4},{21,18},{17,31},{35,26},{39,12},{43,0},{60,0},{56,12},{52,26},
    {66,33},{70,20},{74,6},{89,12},{85,25},{81,38},{61,50},{77,55},{93,63},{129,63},{145,55},{161,50},
    {141,38},{137,25},{133,12},{148,6},{152,20},{156,33},{170,26},{166,12},{162,0},{179,0},{183,12},{187,26},
    {205,31},{201,18},{197,4},{215,5},{219,19},{223,32}
}, {
    1, 1, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 1, 1, 1
} };
#endif

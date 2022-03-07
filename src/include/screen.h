
#ifndef WIN_H
#define WIN_H

#define SCREEN_WIDTH 680
#define SCREEN_HEIGHT 540

#define UNHEX_UINT32_ARGS(hex) (((hex) >> (8 * 3)) & 0xFF), \
                               (((hex) >> (8 * 2)) & 0xFF), \
                               (((hex) >> (8 * 1)) & 0xFF), \
                               (((hex) >> (8 * 0)) & 0xFF)  \


#endif

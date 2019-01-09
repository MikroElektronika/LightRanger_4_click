#ifndef _LIGHTRANGER4_T_
#define _LIGHTRANGER4_T_

#include "stdint.h"

#ifndef _LIGHTRANGER4_H_

#define T_LIGHTRANGER4_P const uint8_t* 

typedef struct
{
    uint8_t topLeftX;
    uint8_t topLeftY;
    uint8_t bottomRightX;
    uint8_t bottomRightY;
}lightranger4_userRoi;

#endif
#endif
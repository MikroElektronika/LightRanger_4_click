![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# LightRanger4 Click

- **CIC Prefix**  : LIGHTRANGER4
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : sep 2018.

---

### Software Support

We provide a library for the LightRanger4 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2576/lightranger-4-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the I2C bus driver and drivers that offer a choice for writing data in registers and reading data
from registers. 
The library includes functions for full Configuration chip, sets measurement distance mode, inter measurement period, timing budget and user Roi.
The user has the functions available for softReset, power on procedure, read distance of the object in front of the sensor.

Key functions :

- ``` uint8_t lightranger4_deviceConfiguration() ``` - Functions for device configuration 
- ``` void lightranger4_startMeasurement(uint32_t period_ms) ``` - Functions for start measurement 
- ``` uint16_t lightranger4_getDistance() ``` - Function reads distance of the object in front of the sensor 

**Examples Description**


The application is composed of three sections :

- System Initialization - Initializes I2C module and set INT pin as INPUT and RST pin as OUTPUT
- Application Initialization -  Initializes the driver init, chip configuration, adjusts the LONG mode (distance measurement up to 4 meters),
                                sets the time budget and start measurement with the adjustment of inter measurements period.
- Application Task - (code snippet) - Reads the distance of the object in front of the sensor and logs distance to USBUART every 500 ms.


```.c
void applicationTask()
{
    while(lightranger4_newDataReady() != 0)
    {
        Delay_1ms();
    }

    distance = lightranger4_getDistance();
    IntToStr(distance, demoText);
    mikrobus_logWrite(" - Distance : ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_TEXT);
    mikrobus_logWrite(" mm ", _LOG_LINE);

    measurementStatus = lightranger4_getRangeStatus();
    switch (measurementStatus)
    {
        case _LR4_MRESP_SIGNAL_FAIL:
        {
            mikrobus_logWrite( "Signal fail.", _LOG_LINE);
            break;
        }
        case _LR4_MRESP_PHASE_OUT_OF_VALID_LIMITS:
        {
            mikrobus_logWrite( "Phase out of valid limits", _LOG_LINE);
            break;
        }
        case _LR4_MRESP_SIGMA_FAIL:
        {
            mikrobus_logWrite( "Sigma Fail. ", _LOG_LINE);
            break;
        }
        case _LR4_MRESP_WRAP_TARGET_FAIL:
        {
            mikrobus_logWrite( "Wrap target fail.", _LOG_LINE);
            break;
        }
        case _LR4_MRESP_MINIMUM_DETECTION_THRESHOLD:
        {
            mikrobus_logWrite( "Target is below minimum detection threshold. ", _LOG_LINE);
            break;
        }
        default:
        {
            break;
        }
    }

    Delay_ms( 500 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2576/lightranger-4-click) page.

Other mikroE Libraries used in the example:

- I2C

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---

/*
Example for LightRanger4 Click

    Date          : sep 2018.
    Author        : Katarina Perendic

Test configuration TIVA :
    
    MCU              : TM4C129XNCZAD
    Dev. Board       : EasyMx PRO v7 for TIVA ARM
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module and set INT pin as INPUT and RST pin as OUTPUT
- Application Initialization -  Initializes the driver init, chip configuration, adjusts the LONG mode (distance measurement up to 4 meters),
                                sets the time budget and start measurement with the adjustment of inter measurements period.
- Application Task - (code snippet) - Reads the distance of the object in front of the sensor and logs distance to USBUART every 500 ms.

*/

#include "Click_LightRanger4_types.h"
#include "Click_LightRanger4_config.h"

uint16_t distance;
char demoText[ 50 ] = {0};
uint8_t measurementStatus;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_i2cInit( _MIKROBUS1, &_LIGHTRANGER4_I2C_CFG[0] );
    mikrobus_logInit( _LOG_USBUART_A, 9600 );
    mikrobus_logWrite("--- System init ---", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    lightranger4_i2cDriverInit( (T_LIGHTRANGER4_P)&_MIKROBUS1_GPIO, (T_LIGHTRANGER4_P)&_MIKROBUS1_I2C, _LR4_DEFAULT_SLAVE_ADDRESS );
    lightranger4_powerON();
    mikrobus_logWrite("--- Wait until the configuration of the chip is completed ---", _LOG_LINE);
    lightranger4_deviceConfiguration();
    lightranger4_setDistanceMode( _LR4_DISTANCE_MODE_LONG  );
    lightranger4_setMeasurementTimingBudget( 1000 );
    lightranger4_startMeasurement( 20 );
    mikrobus_logWrite("--- Sensor start measurement ---", _LOG_LINE);
    Delay_100ms();
}

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

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}
/*
    __lightranger4_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__lightranger4_driver.h"
#include "__lightranger4_hal.c"

/* ------------------------------------------------------------------- MACROS */

const uint16_t _LR4_REG_SOFT_RESET                                      = 0x0000;
const uint16_t _LR4_REG_SLAVE_DEVICE_ADDRESS                            = 0x0001;
const uint16_t _LR4_REG_CFG_VHV_REF_SEL_VDDPIX                          = 0x0002;
const uint16_t _LR4_REG_CFG_VHV_REF_SEL_VQUENCH                         = 0x0003;
const uint16_t _LR4_REG_CFG_AVDD1V2_SEL                                 = 0x0004;
const uint16_t _LR4_REG_FAST_OSC_TRIM                                   = 0x0005;
const uint16_t _LR4_REG_FAST_OSC_FREQUENCY                              = 0x0006;
const uint16_t _LR4_REG_FAST_OSC_FREQUENCY_MSB                          = 0x0006;
const uint16_t _LR4_REG_FAST_OSC_FREQUENCY_LSB                          = 0x0007;
const uint16_t _LR4_REG_CFG_TIMEOUT_MACROP_LOOP_BOUND                   = 0x0008;
const uint16_t _LR4_REG_CFG_COUNT_THRESH                                = 0x0009;
const uint16_t _LR4_REG_CFG_OFFSET                                      = 0x000A;
const uint16_t _LR4_REG_CFG_INIT                                        = 0x000B;
const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_0                   = 0x000D;
const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_1                   = 0x000E;
const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_2                   = 0x000F;
const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_3                   = 0x0010;
const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_4                   = 0x0011;
const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_5                   = 0x0012;
const uint16_t _LR4_REG_GLOBAL_CFG_REF_EN_START_SELECT                  = 0x0013;
const uint16_t _LR4_REG_NUM_REQUESTED_REF_SPADS                         = 0x0014;
const uint16_t _LR4_REG_REF_LOCATION                                    = 0x0015;
const uint16_t _LR4_REG_COMP_PLANE_OFFSET_KCPS                          = 0x0016;
const uint16_t _LR4_REG_COMP_PLANE_OFFSET_KCPS_LSB                      = 0x0016;
const uint16_t _LR4_REG_COMP_PLANE_OFFSET_KCPS_MSB                      = 0x0017;
const uint16_t _LR4_REG_COMP_X_PLANE_GRADIENT_KCPS                      = 0x0018;
const uint16_t _LR4_REG_COMP_X_PLANE_GRADIENT_KCPS_MSB                  = 0x0018;
const uint16_t _LR4_REG_COMP_X_PLANE_GRADIENT_KCPS_LSB                  = 0x0019;
const uint16_t _LR4_REG_COMP_Y_PLANE_GRADIENT_KCPS                      = 0x001A;
const uint16_t _LR4_REG_COMP_Y_PLANE_GRADIENT_KCPS_MSB                  = 0x001A;
const uint16_t _LR4_REG_COMP_Y_PLANE_GRADIENT_KCPS_LSB                  = 0x001B;
const uint16_t _LR4_REG_TOTAL_RATE_TARGET_MCPS                          = 0x001C;
const uint16_t _LR4_REG_TOTAL_RATE_TARGET_MCPS_MSB                      = 0x001C;
const uint16_t _LR4_REG_TOTAL_RATE_TARGET_MCPS_LSB                      = 0x001D;
const uint16_t _LR4_REG_PART_TO_PART_RANGE_OFFSET_MM                    = 0x001E;
const uint16_t _LR4_REG_PART_TO_PART_RANGE_OFFSET_MM_MSB                = 0x001E;
const uint16_t _LR4_REG_PART_TO_PART_RANGE_OFFSET_MM_LSB                = 0x001F;
const uint16_t _LR4_REG_INNER_OFFSET_MM                                 = 0x0020;
const uint16_t _LR4_REG_INNER_OFFSET_MM_MSB                             = 0x0020;
const uint16_t _LR4_REG_INNER_OFFSET_MM_LSB                             = 0x0021;
const uint16_t _LR4_REG_OUTER_OFFSET_MM                                 = 0x0022;
const uint16_t _LR4_REG_OUTER_OFFSET_MM_MSB                             = 0x0022;
const uint16_t _LR4_REG_OUTER_OFFSET_MM_LSB                             = 0x0023;
const uint16_t _LR4_REG_TARGET_TOTAL_RATE_MCPS                          = 0x0024;
const uint16_t _LR4_REG_TARGET_TOTAL_RATE_MCPS_MSB                      = 0x0024;
const uint16_t _LR4_REG_TARGET_TOTAL_RATE_MCPS_LSB                      = 0x0025;
const uint16_t _LR4_REG_DEBUG_CTRL                                      = 0x0026;
const uint16_t _LR4_REG_TEST_MODE_CTRL                                  = 0x0027;
const uint16_t _LR4_REG_CLK_GATING_CTRL                                 = 0x0028;
const uint16_t _LR4_NVM_BIST__CTRL                                      = 0x0029;
const uint16_t _LR4_NVM_BIST__NUM_NVM_WORDS                             = 0x002A;
const uint16_t _LR4_NVM_BIST__START_ADDRESS                             = 0x002B;
const uint16_t _LR4_HOST_IF__STATUS                                     = 0x002C;
const uint16_t _LR4_PAD_I2C_HV__CONFIG                                  = 0x002D;
const uint16_t _LR4_PAD_I2C_HV__EXTSUP_CONFIG                           = 0x002E;
const uint16_t _LR4_GPIO_HV_PAD__CTRL                                   = 0x002F;
const uint16_t _LR4_GPIO_HV_MUX__CTRL                                   = 0x0030;
const uint16_t _LR4_GPIO__TIO_HV_STATUS                                 = 0x0031;
const uint16_t _LR4_GPIO__FIO_HV_STATUS                                 = 0x0032;
const uint16_t _LR4_ANA_CONFIG__SPAD_SEL_PSWIDTH                        = 0x0033;
const uint16_t _LR4_ANA_CONFIG__VCSEL_PULSE_WIDTH_OFFSET                = 0x0034;
const uint16_t _LR4_ANA_CONFIG__FAST_OSC__CONFIG_CTRL                   = 0x0035;
const uint16_t _LR4_SIGMA_ESTIMATOR__EFFECTIVE_PULSE_WIDTH_NS           = 0x0036;
const uint16_t _LR4_SIGMA_ESTIMATOR__EFFECTIVE_AMBIENT_WIDTH_NS         = 0x0037;
const uint16_t _LR4_SIGMA_ESTIMATOR__SIGMA_REF_MM                       = 0x0038;
const uint16_t _LR4_ALGO__CROSSTALK_COMPENSATION_VALID_HEIGHT_MM        = 0x0039;
const uint16_t _LR4_SPARE_HOST_CONFIG__STATIC_CONFIG_SPARE_0            = 0x003A;
const uint16_t _LR4_SPARE_HOST_CONFIG__STATIC_CONFIG_SPARE_1            = 0x003B;
const uint16_t _LR4_ALGO__RANGE_IGNORE_THRESHOLD_MCPS                   = 0x003C;
const uint16_t _LR4_ALGO__RANGE_IGNORE_THRESHOLD_MCPS_HI                = 0x003C;
const uint16_t _LR4_ALGO__RANGE_IGNORE_THRESHOLD_MCPS_LO                = 0x003D;
const uint16_t _LR4_ALGO__RANGE_IGNORE_VALID_HEIGHT_MM                  = 0x003E;
const uint16_t _LR4_ALGO__RANGE_MIN_CLIP                                = 0x003F;
const uint16_t _LR4_ALGO__CONSISTENCY_CHECK__TOLERANCE                  = 0x0040;
const uint16_t _LR4_SPARE_HOST_CONFIG__STATIC_CONFIG_SPARE_2            = 0x0041;
const uint16_t _LR4_SD_CONFIG__RESET_STAGES_MSB                         = 0x0042;
const uint16_t _LR4_SD_CONFIG__RESET_STAGES_LSB                         = 0x0043;
const uint16_t _LR4_GPH_CONFIG__STREAM_COUNT_UPDATE_VALUE               = 0x0044;
const uint16_t _LR4_GLOBAL_CONFIG__STREAM_DIVIDER                       = 0x0045;
const uint16_t _LR4_SYSTEM__INTERRUPT_CONFIG_GPIO                       = 0x0046;
const uint16_t _LR4_CAL_CONFIG__VCSEL_START                             = 0x0047;
const uint16_t _LR4_CAL_CONFIG__REPEAT_RATE                             = 0x0048;
const uint16_t _LR4_CAL_CONFIG__REPEAT_RATE_HI                          = 0x0048;
const uint16_t _LR4_CAL_CONFIG__REPEAT_RATE_LO                          = 0x0049;
const uint16_t _LR4_GLOBAL_CONFIG__VCSEL_WIDTH                          = 0x004A;
const uint16_t _LR4_PHASECAL_CONFIG__TIMEOUT_MACROP                     = 0x004B;
const uint16_t _LR4_PHASECAL_CONFIG__TARGET                             = 0x004C;
const uint16_t _LR4_PHASECAL_CONFIG__OVERRIDE                           = 0x004D;
const uint16_t _LR4_DSS_CONFIG__ROI_MODE_CONTROL                        = 0x004F;
const uint16_t _LR4_SYSTEM__THRESH_RATE_HIGH                            = 0x0050;
const uint16_t _LR4_SYSTEM__THRESH_RATE_HIGH_HI                         = 0x0050;
const uint16_t _LR4_SYSTEM__THRESH_RATE_HIGH_LO                         = 0x0051;
const uint16_t _LR4_SYSTEM__THRESH_RATE_LOW                             = 0x0052;
const uint16_t _LR4_SYSTEM__THRESH_RATE_LOW_HI                          = 0x0052;
const uint16_t _LR4_SYSTEM__THRESH_RATE_LOW_LO                          = 0x0053;
const uint16_t _LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT           = 0x0054;
const uint16_t _LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_HI        = 0x0054;
const uint16_t _LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_LO        = 0x0055;
const uint16_t _LR4_DSS_CONFIG__MANUAL_BLOCK_SELECT                     = 0x0056;
const uint16_t _LR4_DSS_CONFIG__APERTURE_ATTENUATION                    = 0x0057;
const uint16_t _LR4_DSS_CONFIG__MAX_SPADS_LIMIT                         = 0x0058;
const uint16_t _LR4_DSS_CONFIG__MIN_SPADS_LIMIT                         = 0x0059;
const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_A_HI                      = 0x005A;
const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_A_LO                      = 0x005B;
const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_B_HI                      = 0x005C;
const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_B_LO                      = 0x005D;
const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_A_HI                   = 0x005E;
const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_A_LO                   = 0x005F;
const uint16_t _LR4_RANGE_CONFIG__VCSEL_PERIOD_A                        = 0x0060;
const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_B_HI                   = 0x0061;
const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_B_LO                   = 0x0062;
const uint16_t _LR4_RANGE_CONFIG__VCSEL_PERIOD_B                        = 0x0063;
const uint16_t _LR4_RANGE_CONFIG__SIGMA_THRESH                          = 0x0064;
const uint16_t _LR4_RANGE_CONFIG__SIGMA_THRESH_HI                       = 0x0064;
const uint16_t _LR4_RANGE_CONFIG__SIGMA_THRESH_LO                       = 0x0065;
const uint16_t _LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS         = 0x0066;
const uint16_t _LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_HI      = 0x0066;
const uint16_t _LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_LO      = 0x0067;
const uint16_t _LR4_RANGE_CONFIG__VALID_PHASE_LOW                       = 0x0068;
const uint16_t _LR4_RANGE_CONFIG__VALID_PHASE_HIGH                      = 0x0069;
const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD                     = 0x006C;
const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_3                   = 0x006C;
const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_2                   = 0x006D;
const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_1                   = 0x006E;
const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_0                   = 0x006F;
const uint16_t _LR4_SYSTEM__FRACTIONAL_ENABLE                           = 0x0070;
const uint16_t _LR4_SYSTEM__GROUPED_PARAMETER_HOLD_0                    = 0x0071;
const uint16_t _LR4_SYSTEM__THRESH_HIGH                                 = 0x0072;
const uint16_t _LR4_SYSTEM__THRESH_HIGH_HI                              = 0x0072;
const uint16_t _LR4_SYSTEM__THRESH_HIGH_LO                              = 0x0073;
const uint16_t _LR4_SYSTEM__THRESH_LOW                                  = 0x0074;
const uint16_t _LR4_SYSTEM__THRESH_LOW_HI                               = 0x0074;
const uint16_t _LR4_SYSTEM__THRESH_LOW_LO                               = 0x0075;
const uint16_t _LR4_SYSTEM__ENABLE_XTALK_PER_QUADRANT                   = 0x0076;
const uint16_t _LR4_SYSTEM__SEED_CONFIG                                 = 0x0077;
const uint16_t _LR4_SD_CONFIG__WOI_SD0                                  = 0x0078;
const uint16_t _LR4_SD_CONFIG__WOI_SD1                                  = 0x0079;
const uint16_t _LR4_SD_CONFIG__INITIAL_PHASE_SD0                        = 0x007A;
const uint16_t _LR4_SD_CONFIG__INITIAL_PHASE_SD1                        = 0x007B;
const uint16_t _LR4_SYSTEM__GROUPED_PARAMETER_HOLD_1                    = 0x007C;
const uint16_t _LR4_SD_CONFIG__FIRST_ORDER_SELECT                       = 0x007D;
const uint16_t _LR4_SD_CONFIG__QUANTIFIER                               = 0x007E;
const uint16_t _LR4_ROI_CONFIG__USER_ROI_CENTRE_SPAD                    = 0x007F;
const uint16_t _LR4_ROI_CONFIG__USER_ROI_REQUESTED_GLOBAL_XY_SIZE       = 0x0080;
const uint16_t _LR4_SYSTEM__SEQUENCE_CONFIG                             = 0x0081;
const uint16_t _LR4_SYSTEM__GROUPED_PARAMETER_HOLD                      = 0x0082;
const uint16_t _LR4_POWER_MANAGEMENT__GO1_POWER_FORCE                   = 0x0083;
const uint16_t _LR4_SYSTEM__STREAM_COUNT_CTRL                           = 0x0084;
const uint16_t _LR4_FIRMWARE__ENABLE                                    = 0x0085;
const uint16_t _LR4_SYSTEM__INTERRUPT_CLEAR                             = 0x0086;
const uint16_t _LR4_SYSTEM__MODE_START                                  = 0x0087;
const uint16_t _LR4_RESULT__INTERRUPT_STATUS                            = 0x0088;
const uint16_t _LR4_RESULT__RANGE_STATUS                                = 0x0089;
const uint16_t _LR4_RESULT__REPORT_STATUS                               = 0x008A;
const uint16_t _LR4_RESULT__STREAM_COUNT                                = 0x008B;
const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0              = 0x008C;
const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_HI           = 0x008C;
const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_LO           = 0x008D;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0             = 0x008E;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_HI          = 0x008E;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_LO          = 0x008F;
const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0                 = 0x0090;
const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_HI              = 0x0090;
const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_LO              = 0x0091;
const uint16_t _LR4_RESULT__SIGMA_SD0                                   = 0x0092;
const uint16_t _LR4_RESULT__SIGMA_SD0_HI                                = 0x0092;
const uint16_t _LR4_RESULT__SIGMA_SD0_LO                                = 0x0093;
const uint16_t _LR4_RESULT__PHASE_SD0                                   = 0x0094;
const uint16_t _LR4_RESULT__PHASE_SD0_HI                                = 0x0094;
const uint16_t _LR4_RESULT__PHASE_SD0_LO                                = 0x0095;
const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0      = 0x0096;
const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_HI                 = 0x0096;
const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_LO                 = 0x0097;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0       = 0x0098;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_HI    = 0x0098;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_LO    = 0x0099;
const uint16_t _LR4_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0                       = 0x009A;
const uint16_t _LR4_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_HI                    = 0x009A;
const uint16_t _LR4_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_LO                    = 0x009B;
const uint16_t _LR4_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0                       = 0x009C;
const uint16_t _LR4_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_HI                    = 0x009C;
const uint16_t _LR4_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_LO                    = 0x009D;
const uint16_t _LR4_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0                            = 0x009E;
const uint16_t _LR4_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_HI                         = 0x009E;
const uint16_t _LR4_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_LO                         = 0x009F;
const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1                            = 0x00A0;
const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_HI                         = 0x00A0;
const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_LO                         = 0x00A1;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1                           = 0x00A2;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_HI                        = 0x00A2;
const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_LO                        = 0x00A3;
const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1                               = 0x00A4;
const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_HI                            = 0x00A4;
const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_LO                            = 0x00A5;
const uint16_t _LR4_RESULT__SIGMA_SD1                                                 = 0x00A6;
const uint16_t _LR4_RESULT__SIGMA_SD1_HI                                              = 0x00A6;
const uint16_t _LR4_RESULT__SIGMA_SD1_LO                                              = 0x00A7;
const uint16_t _LR4_RESULT__PHASE_SD1                                                 = 0x00A8;
const uint16_t _LR4_RESULT__PHASE_SD1_HI                                              = 0x00A8;
const uint16_t _LR4_RESULT__PHASE_SD1_LO                                              = 0x00A9;
const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1                    = 0x00AA;
const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_HI                 = 0x00AA;
const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_LO                 = 0x00AB;
const uint16_t _LR4_RESULT__SPARE_0_SD1                                               = 0x00AC;
const uint16_t _LR4_RESULT__SPARE_0_SD1_HI                                            = 0x00AC;
const uint16_t _LR4_RESULT__SPARE_0_SD1_LO                                            = 0x00AD;
const uint16_t _LR4_RESULT__SPARE_1_SD1                                               = 0x00AE;
const uint16_t _LR4_RESULT__SPARE_1_SD1_HI                                            = 0x00AE;
const uint16_t _LR4_RESULT__SPARE_1_SD1_LO                                            = 0x00AF;
const uint16_t _LR4_RESULT__SPARE_2_SD1                                               = 0x00B0;
const uint16_t _LR4_RESULT__SPARE_2_SD1_HI                                            = 0x00B0;
const uint16_t _LR4_RESULT__SPARE_2_SD1_LO                                            = 0x00B1;
const uint16_t _LR4_RESULT__SPARE_3_SD1                                               = 0x00B2;
const uint16_t _LR4_RESULT__THRESH_INFO                                               = 0x00B3;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0                            = 0x00B4;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_3                          = 0x00B4;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_2                          = 0x00B5;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_1                          = 0x00B6;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_0                          = 0x00B7;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0                             = 0x00B8;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_3                           = 0x00B8;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_2                           = 0x00B9;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_1                           = 0x00BA;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_0                           = 0x00BB;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0                              = 0x00BC;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_3                            = 0x00BC;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_2                            = 0x00BD;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_1                            = 0x00BE;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_0                            = 0x00BF;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0                            = 0x00C0;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_3                          = 0x00C0;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_2                          = 0x00C1;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_1                          = 0x00C2;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_0                          = 0x00C3;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1                            = 0x00C4;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_3                          = 0x00C4;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_2                          = 0x00C5;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_1                          = 0x00C6;
const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_0                          = 0x00C7;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1                             = 0x00C8;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_3                           = 0x00C8;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_2                           = 0x00C9;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_1                           = 0x00CA;
const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_0                           = 0x00CB;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1                              = 0x00CC;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_3                            = 0x00CC;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_2                            = 0x00CD;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_1                            = 0x00CE;
const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_0                            = 0x00CF;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1                            = 0x00D0;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_3                          = 0x00D0;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_2                          = 0x00D1;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_1                          = 0x00D2;
const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_0                          = 0x00D3;
const uint16_t _LR4_RESULT_CORE__SPARE_0                                              = 0x00D4;
const uint16_t _LR4_PHASECAL_RESULT__REFERENCE_PHASE                                  = 0x00D6;
const uint16_t _LR4_PHASECAL_RESULT__REFERENCE_PHASE_HI                               = 0x00D6;
const uint16_t _LR4_PHASECAL_RESULT__REFERENCE_PHASE_LO                               = 0x00D7;
const uint16_t _LR4_PHASECAL_RESULT__VCSEL_START                                      = 0x00D8;
const uint16_t _LR4_REF_SPAD_CHAR_RESULT__NUM_ACTUAL_REF_SPADS                        = 0x00D9;
const uint16_t _LR4_REF_SPAD_CHAR_RESULT__REF_LOCATION                                = 0x00DA;
const uint16_t _LR4_VHV_RESULT__COLDBOOT_STATUS                                       = 0x00DB;
const uint16_t _LR4_VHV_RESULT__SEARCH_RESULT                                         = 0x00DC;
const uint16_t _LR4_VHV_RESULT__LATEST_SETTING                                        = 0x00DD;
const uint16_t _LR4_RESULT__OSC_CALIBRATE_VAL                                         = 0x00DE;
const uint16_t _LR4_RESULT__OSC_CALIBRATE_VAL_HI                                      = 0x00DE;
const uint16_t _LR4_RESULT__OSC_CALIBRATE_VAL_LO                                      = 0x00DF;
const uint16_t _LR4_ANA_CONFIG__POWERDOWN_GO1                                         = 0x00E0;
const uint16_t _LR4_ANA_CONFIG__REF_BG_CTRL                                           = 0x00E1;
const uint16_t _LR4_ANA_CONFIG__REGDVDD1V2_CTRL                                       = 0x00E2;
const uint16_t _LR4_ANA_CONFIG__OSC_SLOW_CTRL                                         = 0x00E3;
const uint16_t _LR4_TEST_MODE__STATUS                                                 = 0x00E4;
const uint16_t _LR4_FIRMWARE__SYSTEM_STATUS                                           = 0x00E5;
const uint16_t _LR4_FIRMWARE__MODE_STATUS                                             = 0x00E6;
const uint16_t _LR4_FIRMWARE__SECONDARY_MODE_STATUS                                   = 0x00E7;
const uint16_t _LR4_FIRMWARE__CAL_REPEAT_RATE_COUNTER                                 = 0x00E8;
const uint16_t _LR4_FIRMWARE__CAL_REPEAT_RATE_COUNTER_HI                              = 0x00E8;
const uint16_t _LR4_FIRMWARE__CAL_REPEAT_RATE_COUNTER_LO                              = 0x00E9;
const uint16_t _LR4_FIRMWARE__HISTOGRAM_BIN                                           = 0x00EA;
const uint16_t _LR4_GPH__SYSTEM__THRESH_HIGH                                          = 0x00EC;
const uint16_t _LR4_GPH__SYSTEM__THRESH_HIGH_HI                                       = 0x00EC;
const uint16_t _LR4_GPH__SYSTEM__THRESH_HIGH_LO                                       = 0x00ED;
const uint16_t _LR4_GPH__SYSTEM__THRESH_LOW                                           = 0x00EE;
const uint16_t _LR4_GPH__SYSTEM__THRESH_LOW_HI                                        = 0x00EE;
const uint16_t _LR4_GPH__SYSTEM__THRESH_LOW_LO                                        = 0x00EF;
const uint16_t _LR4_GPH__SYSTEM__ENABLE_XTALK_PER_QUADRANT                            = 0x00F0;
const uint16_t _LR4_GPH__SPARE_0                                                      = 0x00F1;
const uint16_t _LR4_GPH__SD_CONFIG__WOI_SD0                                           = 0x00F2;
const uint16_t _LR4_GPH__SD_CONFIG__WOI_SD1                                           = 0x00F3;
const uint16_t _LR4_GPH__SD_CONFIG__INITIAL_PHASE_SD0                                 = 0x00F4;
const uint16_t _LR4_GPH__SD_CONFIG__INITIAL_PHASE_SD1                                 = 0x00F5;
const uint16_t _LR4_GPH__SD_CONFIG__FIRST_ORDER_SELECT                                = 0x00F6;
const uint16_t _LR4_GPH__SD_CONFIG__QUANTIFIER                                        = 0x00F7;
const uint16_t _LR4_GPH__ROI_CONFIG__USER_ROI_CENTRE_SPAD                             = 0x00F8;
const uint16_t _LR4_GPH__ROI_CONFIG__USER_ROI_REQUESTED_GLOBAL_XY_SIZE                = 0x00F9;
const uint16_t _LR4_GPH__SYSTEM__SEQUENCE_CONFIG                                      = 0x00FA;
const uint16_t _LR4_GPH__GPH_ID                                                       = 0x00FB;
const uint16_t _LR4_SYSTEM__INTERRUPT_SET                                             = 0x00FC;
const uint16_t _LR4_INTERRUPT_MANAGER__ENABLES                                        = 0x00FD;
const uint16_t _LR4_INTERRUPT_MANAGER__CLEAR                                          = 0x00FE;
const uint16_t _LR4_INTERRUPT_MANAGER__STATUS                                         = 0x00FF;
const uint16_t _LR4_MCU_TO_HOST_BANK__WR_ACCESS_EN                                    = 0x0100;
const uint16_t _LR4_POWER_MANAGEMENT__GO1_RESET_STATUS                                = 0x0101;
const uint16_t _LR4_PAD_STARTUP_MODE__VALUE_RO                                        = 0x0102;
const uint16_t _LR4_PAD_STARTUP_MODE__VALUE_CTRL                                      = 0x0103;
const uint16_t _LR4_PLL_PERIOD_US                                                     = 0x0104;
const uint16_t _LR4_PLL_PERIOD_US_3                                                   = 0x0104;
const uint16_t _LR4_PLL_PERIOD_US_2                                                   = 0x0105;
const uint16_t _LR4_PLL_PERIOD_US_1                                                   = 0x0106;
const uint16_t _LR4_PLL_PERIOD_US_0                                                   = 0x0107;
const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT                                     = 0x0108;
const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_3                                   = 0x0108;
const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_2                                   = 0x0109;
const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_1                                   = 0x010A;
const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_0                                   = 0x010B;
const uint16_t _LR4_NVM_BIST__COMPLETE                                                = 0x010C;
const uint16_t _LR4_NVM_BIST__STATUS                                                  = 0x010D;
const uint16_t _LR4_IDENTIFICATION__MODEL_ID                                          = 0x010F;
const uint16_t _LR4_IDENTIFICATION__MODULE_TYPE                                       = 0x0110;
const uint16_t _LR4_IDENTIFICATION__REVISION_ID                                       = 0x0111;
const uint16_t _LR4_IDENTIFICATION__MODULE_ID                                         = 0x0112;
const uint16_t _LR4_IDENTIFICATION__MODULE_ID_HI                                      = 0x0112;
const uint16_t _LR4_IDENTIFICATION__MODULE_ID_LO                                      = 0x0113;
const uint16_t _LR4_ANA_CONFIG__FAST_OSC__TRIM_MAX                                    = 0x0114;
const uint16_t _LR4_ANA_CONFIG__FAST_OSC__FREQ_SET                                    = 0x0115;
const uint16_t _LR4_ANA_CONFIG__VCSEL_TRIM                                            = 0x0116;
const uint16_t _LR4_ANA_CONFIG__VCSEL_SELION                                          = 0x0117;
const uint16_t _LR4_ANA_CONFIG__VCSEL_SELION_MAX                                      = 0x0118;
const uint16_t _LR4_PROTECTED_LASER_SAFETY__LOCK_BIT                                  = 0x0119;
const uint16_t _LR4_LASER_SAFETY__KEY                                                 = 0x011A;
const uint16_t _LR4_LASER_SAFETY__KEY_RO                                              = 0x011B;
const uint16_t _LR4_LASER_SAFETY__CLIP                                                = 0x011C;
const uint16_t _LR4_LASER_SAFETY__MULT                                                = 0x011D;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_0                                 = 0x011E;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_1                                 = 0x011F;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_2                                 = 0x0120;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_3                                 = 0x0121;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_4                                 = 0x0122;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_5                                 = 0x0123;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_6                                 = 0x0124;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_7                                 = 0x0125;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_8                                 = 0x0126;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_9                                 = 0x0127;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_10                                = 0x0128;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_11                                = 0x0129;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_12                                = 0x012A;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_13                                = 0x012B;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_14                                = 0x012C;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_15                                = 0x012D;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_16                                = 0x012E;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_17                                = 0x012F;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_18                                = 0x0130;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_19                                = 0x0131;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_20                                = 0x0132;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_21                                = 0x0133;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_22                                = 0x0134;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_23                                = 0x0135;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_24                                = 0x0136;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_25                                = 0x0137;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_26                                = 0x0138;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_27                                = 0x0139;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_28                                = 0x013A;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_29                                = 0x013B;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_30                                = 0x013C;
const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_31                                = 0x013D;
const uint16_t _LR4_ROI_CONFIG__MODE_ROI_CENTRE_SPAD                                  = 0x013E;
const uint16_t _LR4_ROI_CONFIG__MODE_ROI_XY_SIZE                                      = 0x013F;
const uint16_t _LR4_GO2_HOST_BANK_ACCESS__OVERRIDE                                    = 0x0300;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND                                 = 0x0400;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_3                               = 0x0400;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_2                               = 0x0401;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_1                               = 0x0402;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_0                               = 0x0403;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER                                   = 0x0404;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_3                                 = 0x0404;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_2                                 = 0x0405;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_1                                 = 0x0406;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_0                                 = 0x0407;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI                                   = 0x0408;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_3                                 = 0x0408;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_2                                 = 0x0409;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_1                                 = 0x040A;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_0                                 = 0x040B;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO                                   = 0x040C;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_3                                 = 0x040C;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_2                                 = 0x040D;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_1                                 = 0x040E;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_0                                 = 0x040F;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__START                                        = 0x0410;
const uint16_t _LR4_MCU_UTIL_MULTIPLIER__STATUS                                       = 0x0411;
const uint16_t _LR4_MCU_UTIL_DIVIDER__START                                           = 0x0412;
const uint16_t _LR4_MCU_UTIL_DIVIDER__STATUS                                          = 0x0413;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND                                        = 0x0414;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_3                                      = 0x0414;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_2                                      = 0x0415;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_1                                      = 0x0416;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_0                                      = 0x0417;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR                                         = 0x0418;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_3                                       = 0x0418;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_2                                       = 0x0419;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_1                                       = 0x041A;
const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_0                                       = 0x041B;
const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT                                        = 0x041C;
const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_3                                      = 0x041C;
const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_2                                      = 0x041D;
const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_1                                      = 0x041E;
const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_0                                      = 0x041F;
const uint16_t _LR4_TIMER0__VALUE_IN                                                  = 0x0420;
const uint16_t _LR4_TIMER0__VALUE_IN_3                                                = 0x0420;
const uint16_t _LR4_TIMER0__VALUE_IN_2                                                = 0x0421;
const uint16_t _LR4_TIMER0__VALUE_IN_1                                                = 0x0422;
const uint16_t _LR4_TIMER0__VALUE_IN_0                                                = 0x0423;
const uint16_t _LR4_TIMER1__VALUE_IN                                                  = 0x0424;
const uint16_t _LR4_TIMER1__VALUE_IN_3                                                = 0x0424;
const uint16_t _LR4_TIMER1__VALUE_IN_2                                                = 0x0425;
const uint16_t _LR4_TIMER1__VALUE_IN_1                                                = 0x0426;
const uint16_t _LR4_TIMER1__VALUE_IN_0                                                = 0x0427;
const uint16_t _LR4_TIMER0__CTRL                                                      = 0x0428;
const uint16_t _LR4_TIMER1__CTRL                                                      = 0x0429;
const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_0                                         = 0x042C;
const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_1                                         = 0x042D;
const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_2                                         = 0x042E;
const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_3                                         = 0x042F;
const uint16_t _LR4_MCU_RANGE_CALC__CONFIG                                            = 0x0430;
const uint16_t _LR4_MCU_RANGE_CALC__OFFSET_CORRECTED_RANGE                            = 0x0432;
const uint16_t _LR4_MCU_RANGE_CALC__OFFSET_CORRECTED_RANGE_HI                         = 0x0432;
const uint16_t _LR4_MCU_RANGE_CALC__OFFSET_CORRECTED_RANGE_LO                         = 0x0433;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4                                           = 0x0434;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_3                                         = 0x0434;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_2                                         = 0x0435;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_1                                         = 0x0436;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_0                                         = 0x0437;
const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_DURATION_PRE_CALC                         = 0x0438;
const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_DURATION_PRE_CALC_HI                      = 0x0438;
const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_DURATION_PRE_CALC_LO                      = 0x0439;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_VCSEL_PERIOD                                 = 0x043C;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_5                                           = 0x043D;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_TOTAL_PERIODS                                = 0x043E;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_TOTAL_PERIODS_HI                             = 0x043E;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_TOTAL_PERIODS_LO                             = 0x043F;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE                                  = 0x0440;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_3                                = 0x0440;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_2                                = 0x0441;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_1                                = 0x0442;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_0                                = 0x0443;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS                                = 0x0444;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_3                              = 0x0444;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_2                              = 0x0445;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_1                              = 0x0446;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_0                              = 0x0447;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS                               = 0x0448;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_3                             = 0x0448;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_2                             = 0x0449;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_1                             = 0x044A;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_0                             = 0x044B;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_6                                           = 0x044C;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_6_HI                                        = 0x044C;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_6_LO                                        = 0x044D;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ADJUST_VCSEL_PERIOD                          = 0x044E;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ADJUST_VCSEL_PERIOD_HI                       = 0x044E;
const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ADJUST_VCSEL_PERIOD_LO                       = 0x044F;
const uint16_t _LR4_MCU_RANGE_CALC__NUM_SPADS                                         = 0x0450;
const uint16_t _LR4_MCU_RANGE_CALC__NUM_SPADS_HI                                      = 0x0450;
const uint16_t _LR4_MCU_RANGE_CALC__NUM_SPADS_LO                                      = 0x0451;
const uint16_t _LR4_MCU_RANGE_CALC__PHASE_OUTPUT                                      = 0x0452;
const uint16_t _LR4_MCU_RANGE_CALC__PHASE_OUTPUT_HI                                   = 0x0452;
const uint16_t _LR4_MCU_RANGE_CALC__PHASE_OUTPUT_LO                                   = 0x0453;
const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS                                = 0x0454;
const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_3                              = 0x0454;
const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_2                              = 0x0455;
const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_1                              = 0x0456;
const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_0                              = 0x0457;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_7                                           = 0x0458;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_8                                           = 0x0459;
const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_MCPS                             = 0x045A;
const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_MCPS_HI                          = 0x045A;
const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_MCPS_LO                          = 0x045B;
const uint16_t _LR4_MCU_RANGE_CALC__AVG_SIGNAL_RATE_MCPS                              = 0x045C;
const uint16_t _LR4_MCU_RANGE_CALC__AVG_SIGNAL_RATE_MCPS_HI                           = 0x045C;
const uint16_t _LR4_MCU_RANGE_CALC__AVG_SIGNAL_RATE_MCPS_LO                           = 0x045D;
const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_RATE_MCPS                                 = 0x045E;
const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_RATE_MCPS_HI                              = 0x045E;
const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_RATE_MCPS_LO                              = 0x045F;
const uint16_t _LR4_MCU_RANGE_CALC__XTALK                                             = 0x0460;
const uint16_t _LR4_MCU_RANGE_CALC__XTALK_HI                                          = 0x0460;
const uint16_t _LR4_MCU_RANGE_CALC__XTALK_LO                                          = 0x0461;
const uint16_t _LR4_MCU_RANGE_CALC__CALC_STATUS                                       = 0x0462;
const uint16_t _LR4_MCU_RANGE_CALC__DEBUG                                             = 0x0463;
const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_XTALK_CORR_MCPS                  = 0x0464;
const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_XTALK_CORR_MCPS_HI               = 0x0464;
const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_XTALK_CORR_MCPS_LO               = 0x0465;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_0                                           = 0x0468;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_1                                           = 0x0469;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_2                                           = 0x046A;
const uint16_t _LR4_MCU_RANGE_CALC__SPARE_3                                           = 0x046B;
const uint16_t _LR4_PATCH__CTRL                                                       = 0x0470;
const uint16_t _LR4_PATCH__JMP_ENABLES                                                = 0x0472;
const uint16_t _LR4_PATCH__JMP_ENABLES_HI                                             = 0x0472;
const uint16_t _LR4_PATCH__JMP_ENABLES_LO                                             = 0x0473;
const uint16_t _LR4_PATCH__DATA_ENABLES                                               = 0x0474;
const uint16_t _LR4_PATCH__DATA_ENABLES_HI                                            = 0x0474;
const uint16_t _LR4_PATCH__DATA_ENABLES_LO                                            = 0x0475;
const uint16_t _LR4_PATCH__OFFSET_0                                                   = 0x0476;
const uint16_t _LR4_PATCH__OFFSET_0_HI                                                = 0x0476;
const uint16_t _LR4_PATCH__OFFSET_0_LO                                                = 0x0477;
const uint16_t _LR4_PATCH__OFFSET_1                                                   = 0x0478;
const uint16_t _LR4_PATCH__OFFSET_1_HI                                                = 0x0478;
const uint16_t _LR4_PATCH__OFFSET_1_LO                                                = 0x0479;
const uint16_t _LR4_PATCH__OFFSET_2                                                   = 0x047A;
const uint16_t _LR4_PATCH__OFFSET_2_HI                                                = 0x047A;
const uint16_t _LR4_PATCH__OFFSET_2_LO                                                = 0x047B;
const uint16_t _LR4_PATCH__OFFSET_3                                                   = 0x047C;
const uint16_t _LR4_PATCH__OFFSET_3_HI                                                = 0x047C;
const uint16_t _LR4_PATCH__OFFSET_3_LO                                                = 0x047D;
const uint16_t _LR4_PATCH__OFFSET_4                                                   = 0x047E;
const uint16_t _LR4_PATCH__OFFSET_4_HI                                                = 0x047E;
const uint16_t _LR4_PATCH__OFFSET_4_LO                                                = 0x047F;
const uint16_t _LR4_PATCH__OFFSET_5                                                   = 0x0480;
const uint16_t _LR4_PATCH__OFFSET_5_HI                                                = 0x0480;
const uint16_t _LR4_PATCH__OFFSET_5_LO                                                = 0x0481;
const uint16_t _LR4_PATCH__OFFSET_6                                                   = 0x0482;
const uint16_t _LR4_PATCH__OFFSET_6_HI                                                = 0x0482;
const uint16_t _LR4_PATCH__OFFSET_6_LO                                                = 0x0483;
const uint16_t _LR4_PATCH__OFFSET_7                                                   = 0x0484;
const uint16_t _LR4_PATCH__OFFSET_7_HI                                                = 0x0484;
const uint16_t _LR4_PATCH__OFFSET_7_LO                                                = 0x0485;
const uint16_t _LR4_PATCH__OFFSET_8                                                   = 0x0486;
const uint16_t _LR4_PATCH__OFFSET_8_HI                                                = 0x0486;
const uint16_t _LR4_PATCH__OFFSET_8_LO                                                = 0x0487;
const uint16_t _LR4_PATCH__OFFSET_9                                                   = 0x0488;
const uint16_t _LR4_PATCH__OFFSET_9_HI                                                = 0x0488;
const uint16_t _LR4_PATCH__OFFSET_9_LO                                                = 0x0489;
const uint16_t _LR4_PATCH__OFFSET_10                                                  = 0x048A;
const uint16_t _LR4_PATCH__OFFSET_10_HI                                               = 0x048A;
const uint16_t _LR4_PATCH__OFFSET_10_LO                                               = 0x048B;
const uint16_t _LR4_PATCH__OFFSET_11                                                  = 0x048C;
const uint16_t _LR4_PATCH__OFFSET_11_HI                                               = 0x048C;
const uint16_t _LR4_PATCH__OFFSET_11_LO                                               = 0x048D;
const uint16_t _LR4_PATCH__OFFSET_12                                                  = 0x048E;
const uint16_t _LR4_PATCH__OFFSET_12_HI                                               = 0x048E;
const uint16_t _LR4_PATCH__OFFSET_12_LO                                               = 0x048F;
const uint16_t _LR4_PATCH__OFFSET_13                                                  = 0x0490;
const uint16_t _LR4_PATCH__OFFSET_13_HI                                               = 0x0490;
const uint16_t _LR4_PATCH__OFFSET_13_LO                                               = 0x0491;
const uint16_t _LR4_PATCH__OFFSET_14                                                  = 0x0492;
const uint16_t _LR4_PATCH__OFFSET_14_HI                                               = 0x0492;
const uint16_t _LR4_PATCH__OFFSET_14_LO                                               = 0x0493;
const uint16_t _LR4_PATCH__OFFSET_15                                                  = 0x0494;
const uint16_t _LR4_PATCH__OFFSET_15_HI                                               = 0x0494;
const uint16_t _LR4_PATCH__OFFSET_15_LO                                               = 0x0495;
const uint16_t _LR4_PATCH__ADDRESS_0                                                  = 0x0496;
const uint16_t _LR4_PATCH__ADDRESS_0_HI                                               = 0x0496;
const uint16_t _LR4_PATCH__ADDRESS_0_LO                                               = 0x0497;
const uint16_t _LR4_PATCH__ADDRESS_1                                                  = 0x0498;
const uint16_t _LR4_PATCH__ADDRESS_1_HI                                               = 0x0498;
const uint16_t _LR4_PATCH__ADDRESS_1_LO                                               = 0x0499;
const uint16_t _LR4_PATCH__ADDRESS_2                                                  = 0x049A;
const uint16_t _LR4_PATCH__ADDRESS_2_HI                                               = 0x049A;
const uint16_t _LR4_PATCH__ADDRESS_2_LO                                               = 0x049B;
const uint16_t _LR4_PATCH__ADDRESS_3                                                  = 0x049C;
const uint16_t _LR4_PATCH__ADDRESS_3_HI                                               = 0x049C;
const uint16_t _LR4_PATCH__ADDRESS_3_LO                                               = 0x049D;
const uint16_t _LR4_PATCH__ADDRESS_4                                                  = 0x049E;
const uint16_t _LR4_PATCH__ADDRESS_4_HI                                               = 0x049E;
const uint16_t _LR4_PATCH__ADDRESS_4_LO                                               = 0x049F;
const uint16_t _LR4_PATCH__ADDRESS_5                                                  = 0x04A0;
const uint16_t _LR4_PATCH__ADDRESS_5_HI                                               = 0x04A0;
const uint16_t _LR4_PATCH__ADDRESS_5_LO                                               = 0x04A1;
const uint16_t _LR4_PATCH__ADDRESS_6                                                  = 0x04A2;
const uint16_t _LR4_PATCH__ADDRESS_6_HI                                               = 0x04A2;
const uint16_t _LR4_PATCH__ADDRESS_6_LO                                               = 0x04A3;
const uint16_t _LR4_PATCH__ADDRESS_7                                                  = 0x04A4;
const uint16_t _LR4_PATCH__ADDRESS_7_HI                                               = 0x04A4;
const uint16_t _LR4_PATCH__ADDRESS_7_LO                                               = 0x04A5;
const uint16_t _LR4_PATCH__ADDRESS_8                                                  = 0x04A6;
const uint16_t _LR4_PATCH__ADDRESS_8_HI                                               = 0x04A6;
const uint16_t _LR4_PATCH__ADDRESS_8_LO                                               = 0x04A7;
const uint16_t _LR4_PATCH__ADDRESS_9                                                  = 0x04A8;
const uint16_t _LR4_PATCH__ADDRESS_9_HI                                               = 0x04A8;
const uint16_t _LR4_PATCH__ADDRESS_9_LO                                               = 0x04A9;
const uint16_t _LR4_PATCH__ADDRESS_10                                                 = 0x04AA;
const uint16_t _LR4_PATCH__ADDRESS_10_HI                                              = 0x04AA;
const uint16_t _LR4_PATCH__ADDRESS_10_LO                                              = 0x04AB;
const uint16_t _LR4_PATCH__ADDRESS_11                                                 = 0x04AC;
const uint16_t _LR4_PATCH__ADDRESS_11_HI                                              = 0x04AC;
const uint16_t _LR4_PATCH__ADDRESS_11_LO                                              = 0x04AD;
const uint16_t _LR4_PATCH__ADDRESS_12                                                 = 0x04AE;
const uint16_t _LR4_PATCH__ADDRESS_12_HI                                              = 0x04AE;
const uint16_t _LR4_PATCH__ADDRESS_12_LO                                              = 0x04AF;
const uint16_t _LR4_PATCH__ADDRESS_13                                                 = 0x04B0;
const uint16_t _LR4_PATCH__ADDRESS_13_HI                                              = 0x04B0;
const uint16_t _LR4_PATCH__ADDRESS_13_LO                                              = 0x04B1;
const uint16_t _LR4_PATCH__ADDRESS_14                                                 = 0x04B2;
const uint16_t _LR4_PATCH__ADDRESS_14_HI                                              = 0x04B2;
const uint16_t _LR4_PATCH__ADDRESS_14_LO                                              = 0x04B3;
const uint16_t _LR4_PATCH__ADDRESS_15                                                 = 0x04B4;
const uint16_t _LR4_PATCH__ADDRESS_15_HI                                              = 0x04B4;
const uint16_t _LR4_PATCH__ADDRESS_15_LO                                              = 0x04B5;
const uint16_t _LR4_SPI_ASYNC_MUX__CTRL                                               = 0x04C0;
const uint16_t _LR4_CLK__CONFIG                                                       = 0x04C4;
const uint16_t _LR4_GPIO_LV_MUX__CTRL                                                 = 0x04CC;
const uint16_t _LR4_GPIO_LV_PAD__CTRL                                                 = 0x04CD;
const uint16_t _LR4_PAD_I2C_LV__CONFIG                                                = 0x04D0;
const uint16_t _LR4_PAD_STARTUP_MODE__VALUE_RO_GO1                                    = 0x04D4;
const uint16_t _LR4_HOST_IF__STATUS_GO1                                               = 0x04D5;
const uint16_t _LR4_MCU_CLK_GATING__CTRL                                              = 0x04D8;
const uint16_t _LR4_TEST__BIST_ROM_CTRL                                               = 0x04E0;
const uint16_t _LR4_TEST__BIST_ROM_RESULT                                             = 0x04E1;
const uint16_t _LR4_TEST__BIST_ROM_MCU_SIG                                            = 0x04E2;
const uint16_t _LR4_TEST__BIST_ROM_MCU_SIG_HI                                         = 0x04E2;
const uint16_t _LR4_TEST__BIST_ROM_MCU_SIG_LO                                         = 0x04E3;
const uint16_t _LR4_TEST__BIST_RAM_CTRL                                               = 0x04E4;
const uint16_t _LR4_TEST__BIST_RAM_RESULT                                             = 0x04E5;
const uint16_t _LR4_TEST__TMC                                                         = 0x04E8;
const uint16_t _LR4_TEST__PLL_BIST_MIN_THRESHOLD                                      = 0x04F0;
const uint16_t _LR4_TEST__PLL_BIST_MIN_THRESHOLD_HI                                   = 0x04F0;
const uint16_t _LR4_TEST__PLL_BIST_MIN_THRESHOLD_LO                                   = 0x04F1;
const uint16_t _LR4_TEST__PLL_BIST_MAX_THRESHOLD                                      = 0x04F2;
const uint16_t _LR4_TEST__PLL_BIST_MAX_THRESHOLD_HI                                   = 0x04F2;
const uint16_t _LR4_TEST__PLL_BIST_MAX_THRESHOLD_LO                                   = 0x04F3;
const uint16_t _LR4_TEST__PLL_BIST_COUNT_OUT                                          = 0x04F4;
const uint16_t _LR4_TEST__PLL_BIST_COUNT_OUT_HI                                       = 0x04F4;
const uint16_t _LR4_TEST__PLL_BIST_COUNT_OUT_LO                                       = 0x04F5;
const uint16_t _LR4_TEST__PLL_BIST_GONOGO                                             = 0x04F6;
const uint16_t _LR4_TEST__PLL_BIST_CTRL                                               = 0x04F7;
const uint16_t _LR4_RANGING_CORE__DEVICE_ID                                           = 0x0680;
const uint16_t _LR4_RANGING_CORE__REVISION_ID                                         = 0x0681;
const uint16_t _LR4_RANGING_CORE__CLK_CTRL1                                           = 0x0683;
const uint16_t _LR4_RANGING_CORE__CLK_CTRL2                                           = 0x0684;
const uint16_t _LR4_RANGING_CORE__WOI_1                                               = 0x0685;
const uint16_t _LR4_RANGING_CORE__WOI_REF_1                                           = 0x0686;
const uint16_t _LR4_RANGING_CORE__START_RANGING                                       = 0x0687;
const uint16_t _LR4_RANGING_CORE__LOW_LIMIT_1                                         = 0x0690;
const uint16_t _LR4_RANGING_CORE__HIGH_LIMIT_1                                        = 0x0691;
const uint16_t _LR4_RANGING_CORE__LOW_LIMIT_REF_1                                     = 0x0692;
const uint16_t _LR4_RANGING_CORE__HIGH_LIMIT_REF_1                                    = 0x0693;
const uint16_t _LR4_RANGING_CORE__QUANTIFIER_1_MSB                                    = 0x0694;
const uint16_t _LR4_RANGING_CORE__QUANTIFIER_1_LSB                                    = 0x0695;
const uint16_t _LR4_RANGING_CORE__QUANTIFIER_REF_1_MSB                                = 0x0696;
const uint16_t _LR4_RANGING_CORE__QUANTIFIER_REF_1_LSB                                = 0x0697;
const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_1_MSB                                = 0x0698;
const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_1_LSB                                = 0x0699;
const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_REF_1_MSB                            = 0x069A;
const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_REF_1_LSB                            = 0x069B;
const uint16_t _LR4_RANGING_CORE__FILTER_STRENGTH_1                                   = 0x069C;
const uint16_t _LR4_RANGING_CORE__FILTER_STRENGTH_REF_1                               = 0x069D;
const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_1_MSB                            = 0x069E;
const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_1_LSB                            = 0x069F;
const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_REF_1_MSB                        = 0x06A0;
const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_REF_1_LSB                        = 0x06A1;
const uint16_t _LR4_RANGING_CORE__TIMEOUT_OVERALL_PERIODS_MSB                         = 0x06A4;
const uint16_t _LR4_RANGING_CORE__TIMEOUT_OVERALL_PERIODS_LSB                         = 0x06A5;
const uint16_t _LR4_RANGING_CORE__INVERT_HW                                           = 0x06A6;
const uint16_t _LR4_RANGING_CORE__FORCE_HW                                            = 0x06A7;
const uint16_t _LR4_RANGING_CORE__STATIC_HW_VALUE                                     = 0x06A8;
const uint16_t _LR4_RANGING_CORE__FORCE_CONTINUOUS_AMBIENT                            = 0x06A9;
const uint16_t _LR4_RANGING_CORE__TEST_PHASE_SELECT_TO_FILTER                         = 0x06AA;
const uint16_t _LR4_RANGING_CORE__TEST_PHASE_SELECT_TO_TIMING_GEN                     = 0x06AB;
const uint16_t _LR4_RANGING_CORE__INITIAL_PHASE_VALUE_1                               = 0x06AC;
const uint16_t _LR4_RANGING_CORE__INITIAL_PHASE_VALUE_REF_1                           = 0x06AD;
const uint16_t _LR4_RANGING_CORE__FORCE_UP_IN                                         = 0x06AE;
const uint16_t _LR4_RANGING_CORE__FORCE_DN_IN                                         = 0x06AF;
const uint16_t _LR4_RANGING_CORE__STATIC_UP_VALUE_1                                   = 0x06B0;
const uint16_t _LR4_RANGING_CORE__STATIC_UP_VALUE_REF_1                               = 0x06B1;
const uint16_t _LR4_RANGING_CORE__STATIC_DN_VALUE_1                                   = 0x06B2;
const uint16_t _LR4_RANGING_CORE__STATIC_DN_VALUE_REF_1                               = 0x06B3;
const uint16_t _LR4_RANGING_CORE__MONITOR_UP_DN                                       = 0x06B4;
const uint16_t _LR4_RANGING_CORE__INVERT_UP_DN                                        = 0x06B5;
const uint16_t _LR4_RANGING_CORE__CPUMP_1                                             = 0x06B6;
const uint16_t _LR4_RANGING_CORE__CPUMP_2                                             = 0x06B7;
const uint16_t _LR4_RANGING_CORE__CPUMP_3                                             = 0x06B8;
const uint16_t _LR4_RANGING_CORE__OSC_1                                               = 0x06B9;
const uint16_t _LR4_RANGING_CORE__PLL_1                                               = 0x06BB;
const uint16_t _LR4_RANGING_CORE__PLL_2                                               = 0x06BC;
const uint16_t _LR4_RANGING_CORE__REFERENCE_1                                         = 0x06BD;
const uint16_t _LR4_RANGING_CORE__REFERENCE_3                                         = 0x06BF;
const uint16_t _LR4_RANGING_CORE__REFERENCE_4                                         = 0x06C0;
const uint16_t _LR4_RANGING_CORE__REFERENCE_5                                         = 0x06C1;
const uint16_t _LR4_RANGING_CORE__REGAVDD1V2                                          = 0x06C3;
const uint16_t _LR4_RANGING_CORE__CALIB_1                                             = 0x06C4;
const uint16_t _LR4_RANGING_CORE__CALIB_2                                             = 0x06C5;
const uint16_t _LR4_RANGING_CORE__CALIB_3                                             = 0x06C6;
const uint16_t _LR4_RANGING_CORE__TST_MUX_SEL1                                        = 0x06C9;
const uint16_t _LR4_RANGING_CORE__TST_MUX_SEL2                                        = 0x06CA;
const uint16_t _LR4_RANGING_CORE__TST_MUX                                             = 0x06CB;
const uint16_t _LR4_RANGING_CORE__GPIO_OUT_TESTMUX                                    = 0x06CC;
const uint16_t _LR4_RANGING_CORE__CUSTOM_FE                                           = 0x06CD;
const uint16_t _LR4_RANGING_CORE__CUSTOM_FE_2                                         = 0x06CE;
const uint16_t _LR4_RANGING_CORE__SPAD_READOUT                                        = 0x06CF;
const uint16_t _LR4_RANGING_CORE__SPAD_READOUT_1                                      = 0x06D0;
const uint16_t _LR4_RANGING_CORE__SPAD_READOUT_2                                      = 0x06D1;
const uint16_t _LR4_RANGING_CORE__SPAD_PS                                             = 0x06D2;
const uint16_t _LR4_RANGING_CORE__LASER_SAFETY_2                                      = 0x06D4;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__MODE                                      = 0x0780;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PDN                                       = 0x0781;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PROGN                                     = 0x0782;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__READN                                     = 0x0783;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PULSE_WIDTH_MSB                           = 0x0784;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PULSE_WIDTH_LSB                           = 0x0785;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_RISE_MSB                               = 0x0786;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_RISE_LSB                               = 0x0787;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_FALL_MSB                               = 0x0788;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_FALL_LSB                               = 0x0789;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__TST                                       = 0x078A;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__TESTREAD                                  = 0x078B;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_MMM                                = 0x078C;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_LMM                                = 0x078D;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_LLM                                = 0x078E;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_LLL                                = 0x078F;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_MMM                               = 0x0790;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_LMM                               = 0x0791;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_LLM                               = 0x0792;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_LLL                               = 0x0793;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__ADDR                                      = 0x0794;
const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_ECC                               = 0x0795;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_0                                       = 0x0796;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_1                                       = 0x0797;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_2                                       = 0x0798;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_3                                       = 0x0799;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_4                                       = 0x079A;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_5                                       = 0x079B;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_6                                       = 0x079C;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_7                                       = 0x079D;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_8                                       = 0x079E;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_9                                       = 0x079F;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_10                                      = 0x07A0;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_11                                      = 0x07A1;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_12                                      = 0x07A2;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_13                                      = 0x07A3;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_14                                      = 0x07A4;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_15                                      = 0x07A5;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_16                                      = 0x07A6;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_17                                      = 0x07A7;
const uint16_t _LR4_RANGING_CORE__SPAD_SHIFT_EN                                       = 0x07BA;
const uint16_t _LR4_RANGING_CORE__SPAD_DISABLE_CTRL                                   = 0x07BB;
const uint16_t _LR4_RANGING_CORE__SPAD_EN_SHIFT_OUT_DEBUG                             = 0x07BC;
const uint16_t _LR4_RANGING_CORE__SPI_MODE                                            = 0x07BD;
const uint16_t _LR4_RANGING_CORE__GPIO_DIR                                            = 0x07BE;
const uint16_t _LR4_RANGING_CORE__VCSEL_PERIOD                                        = 0x0880;
const uint16_t _LR4_RANGING_CORE__VCSEL_START                                         = 0x0881;
const uint16_t _LR4_RANGING_CORE__VCSEL_STOP                                          = 0x0882;
const uint16_t _LR4_RANGING_CORE__VCSEL_1                                             = 0x0885;
const uint16_t _LR4_RANGING_CORE__VCSEL_STATUS                                        = 0x088D;
const uint16_t _LR4_RANGING_CORE__STATUS                                              = 0x0980;
const uint16_t _LR4_RANGING_CORE__LASER_CONTINUITY_STATE                              = 0x0981;
const uint16_t _LR4_RANGING_CORE__RANGE_1_MMM                                         = 0x0982;
const uint16_t _LR4_RANGING_CORE__RANGE_1_LMM                                         = 0x0983;
const uint16_t _LR4_RANGING_CORE__RANGE_1_LLM                                         = 0x0984;
const uint16_t _LR4_RANGING_CORE__RANGE_1_LLL                                         = 0x0985;
const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_MMM                                     = 0x0986;
const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_LMM                                     = 0x0987;
const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_LLM                                     = 0x0988;
const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_LLL                                     = 0x0989;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_MMM                         = 0x098A;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_LMM                         = 0x098B;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_LLM                         = 0x098C;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_LLL                         = 0x098D;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_MMM                          = 0x098E;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_LMM                          = 0x098F;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_LLM                          = 0x0990;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_LLL                          = 0x0991;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_MMM                           = 0x0992;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_LMM                           = 0x0993;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_LLM                           = 0x0994;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_LLL                           = 0x0995;
const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_1_MM                          = 0x0996;
const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_1_LM                          = 0x0997;
const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_1_LL                          = 0x0998;
const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_MM                                 = 0x0999;
const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_LM                                 = 0x099A;
const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_LL                                 = 0x099B;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_MMM                     = 0x099C;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_LMM                     = 0x099D;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_LLM                     = 0x099E;
const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_LLL                     = 0x099F;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_MMM                      = 0x09A0;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_LMM                      = 0x09A1;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_LLM                      = 0x09A2;
const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_LLL                      = 0x09A3;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_MMM                       = 0x09A4;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_LMM                       = 0x09A5;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_LLM                       = 0x09A6;
const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_LLL                       = 0x09A7;
const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_REF_1_MM                      = 0x09A8;
const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_REF_1_LM                      = 0x09A9;
const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_REF_1_LL                      = 0x09AA;
const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_REF_MM                             = 0x09AB;
const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_REF_LM                             = 0x09AC;
const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_REF_LL                             = 0x09AD;
const uint16_t _LR4_RANGING_CORE__GPIO_CONFIG__A0                                     = 0x0A00;
const uint16_t _LR4_RANGING_CORE__RESET_CONTROL__A0                                   = 0x0A01;
const uint16_t _LR4_RANGING_CORE__INTR_MANAGER__A0                                    = 0x0A02;
const uint16_t _LR4_RANGING_CORE__POWER_FSM_TIME_OSC__A0                              = 0x0A06;
const uint16_t _LR4_RANGING_CORE__VCSEL_ATEST__A0                                     = 0x0A07;
const uint16_t _LR4_RANGING_CORE__VCSEL_PERIOD_CLIPPED__A0                            = 0x0A08;
const uint16_t _LR4_RANGING_CORE__VCSEL_STOP_CLIPPED__A0                              = 0x0A09;
const uint16_t _LR4_RANGING_CORE__CALIB_2__A0                                         = 0x0A0A;
const uint16_t _LR4_RANGING_CORE__STOP_CONDITION__A0                                  = 0x0A0B;
const uint16_t _LR4_RANGING_CORE__STATUS_RESET__A0                                    = 0x0A0C;
const uint16_t _LR4_RANGING_CORE__READOUT_CFG__A0                                     = 0x0A0D;
const uint16_t _LR4_RANGING_CORE__WINDOW_SETTING__A0                                  = 0x0A0E;
const uint16_t _LR4_RANGING_CORE__VCSEL_DELAY__A0                                     = 0x0A1A;
const uint16_t _LR4_RANGING_CORE__REFERENCE_2__A0                                     = 0x0A1B;
const uint16_t _LR4_RANGING_CORE__REGAVDD1V2__A0                                      = 0x0A1D;
const uint16_t _LR4_RANGING_CORE__TST_MUX__A0                                         = 0x0A1F;
const uint16_t _LR4_RANGING_CORE__CUSTOM_FE_2__A0                                     = 0x0A20;
const uint16_t _LR4_RANGING_CORE__SPAD_READOUT__A0                                    = 0x0A21;
const uint16_t _LR4_RANGING_CORE__CPUMP_1__A0                                         = 0x0A22;
const uint16_t _LR4_RANGING_CORE__SPARE_REGISTER__A0                                  = 0x0A23;
const uint16_t _LR4_RANGING_CORE__VCSEL_CONT_STAGE5_BYPASS__A0                        = 0x0A24;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_18                                      = 0x0A25;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_19                                      = 0x0A26;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_20                                      = 0x0A27;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_21                                      = 0x0A28;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_22                                      = 0x0A29;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_23                                      = 0x0A2A;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_24                                      = 0x0A2B;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_25                                      = 0x0A2C;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_26                                      = 0x0A2D;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_27                                      = 0x0A2E;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_28                                      = 0x0A2F;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_29                                      = 0x0A30;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_30                                      = 0x0A31;
const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_31                                      = 0x0A32;
const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_0__EWOK                                 = 0x0A33;
const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_1__EWOK                                 = 0x0A34;
const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_2__EWOK                                 = 0x0A35;
const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_3__EWOK                                 = 0x0A36;
const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_4__EWOK                                 = 0x0A37;
const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_5__EWOK                                 = 0x0A38;
const uint16_t _LR4_RANGING_CORE__REF_EN_START_SELECT                                 = 0x0A39;
const uint16_t _LR4_RANGING_CORE__REGDVDD1V2_ATEST__EWOK                              = 0x0A41;
const uint16_t _LR4_SOFT_RESET_GO1                                                    = 0x0B00;
const uint16_t _LR4_PRIVATE__PATCH_BASE_ADDR_RSLV                                     = 0x0E00;
const uint16_t _LR4_PREV_SHADOW_RESULT__INTERRUPT_STATUS                              = 0x0ED0;
const uint16_t _LR4_PREV_SHADOW_RESULT__RANGE_STATUS                                  = 0x0ED1;
const uint16_t _LR4_PREV_SHADOW_RESULT__REPORT_STATUS                                 = 0x0ED2;
const uint16_t _LR4_PREV_SHADOW_RESULT__STREAM_COUNT                                  = 0x0ED3;
const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0                = 0x0ED4;
const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_HI             = 0x0ED4;
const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_LO             = 0x0ED5;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0               = 0x0ED6;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_HI            = 0x0ED6;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_LO            = 0x0ED7;
const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0                   = 0x0ED8;
const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_HI                = 0x0ED8;
const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_LO                = 0x0ED9;
const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD0                                     = 0x0EDA;
const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD0_HI                                  = 0x0EDA;
const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD0_LO                                  = 0x0EDB;
const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD0                                     = 0x0EDC;
const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD0_HI                                  = 0x0EDC;
const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD0_LO                                  = 0x0EDD;
const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0        = 0x0EDE;
const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_HI     = 0x0EDE;
const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_LO     = 0x0EDF;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCP= 0x0EE0;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCP_MSB=  0x0EE0;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCP_LSB=  0x0EE1;
const uint16_t _LR4_PREV_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0           = 0x0EE2;
const uint16_t _LR4_PREV_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_HI        = 0x0EE2;
const uint16_t _LR4_PREV_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_LO        = 0x0EE3;
const uint16_t _LR4_PREV_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0           = 0x0EE4;
const uint16_t _LR4_PREV_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_HI        = 0x0EE4;
const uint16_t _LR4_PREV_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_LO        = 0x0EE5;
const uint16_t _LR4_PREV_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0                = 0x0EE6;
const uint16_t _LR4_PREV_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_HI             = 0x0EE6;
const uint16_t _LR4_PREV_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_LO             = 0x0EE7;
const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1                = 0x0EE8;
const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_HI             = 0x0EE8;
const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_LO             = 0x0EE9;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1               = 0x0EEA;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_HI            = 0x0EEA;
const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_LO            = 0x0EEB;
const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1                   = 0x0EEC;
const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_HI                = 0x0EEC;
const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_LO                = 0x0EED;
const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD1                                     = 0x0EEE;
const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD1_HI                                  = 0x0EEE;
const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD1_LO                                  = 0x0EEF;
const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD1                                     = 0x0EF0;
const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD1_HI                                  = 0x0EF0;
const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD1_LO                                  = 0x0EF1;
const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1        = 0x0EF2;
const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_HI     = 0x0EF2;
const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_LO     = 0x0EF3;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_0_SD1                                   = 0x0EF4;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_0_SD1_HI                                = 0x0EF4;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_0_SD1_LO                                = 0x0EF5;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_1_SD1                                   = 0x0EF6;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_1_SD1_HI                                = 0x0EF6;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_1_SD1_LO                                = 0x0EF7;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_2_SD1                                   = 0x0EF8;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_2_SD1_HI                                = 0x0EF8;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_2_SD1_LO                                = 0x0EF9;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_3_SD1                                   = 0x0EFA;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_3_SD1_HI                                = 0x0EFA;
const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_3_SD1_LO                                = 0x0EFB;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0                = 0x0EFC;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_3              = 0x0EFC;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_2              = 0x0EFD;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_1              = 0x0EFE;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_0              = 0x0EFF;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0                 = 0x0F00;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_3               = 0x0F00;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_2               = 0x0F01;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_1               = 0x0F02;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_0               = 0x0F03;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0                  = 0x0F04;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_3                = 0x0F04;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_2                = 0x0F05;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_1                = 0x0F06;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_0                = 0x0F07;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0                = 0x0F08;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_3              = 0x0F08;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_2              = 0x0F09;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_1              = 0x0F0A;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_0              = 0x0F0B;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1                = 0x0F0C;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_3              = 0x0F0C;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_2              = 0x0F0D;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_1              = 0x0F0E;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_0              = 0x0F0F;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1                 = 0x0F10;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_3               = 0x0F10;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_2               = 0x0F11;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_1               = 0x0F12;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_0               = 0x0F13;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1                  = 0x0F14;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_3                = 0x0F14;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_2                = 0x0F15;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_1                = 0x0F16;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_0                = 0x0F17;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1                = 0x0F18;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_3              = 0x0F18;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_2              = 0x0F19;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_1              = 0x0F1A;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_0              = 0x0F1B;
const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SPARE_0                                  = 0x0F1C;
const uint16_t _LR4_RESULT__DEBUG_STATUS                                              = 0x0F20;
const uint16_t _LR4_RESULT__DEBUG_STAGE                                               = 0x0F21;
const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_HIGH                                     = 0x0F24;
const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_HIGH_HI                                  = 0x0F24;
const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_HIGH_LO                                  = 0x0F25;
const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_LOW                                      = 0x0F26;
const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_LOW_HI                                   = 0x0F26;
const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_LOW_LO                                   = 0x0F27;
const uint16_t _LR4_GPH__SYSTEM__INTERRUPT_CONFIG_GPIO                                = 0x0F28;
const uint16_t _LR4_GPH__DSS_CONFIG__ROI_MODE_CONTROL                                 = 0x0F2F;
const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT                    = 0x0F30;
const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_HI                 = 0x0F30;
const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_LO                 = 0x0F31;
const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_BLOCK_SELECT                              = 0x0F32;
const uint16_t _LR4_GPH__DSS_CONFIG__MAX_SPADS_LIMIT                                  = 0x0F33;
const uint16_t _LR4_GPH__DSS_CONFIG__MIN_SPADS_LIMIT                                  = 0x0F34;
const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_A_HI                               = 0x0F36;
const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_A_LO                               = 0x0F37;
const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_B_HI                               = 0x0F38;
const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_B_LO                               = 0x0F39;
const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_A_HI                            = 0x0F3A;
const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_A_LO                            = 0x0F3B;
const uint16_t _LR4_GPH__RANGE_CONFIG__VCSEL_PERIOD_A                                 = 0x0F3C;
const uint16_t _LR4_GPH__RANGE_CONFIG__VCSEL_PERIOD_B                                 = 0x0F3D;
const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_B_HI                            = 0x0F3E;
const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_B_LO                            = 0x0F3F;
const uint16_t _LR4_GPH__RANGE_CONFIG__SIGMA_THRESH                                   = 0x0F40;
const uint16_t _LR4_GPH__RANGE_CONFIG__SIGMA_THRESH_HI                                = 0x0F40;
const uint16_t _LR4_GPH__RANGE_CONFIG__SIGMA_THRESH_LO                                = 0x0F41;
const uint16_t _LR4_GPH__RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS                  = 0x0F42;
const uint16_t _LR4_GPH__RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_HI               = 0x0F42;
const uint16_t _LR4_GPH__RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_LO               = 0x0F43;
const uint16_t _LR4_GPH__RANGE_CONFIG__VALID_PHASE_LOW                                = 0x0F44;
const uint16_t _LR4_GPH__RANGE_CONFIG__VALID_PHASE_HIGH                               = 0x0F45;
const uint16_t _LR4_FIRMWARE__INTERNAL_STREAM_COUNT_DIV                               = 0x0F46;
const uint16_t _LR4_FIRMWARE__INTERNAL_STREAM_COUNTER_VAL                             = 0x0F47;
const uint16_t _LR4_DSS_CALC__ROI_CTRL                                                = 0x0F54;
const uint16_t _LR4_DSS_CALC__SPARE_1                                                 = 0x0F55;
const uint16_t _LR4_DSS_CALC__SPARE_2                                                 = 0x0F56;
const uint16_t _LR4_DSS_CALC__SPARE_3                                                 = 0x0F57;
const uint16_t _LR4_DSS_CALC__SPARE_4                                                 = 0x0F58;
const uint16_t _LR4_DSS_CALC__SPARE_5                                                 = 0x0F59;
const uint16_t _LR4_DSS_CALC__SPARE_6                                                 = 0x0F5A;
const uint16_t _LR4_DSS_CALC__SPARE_7                                                 = 0x0F5B;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_0                                      = 0x0F5C;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_1                                      = 0x0F5D;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_2                                      = 0x0F5E;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_3                                      = 0x0F5F;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_4                                      = 0x0F60;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_5                                      = 0x0F61;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_6                                      = 0x0F62;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_7                                      = 0x0F63;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_8                                      = 0x0F64;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_9                                      = 0x0F65;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_10                                     = 0x0F66;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_11                                     = 0x0F67;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_12                                     = 0x0F68;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_13                                     = 0x0F69;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_14                                     = 0x0F6A;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_15                                     = 0x0F6B;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_16                                     = 0x0F6C;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_17                                     = 0x0F6D;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_18                                     = 0x0F6E;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_19                                     = 0x0F6F;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_20                                     = 0x0F70;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_21                                     = 0x0F71;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_22                                     = 0x0F72;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_23                                     = 0x0F73;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_24                                     = 0x0F74;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_25                                     = 0x0F75;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_26                                     = 0x0F76;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_27                                     = 0x0F77;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_28                                     = 0x0F78;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_29                                     = 0x0F79;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_30                                     = 0x0F7A;
const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_31                                     = 0x0F7B;
const uint16_t _LR4_DSS_CALC__USER_ROI_0                                              = 0x0F7C;
const uint16_t _LR4_DSS_CALC__USER_ROI_1                                              = 0x0F7D;
const uint16_t _LR4_DSS_CALC__MODE_ROI_0                                              = 0x0F7E;
const uint16_t _LR4_DSS_CALC__MODE_ROI_1                                              = 0x0F7F;
const uint16_t _LR4_SIGMA_ESTIMATOR_CALC__SPARE_0                                     = 0x0F80;
const uint16_t _LR4_VHV_RESULT__PEAK_SIGNAL_RATE_MCPS                                 = 0x0F82;
const uint16_t _LR4_VHV_RESULT__PEAK_SIGNAL_RATE_MCPS_HI                              = 0x0F82;
const uint16_t _LR4_VHV_RESULT__PEAK_SIGNAL_RATE_MCPS_LO                              = 0x0F83;
const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF                               = 0x0F84;
const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_3                             = 0x0F84;
const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_2                             = 0x0F85;
const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_1                             = 0x0F86;
const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_0                             = 0x0F87;
const uint16_t _LR4_PHASECAL_RESULT__PHASE_OUTPUT_REF                                 = 0x0F88;
const uint16_t _LR4_PHASECAL_RESULT__PHASE_OUTPUT_REF_HI                              = 0x0F88;
const uint16_t _LR4_PHASECAL_RESULT__PHASE_OUTPUT_REF_LO                              = 0x0F89;
const uint16_t _LR4_DSS_RESULT__TOTAL_RATE_PER_SPAD                                   = 0x0F8A;
const uint16_t _LR4_DSS_RESULT__TOTAL_RATE_PER_SPAD_HI                                = 0x0F8A;
const uint16_t _LR4_DSS_RESULT__TOTAL_RATE_PER_SPAD_LO                                = 0x0F8B;
const uint16_t _LR4_DSS_RESULT__ENABLED_BLOCKS                                        = 0x0F8C;
const uint16_t _LR4_DSS_RESULT__NUM_REQUESTED_SPADS                                   = 0x0F8E;
const uint16_t _LR4_DSS_RESULT__NUM_REQUESTED_SPADS_HI                                = 0x0F8E;
const uint16_t _LR4_DSS_RESULT__NUM_REQUESTED_SPADS_LO                                = 0x0F8F;
const uint16_t _LR4_MM_RESULT__INNER_INTERSECTION_RATE                                = 0x0F92;
const uint16_t _LR4_MM_RESULT__INNER_INTERSECTION_RATE_HI                             = 0x0F92;
const uint16_t _LR4_MM_RESULT__INNER_INTERSECTION_RATE_LO                             = 0x0F93;
const uint16_t _LR4_MM_RESULT__OUTER_COMPLEMENT_RATE                                  = 0x0F94;
const uint16_t _LR4_MM_RESULT__OUTER_COMPLEMENT_RATE_HI                               = 0x0F94;
const uint16_t _LR4_MM_RESULT__OUTER_COMPLEMENT_RATE_LO                               = 0x0F95;
const uint16_t _LR4_MM_RESULT__TOTAL_OFFSET                                           = 0x0F96;
const uint16_t _LR4_MM_RESULT__TOTAL_OFFSET_HI                                        = 0x0F96;
const uint16_t _LR4_MM_RESULT__TOTAL_OFFSET_LO                                        = 0x0F97;
const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS                               = 0x0F98;
const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_3                             = 0x0F98;
const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_2                             = 0x0F99;
const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_1                             = 0x0F9A;
const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_0                             = 0x0F9B;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS                             = 0x0F9C;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_3                           = 0x0F9C;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_2                           = 0x0F9D;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_1                           = 0x0F9E;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_0                           = 0x0F9F;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS                         = 0x0FA0;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_3                       = 0x0FA0;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_2                       = 0x0FA1;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_1                       = 0x0FA2;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_0                       = 0x0FA3;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS                         = 0x0FA4;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_3                       = 0x0FA4;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_2                       = 0x0FA5;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_1                       = 0x0FA6;
const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_0                       = 0x0FA7;
const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE                                         = 0x0FA8;
const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_3                                       = 0x0FA8;
const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_2                                       = 0x0FA9;
const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_1                                       = 0x0FAA;
const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_0                                       = 0x0FAB;
const uint16_t _LR4_RANGE_RESULT__OFFSET_CORRECTED_RANGE                              = 0x0FAC;
const uint16_t _LR4_RANGE_RESULT__OFFSET_CORRECTED_RANGE_HI                           = 0x0FAC;
const uint16_t _LR4_RANGE_RESULT__OFFSET_CORRECTED_RANGE_LO                           = 0x0FAD;
const uint16_t _LR4_SHADOW_PHASECAL_RESULT__VCSEL_START                               = 0x0FAE;
const uint16_t _LR4_SHADOW_RESULT__INTERRUPT_STATUS                                   = 0x0FB0;
const uint16_t _LR4_SHADOW_RESULT__RANGE_STATUS                                       = 0x0FB1;
const uint16_t _LR4_SHADOW_RESULT__REPORT_STATUS                                      = 0x0FB2;
const uint16_t _LR4_SHADOW_RESULT__STREAM_COUNT                                       = 0x0FB3;
const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0                     = 0x0FB4;
const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_HI                  = 0x0FB4;
const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_LO                  = 0x0FB5;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0                    = 0x0FB6;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_HI                 = 0x0FB6;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_LO                 = 0x0FB7;
const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0                        = 0x0FB8;
const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_HI                     = 0x0FB8;
const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_LO                     = 0x0FB9;
const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD0                                          = 0x0FBA;
const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD0_HI                                       = 0x0FBA;
const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD0_LO                                       = 0x0FBB;
const uint16_t _LR4_SHADOW_RESULT__PHASE_SD0                                          = 0x0FBC;
const uint16_t _LR4_SHADOW_RESULT__PHASE_SD0_HI                                       = 0x0FBC;
const uint16_t _LR4_SHADOW_RESULT__PHASE_SD0_LO                                       = 0x0FBD;
const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0             = 0x0FBE;
const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_HI          = 0x0FBE;
const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_LO                  = 0x0FBF;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0        = 0x0FC0;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_HI     = 0x0FC0;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_LO     = 0x0FC1;
const uint16_t _LR4_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0                        = 0x0FC2;
const uint16_t _LR4_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_HI                     = 0x0FC2;
const uint16_t _LR4_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_LO                     = 0x0FC3;
const uint16_t _LR4_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0                        = 0x0FC4;
const uint16_t _LR4_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_HI                     = 0x0FC4;
const uint16_t _LR4_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_LO                     = 0x0FC5;
const uint16_t _LR4_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0                             = 0x0FC6;
const uint16_t _LR4_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_HI                          = 0x0FC6;
const uint16_t _LR4_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_LO                          = 0x0FC7;
const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1                             = 0x0FC8;
const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_HI                          = 0x0FC8;
const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_LO                          = 0x0FC9;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1                            = 0x0FCA;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_HI                         = 0x0FCA;
const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_LO                         = 0x0FCB;
const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1                                = 0x0FCC;
const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_HI                             = 0x0FCC;
const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_LO                             = 0x0FCD;
const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD1                                                  = 0x0FCE;
const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD1_HI                                               = 0x0FCE;
const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD1_LO                                               = 0x0FCF;
const uint16_t _LR4_SHADOW_RESULT__PHASE_SD1                                                  = 0x0FD0;
const uint16_t _LR4_SHADOW_RESULT__PHASE_SD1_HI                                               = 0x0FD0;
const uint16_t _LR4_SHADOW_RESULT__PHASE_SD1_LO                                               = 0x0FD1;
const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1                     = 0x0FD2;
const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_HI                  = 0x0FD2;
const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_LO                  = 0x0FD3;
const uint16_t _LR4_SHADOW_RESULT__SPARE_0_SD1                                                = 0x0FD4;
const uint16_t _LR4_SHADOW_RESULT__SPARE_0_SD1_HI                                             = 0x0FD4;
const uint16_t _LR4_SHADOW_RESULT__SPARE_0_SD1_LO                                             = 0x0FD5;
const uint16_t _LR4_SHADOW_RESULT__SPARE_1_SD1                                                = 0x0FD6;
const uint16_t _LR4_SHADOW_RESULT__SPARE_1_SD1_HI                                             = 0x0FD6;
const uint16_t _LR4_SHADOW_RESULT__SPARE_1_SD1_LO                                             = 0x0FD7;
const uint16_t _LR4_SHADOW_RESULT__SPARE_2_SD1                                                = 0x0FD8;
const uint16_t _LR4_SHADOW_RESULT__SPARE_2_SD1_HI                                             = 0x0FD8;
const uint16_t _LR4_SHADOW_RESULT__SPARE_2_SD1_LO                                             = 0x0FD9;
const uint16_t _LR4_SHADOW_RESULT__SPARE_3_SD1                                                = 0x0FDA;
const uint16_t _LR4_SHADOW_RESULT__THRESH_INFO                                                = 0x0FDB;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0                             = 0x0FDC;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_3                           = 0x0FDC;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_2                           = 0x0FDD;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_1                           = 0x0FDE;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_0                           = 0x0FDF;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0                              = 0x0FE0;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_3                            = 0x0FE0;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_2                            = 0x0FE1;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_1                            = 0x0FE2;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_0                            = 0x0FE3;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0                               = 0x0FE4;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_3                             = 0x0FE4;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_2                             = 0x0FE5;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_1                             = 0x0FE6;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_0                             = 0x0FE7;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0                             = 0x0FE8;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_3                           = 0x0FE8;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_2                           = 0x0FE9;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_1                           = 0x0FEA;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_0                           = 0x0FEB;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1                             = 0x0FEC;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_3                           = 0x0FEC;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_2                           = 0x0FED;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_1                           = 0x0FEE;
const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_0                           = 0x0FEF;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1                              = 0x0FF0;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_3                            = 0x0FF0;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_2                            = 0x0FF1;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_1                            = 0x0FF2;
const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_0                            = 0x0FF3;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1                               = 0x0FF4;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_3                             = 0x0FF4;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_2                             = 0x0FF5;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_1                             = 0x0FF6;
const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_0                             = 0x0FF7;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1                             = 0x0FF8;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_3                           = 0x0FF8;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_2                           = 0x0FF9;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_1                           = 0x0FFA;
const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_0                           = 0x0FFB;
const uint16_t _LR4_SHADOW_RESULT_CORE__SPARE_0                                               = 0x0FFC;
const uint16_t _LR4_SHADOW_PHASECAL_RESULT__REFERENCE_PHASE_HI                                = 0x0FFE;
const uint16_t _LR4_SHADOW_PHASECAL_RESULT__REFERENCE_PHASE_LO                                = 0x0FFF;

const uint8_t _LR4_DISTANCE_MODE_SHORT  = 0x00;
const uint8_t _LR4_DISTANCE_MODE_MEDIUM = 0x01;
const uint8_t _LR4_DISTANCE_MODE_LONG   = 0x02;

const uint8_t _LR4_RESP_INSUFFICIENT_BUDGET          = 0x02;
const uint8_t _LR4_RESP_TOO_HIGH_BUDGET              = 0x01;
const uint8_t _LR4_RESP_BUDGET_IS_SUCCESSFULLY_SET   = 0x00;
const uint8_t _LR4_RESP_DEVICE_ERROR_ID_IS_NOT_VALID = 0x01;
const uint8_t _LR4_RESP_FIRMWARE_TIMEOUT_ERROR       = 0x02;
const uint8_t _LR4_RESP_INIT_IS_SUCCESSFUL           = 0x00;
const uint8_t _LR4_RESP_WRONG_MODE                   = 0x01;
const uint8_t _LR4_RESP_MODE_SUCCESSFULLY_SET        = 0x00;
const uint8_t _LR4_MRESP_SIGNAL_FAIL                 = 0x04;
const uint8_t _LR4_MRESP_PHASE_OUT_OF_VALID_LIMITS   = 0x05;
const uint8_t _LR4_MRESP_SIGMA_FAIL                  = 0x06;
const uint8_t _LR4_MRESP_WRAP_TARGET_FAIL            = 0x07;
const uint8_t _LR4_MRESP_MINIMUM_DETECTION_THRESHOLD = 0x08;


const uint8_t _LR4_DEFAULT_SLAVE_ADDRESS = 0x29;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __LIGHTRANGER4_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static uint16_t fast_osc_frequency;
static uint16_t osc_calibrate_val;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */

static uint32_t _calcMacroPeriod(uint8_t vcsel_period);
static uint32_t _timeoutMicrosecondsToMclks(uint32_t timeout_us, uint32_t macro_period_us);
static uint16_t _encodeTimeout(uint32_t timeout_mclks);

/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */

static uint32_t _calcMacroPeriod(uint8_t vcsel_period)
{
    uint32_t pll_period_us;
    uint8_t vcsel_period_pclks;
    uint32_t macro_period_us;
   
    pll_period_us = ((uint32_t)0x01 << 30) / fast_osc_frequency;
    vcsel_period_pclks = (vcsel_period + 1) << 1;
    macro_period_us = (uint32_t)2304 * pll_period_us;
    macro_period_us >>= 6;
    macro_period_us *= vcsel_period_pclks;
    macro_period_us >>= 6;

    return macro_period_us;
}

static uint32_t _timeoutMicrosecondsToMclks(uint32_t timeout_us, uint32_t macro_period_us)
{
    return (((uint32_t)timeout_us << 12) + (macro_period_us >> 1)) / macro_period_us;
}

static uint16_t _encodeTimeout(uint32_t timeout_mclks)
{
    uint32_t ls_byte = 0;
    uint16_t ms_byte = 0;

    if (timeout_mclks > 0)
    {
        ls_byte = timeout_mclks - 1;

        while ((ls_byte & 0xFFFFFF00) > 0)
        {
            ls_byte >>= 1;
            ms_byte++;
        }

        return (ms_byte << 8) | (ls_byte & 0xFF);
    }
    return 0;
}


/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __LIGHTRANGER4_DRV_SPI__

void lightranger4_spiDriverInit(T_LIGHTRANGER4_P gpioObj, T_LIGHTRANGER4_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __LIGHTRANGER4_DRV_I2C__

void lightranger4_i2cDriverInit(T_LIGHTRANGER4_P gpioObj, T_LIGHTRANGER4_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
    hal_gpio_rstSet(1);
}

#endif
#ifdef   __LIGHTRANGER4_DRV_UART__

void lightranger4_uartDriverInit(T_LIGHTRANGER4_P gpioObj, T_LIGHTRANGER4_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void lightranger4_writeByte(uint16_t addr, uint8_t _data)
{
    uint8_t writeReg[ 3 ];
        
    writeReg[ 0 ] = addr >> 8;
    writeReg[ 1 ] = addr & 0x00FF;
    writeReg[ 2 ] = _data;
        
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 3, END_MODE_STOP);
}

void lightranger4_writeData(uint16_t addr, uint16_t _data)
{
    uint8_t writeReg[ 4 ];

    writeReg[ 0 ] = addr >> 8;
    writeReg[ 1 ] = addr & 0x00FF;
    writeReg[ 2 ] = _data >> 8;
    writeReg[ 3 ] = _data & 0x00FF;

    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 4, END_MODE_STOP);
}

void lightranger4_writeLongData(uint16_t addr, uint32_t _data)
{
    uint8_t writeReg[ 6 ];

    writeReg[ 0 ] = addr >> 8;
    writeReg[ 1 ] = addr & 0x00FF;
    writeReg[ 2 ] = _data >> 24;
    writeReg[ 3 ] = _data >> 16;
    writeReg[ 4 ] = _data >> 8;
    writeReg[ 5 ] = _data & 0x000000FF;

    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 6, END_MODE_STOP);
}

uint8_t lightranger4_readByte(uint16_t addr)
{
    uint8_t writeReg[ 2 ];
    uint8_t readReg[ 1 ];
    
    writeReg[ 0 ] = addr >> 8;
    writeReg[ 1 ] = addr & 0x00FF;

    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 2, END_MODE_RESTART);
    hal_i2cRead(_slaveAddress, readReg, 1, END_MODE_STOP);
    return readReg[ 0 ];
}

uint16_t lightranger4_readData(uint16_t addr)
{
    uint8_t writeReg[ 2 ];
    uint8_t readReg[ 2 ];
    uint16_t readData;
    
    writeReg[ 0 ] = addr >> 8;
    writeReg[ 1 ] = addr & 0x00FF;

    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 2, END_MODE_RESTART);
    hal_i2cRead(_slaveAddress, readReg, 2, END_MODE_STOP);

    readData = readReg[ 0 ];
    readData <<= 8;
    readData |= readReg[ 1 ];
    
    return readData;
}

/***************************** Functions *************************************/

uint8_t lightranger4_deviceConfiguration()
{
    uint16_t modelID;
    uint8_t cnt = 0;
    uint16_t result;
    uint8_t regVal;
    uint16_t _data;
    uint8_t status;
    
    Delay_100ms();
    Delay_100ms();
    
    modelID = lightranger4_readByte(_LR4_IDENTIFICATION__MODEL_ID);
  
    if (modelID != 0xEA)
    {
        return _LR4_RESP_DEVICE_ERROR_ID_IS_NOT_VALID;
    }

    Delay_100ms();
    
    lightranger4_softReset();
    
    Delay_100ms();
    Delay_100ms();
    Delay_100ms();

    status = lightranger4_readByte(_LR4_FIRMWARE__SYSTEM_STATUS);
    while ((status & 0x01) == 0)
    {
        status = lightranger4_readByte(_LR4_FIRMWARE__SYSTEM_STATUS);
        Delay_10ms();
        Delay_10ms();
        if(cnt++ == 100)
        {
            return _LR4_RESP_FIRMWARE_TIMEOUT_ERROR;
        }
    }

    result = lightranger4_readData(_LR4_PAD_I2C_HV__EXTSUP_CONFIG);
    result = (result & 0xFE) | 0x01;
    lightranger4_writeData(_LR4_PAD_I2C_HV__EXTSUP_CONFIG, result);
    Delay_10ms();
    fast_osc_frequency = lightranger4_readData(_LR4_REG_FAST_OSC_FREQUENCY);
    osc_calibrate_val = lightranger4_readData(_LR4_RESULT__OSC_CALIBRATE_VAL);
  
    lightranger4_writeByte(_LR4_GPIO__TIO_HV_STATUS, 0x02);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SIGMA_ESTIMATOR__EFFECTIVE_PULSE_WIDTH_NS, 8);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SIGMA_ESTIMATOR__EFFECTIVE_AMBIENT_WIDTH_NS, 16);
    Delay_10ms();
    lightranger4_writeByte(_LR4_ALGO__CROSSTALK_COMPENSATION_VALID_HEIGHT_MM, 0x01);
    Delay_10ms();
    lightranger4_writeByte(_LR4_ALGO__RANGE_IGNORE_VALID_HEIGHT_MM, 0xFF);
    Delay_10ms();
    lightranger4_writeByte(_LR4_ALGO__RANGE_MIN_CLIP, 0);
    Delay_10ms();
    lightranger4_writeByte(_LR4_ALGO__CONSISTENCY_CHECK__TOLERANCE, 2);
    Delay_10ms();
    // general config
    lightranger4_writeData(_LR4_SYSTEM__THRESH_RATE_HIGH, 0x0000);
    Delay_10ms();
    lightranger4_writeData(_LR4_SYSTEM__THRESH_RATE_LOW, 0x0000);
    Delay_10ms();
    lightranger4_writeByte(_LR4_DSS_CONFIG__APERTURE_ATTENUATION, 0x38);
    // timing config
    Delay_10ms();
    lightranger4_writeData(_LR4_RANGE_CONFIG__SIGMA_THRESH, 360);
    Delay_10ms();
    lightranger4_writeData(_LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS, 192);
    // dynamic config
    Delay_10ms();
    lightranger4_writeByte(_LR4_SYSTEM__GROUPED_PARAMETER_HOLD_0, 0x01);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SYSTEM__GROUPED_PARAMETER_HOLD_1, 0x01);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SD_CONFIG__QUANTIFIER, 2);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SYSTEM__GROUPED_PARAMETER_HOLD, 0x00);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SYSTEM__SEED_CONFIG, 1);
    Delay_10ms();
    lightranger4_writeByte(_LR4_SYSTEM__SEQUENCE_CONFIG, 0x8B);
    Delay_10ms();
    lightranger4_writeData(_LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT, 200 << 8);
    Delay_10ms();
    lightranger4_writeByte(_LR4_DSS_CONFIG__ROI_MODE_CONTROL, 2);
    Delay_10ms();

    _data = lightranger4_readData(_LR4_REG_OUTER_OFFSET_MM);
    Delay_10ms();
    lightranger4_writeData(_LR4_REG_PART_TO_PART_RANGE_OFFSET_MM, _data * 4);
    Delay_10ms();
    
    return _LR4_RESP_INIT_IS_SUCCESSFUL;
}

void lightranger4_startMeasurement(uint32_t period_ms)
{
    lightranger4_writeLongData(_LR4_SYSTEM__INTERMEASUREMENT_PERIOD, period_ms * osc_calibrate_val);

    lightranger4_writeByte(_LR4_SYSTEM__INTERRUPT_CLEAR, 0x01);
    lightranger4_writeByte(_LR4_SYSTEM__MODE_START, 0x40);
}

uint8_t lightranger4_newDataReady()
{
    if (lightranger4_readByte(_LR4_GPIO__TIO_HV_STATUS) != 0x03)
    {
        return 0;
    }
    return 1;
}

void lightranger4_softReset()
{
    lightranger4_writeByte(_LR4_REG_SOFT_RESET, 0x00);
    Delay_1ms();
    lightranger4_writeByte(_LR4_REG_SOFT_RESET, 0x01);
}

uint16_t lightranger4_getDistance()
{
    uint16_t distance;
    
    distance = lightranger4_readData(_LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0);
    return distance;
}

uint16_t lightranger4_getSignalRate()
{
    uint16_t reading;
    
    reading = lightranger4_readData(_LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0);
    return reading;
}

uint8_t lightranger4_setDistanceMode(uint8_t mode)
{
    switch (mode)
    {
        case _LR4_DISTANCE_MODE_SHORT:
        {
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_A, 0x07);
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_B, 0x05);
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VALID_PHASE_HIGH, 0x38);
            lightranger4_writeByte(_LR4_SD_CONFIG__WOI_SD0, 0x07);
            lightranger4_writeByte(_LR4_SD_CONFIG__WOI_SD1, 0x05);
            lightranger4_writeByte(_LR4_SD_CONFIG__INITIAL_PHASE_SD0, 6);
            lightranger4_writeByte(_LR4_SD_CONFIG__INITIAL_PHASE_SD1, 6);
            
            break;
        }
        case _LR4_DISTANCE_MODE_MEDIUM:
        {
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_A, 0x0B);
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_B, 0x09);
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VALID_PHASE_HIGH, 0x78);
            lightranger4_writeByte(_LR4_SD_CONFIG__WOI_SD0, 0x0B);
            lightranger4_writeByte(_LR4_SD_CONFIG__WOI_SD1, 0x09);
            lightranger4_writeByte(_LR4_SD_CONFIG__INITIAL_PHASE_SD0, 10);
            lightranger4_writeByte(_LR4_SD_CONFIG__INITIAL_PHASE_SD1, 10);
            break;
        }
        case _LR4_DISTANCE_MODE_LONG:
        {
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_A, 0x0F);
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_B, 0x0D);
            lightranger4_writeByte(_LR4_RANGE_CONFIG__VALID_PHASE_HIGH, 0xB8);
            lightranger4_writeByte(_LR4_SD_CONFIG__WOI_SD0, 0x0F);
            lightranger4_writeByte(_LR4_SD_CONFIG__WOI_SD1, 0x0D);
            lightranger4_writeByte(_LR4_SD_CONFIG__INITIAL_PHASE_SD0, 14);
            lightranger4_writeByte(_LR4_SD_CONFIG__INITIAL_PHASE_SD1, 14);
            break;
        }
        default:
        {
            return _LR4_RESP_WRONG_MODE;
        }
    }
    return _LR4_RESP_MODE_SUCCESSFULLY_SET;
}

uint8_t lightranger4_getRangeStatus()
{
    uint8_t measurementStatus;
    measurementStatus = lightranger4_readByte(_LR4_RESULT__RANGE_STATUS) & 0x1F;

    return measurementStatus;
}

void lightranger4_setCenter(uint8_t centerX, uint8_t centerY)
{
    uint8_t centerValue;

    if (centerY > 7)
    {
        centerValue = 128 + (centerX << 3) + (15 - centerY);
    }
    else 
    {
        centerValue = ((15 - centerX) << 3) + centerY;
    }
    lightranger4_writeByte(_LR4_ROI_CONFIG__USER_ROI_CENTRE_SPAD , centerValue);
}

void lightranger4_setZoneSize(uint8_t width, uint8_t height)
{
    uint8_t dimensions; 
    
    dimensions = (height << 4)  + width;
    lightranger4_writeByte(_LR4_ROI_CONFIG__USER_ROI_REQUESTED_GLOBAL_XY_SIZE, dimensions);
}

void lightranger4_setUserRoi(lightranger4_userRoi *roi)
{
    uint8_t centerX;
    uint8_t centerY;
    uint8_t width;
    uint8_t height;
    
    centerX = (roi->topLeftX + roi->bottomRightX + 1) / 2;
    centerY = (roi->topLeftY + roi->bottomRightY + 1) / 2;
    width   = roi->bottomRightX - roi->topLeftX;
    height  = roi->topLeftY - roi->bottomRightY;

    if (width < 3 || height < 3)
    {
        lightranger4_setCenter(0x08, 0x08);
        lightranger4_setZoneSize(0x0F, 0x0F);
    }
    else
    {
        lightranger4_setCenter(centerX, centerY);
        lightranger4_setZoneSize(width, height);
    }
}

uint8_t  lightranger4_setMeasurementTimingBudget(uint32_t budget_us)
{
    uint32_t range_config_timeout_us;
    uint32_t macro_period_us;
    uint32_t phasecal_timeout_mclks;
    uint16_t _data16;
    uint8_t _data8;
    
    if (budget_us <= 4528)
    { 
        return _LR4_RESP_INSUFFICIENT_BUDGET;
    }
    budget_us -= 4528;
    range_config_timeout_us = budget_us;
    
    if (range_config_timeout_us > 1100000) 
    {  
        return _LR4_RESP_TOO_HIGH_BUDGET;
    }
    range_config_timeout_us /= 2;
    
    _data8 = lightranger4_readByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_A);
    macro_period_us = _calcMacroPeriod( _data8 );

    phasecal_timeout_mclks = _timeoutMicrosecondsToMclks(1000, macro_period_us);
    
    if (phasecal_timeout_mclks > 0xFF) 
    { 
        phasecal_timeout_mclks = 0xFF; 
    }
    lightranger4_writeByte(_LR4_PHASECAL_CONFIG__TIMEOUT_MACROP, phasecal_timeout_mclks);

    _data16 = _timeoutMicrosecondsToMclks(1, macro_period_us);
    _data16 = _encodeTimeout( _data16 );
    lightranger4_writeData(_LR4_MM_CONFIG__TIMEOUT_MACROP_A_HI, _data16);

    _data16 = _timeoutMicrosecondsToMclks(range_config_timeout_us, macro_period_us);
    _data16 = _encodeTimeout( _data16 );
    lightranger4_writeData(_LR4_RANGE_CONFIG__TIMEOUT_MACROP_A_HI, _data16);

    _data8 = lightranger4_readByte(_LR4_RANGE_CONFIG__VCSEL_PERIOD_B);
    macro_period_us = _calcMacroPeriod( _data8 );

    _data16 = _timeoutMicrosecondsToMclks(1, macro_period_us);
    _data16 = _encodeTimeout( _data16 );
    lightranger4_writeData(_LR4_MM_CONFIG__TIMEOUT_MACROP_B_HI, _data16 );

    _data16 =  _timeoutMicrosecondsToMclks(range_config_timeout_us, macro_period_us);
    _data16 = _encodeTimeout( _data16 );
    lightranger4_writeData(_LR4_RANGE_CONFIG__TIMEOUT_MACROP_B_HI, _data16);

    return _LR4_RESP_BUDGET_IS_SUCCESSFULLY_SET;
}

uint8_t lightranger4_getIntrruptState()
{
    return hal_gpio_intGet();
}

void lightranger4_setXSHUTpin(uint8_t state)
{
    hal_gpio_rstSet(state);
}

void lightranger4_powerON()
{
    lightranger4_setXSHUTpin(0);
    Delay_100ms();
    lightranger4_setXSHUTpin(1);
    Delay_1sec();
}


/* -------------------------------------------------------------------------- */
/*
  __lightranger4_driver.c

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */
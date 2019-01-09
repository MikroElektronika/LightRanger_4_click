/*
    __lightranger4_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __lightranger4_driver.h
@brief    LightRanger4 Driver
@mainpage LightRanger4 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   LIGHTRANGER4
@brief      LightRanger4 Click Driver
@{

| Global Library Prefix | **LIGHTRANGER4** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **sep 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _LIGHTRANGER4_H_
#define _LIGHTRANGER4_H_

/** 
 * @macro T_LIGHTRANGER4_P
 * @brief Driver Abstract type 
 */
#define T_LIGHTRANGER4_P    const uint8_t*

/** @defgroup LIGHTRANGER4_COMPILE Compilation Config */              /** @{ */

//  #define   __LIGHTRANGER4_DRV_SPI__                            /**<     @macro __LIGHTRANGER4_DRV_SPI__  @brief SPI driver selector */
   #define   __LIGHTRANGER4_DRV_I2C__                            /**<     @macro __LIGHTRANGER4_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __LIGHTRANGER4_DRV_UART__                           /**<     @macro __LIGHTRANGER4_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup LIGHTRANGER4_VAR Variables */                           /** @{ */

extern const uint16_t _LR4_REG_SOFT_RESET                                      ;
extern const uint16_t _LR4_REG_SLAVE_DEVICE_ADDRESS                            ;
extern const uint16_t _LR4_REG_CFG_VHV_REF_SEL_VDDPIX                          ;
extern const uint16_t _LR4_REG_CFG_VHV_REF_SEL_VQUENCH                         ;
extern const uint16_t _LR4_REG_CFG_AVDD1V2_SEL                                 ;
extern const uint16_t _LR4_REG_FAST_OSC_TRIM                                   ;
extern const uint16_t _LR4_REG_FAST_OSC_FREQUENCY                              ;
extern const uint16_t _LR4_REG_FAST_OSC_FREQUENCY_MSB                          ;
extern const uint16_t _LR4_REG_FAST_OSC_FREQUENCY_LSB                          ;
extern const uint16_t _LR4_REG_CFG_TIMEOUT_MACROP_LOOP_BOUND                   ;
extern const uint16_t _LR4_REG_CFG_COUNT_THRESH                                ;
extern const uint16_t _LR4_REG_CFG_OFFSET                                      ;
extern const uint16_t _LR4_REG_CFG_INIT                                        ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_0                   ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_1                   ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_2                   ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_3                   ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_4                   ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_SPAD_ENABLES_REF_5                   ;
extern const uint16_t _LR4_REG_GLOBAL_CFG_REF_EN_START_SELECT                  ;
extern const uint16_t _LR4_REG_NUM_REQUESTED_REF_SPADS                         ;
extern const uint16_t _LR4_REG_REF_LOCATION                                    ;
extern const uint16_t _LR4_REG_COMP_PLANE_OFFSET_KCPS                          ;
extern const uint16_t _LR4_REG_COMP_PLANE_OFFSET_KCPS_LSB                      ;
extern const uint16_t _LR4_REG_COMP_PLANE_OFFSET_KCPS_MSB                      ;
extern const uint16_t _LR4_REG_COMP_X_PLANE_GRADIENT_KCPS                      ;
extern const uint16_t _LR4_REG_COMP_X_PLANE_GRADIENT_KCPS_MSB                  ;
extern const uint16_t _LR4_REG_COMP_X_PLANE_GRADIENT_KCPS_LSB                  ;
extern const uint16_t _LR4_REG_COMP_Y_PLANE_GRADIENT_KCPS                      ;
extern const uint16_t _LR4_REG_COMP_Y_PLANE_GRADIENT_KCPS_MSB                  ;
extern const uint16_t _LR4_REG_COMP_Y_PLANE_GRADIENT_KCPS_LSB                  ;
extern const uint16_t _LR4_REG_TOTAL_RATE_TARGET_MCPS                          ;
extern const uint16_t _LR4_REG_TOTAL_RATE_TARGET_MCPS_MSB                      ;
extern const uint16_t _LR4_REG_TOTAL_RATE_TARGET_MCPS_LSB                      ;
extern const uint16_t _LR4_REG_PART_TO_PART_RANGE_OFFSET_MM                    ;
extern const uint16_t _LR4_REG_PART_TO_PART_RANGE_OFFSET_MM_MSB                ;
extern const uint16_t _LR4_REG_PART_TO_PART_RANGE_OFFSET_MM_LSB                ;
extern const uint16_t _LR4_REG_INNER_OFFSET_MM                                 ;
extern const uint16_t _LR4_REG_INNER_OFFSET_MM_MSB                             ;
extern const uint16_t _LR4_REG_INNER_OFFSET_MM_LSB                             ;
extern const uint16_t _LR4_REG_OUTER_OFFSET_MM                                 ;
extern const uint16_t _LR4_REG_OUTER_OFFSET_MM_MSB                             ;
extern const uint16_t _LR4_REG_OUTER_OFFSET_MM_LSB                             ;
extern const uint16_t _LR4_REG_TARGET_TOTAL_RATE_MCPS                          ;
extern const uint16_t _LR4_REG_TARGET_TOTAL_RATE_MCPS_MSB                      ;
extern const uint16_t _LR4_REG_TARGET_TOTAL_RATE_MCPS_LSB                      ;
extern const uint16_t _LR4_REG_DEBUG_CTRL                                      ;
extern const uint16_t _LR4_REG_TEST_MODE_CTRL                                  ;
extern const uint16_t _LR4_REG_CLK_GATING_CTRL                                 ;
extern const uint16_t _LR4_NVM_BIST__CTRL                                      ;
extern const uint16_t _LR4_NVM_BIST__NUM_NVM_WORDS                             ;
extern const uint16_t _LR4_NVM_BIST__START_ADDRESS                             ;
extern const uint16_t _LR4_HOST_IF__STATUS                                     ;
extern const uint16_t _LR4_PAD_I2C_HV__CONFIG                                  ;
extern const uint16_t _LR4_PAD_I2C_HV__EXTSUP_CONFIG                           ;
extern const uint16_t _LR4_GPIO_HV_PAD__CTRL                                   ;
extern const uint16_t _LR4_GPIO_HV_MUX__CTRL                                   ;
extern const uint16_t _LR4_GPIO__TIO_HV_STATUS                                 ;
extern const uint16_t _LR4_GPIO__FIO_HV_STATUS                                 ;
extern const uint16_t _LR4_ANA_CONFIG__SPAD_SEL_PSWIDTH                        ;
extern const uint16_t _LR4_ANA_CONFIG__VCSEL_PULSE_WIDTH_OFFSET                ;
extern const uint16_t _LR4_ANA_CONFIG__FAST_OSC__CONFIG_CTRL                   ;
extern const uint16_t _LR4_SIGMA_ESTIMATOR__EFFECTIVE_PULSE_WIDTH_NS           ;
extern const uint16_t _LR4_SIGMA_ESTIMATOR__EFFECTIVE_AMBIENT_WIDTH_NS         ;
extern const uint16_t _LR4_SIGMA_ESTIMATOR__SIGMA_REF_MM                       ;
extern const uint16_t _LR4_ALGO__CROSSTALK_COMPENSATION_VALID_HEIGHT_MM        ;
extern const uint16_t _LR4_SPARE_HOST_CONFIG__STATIC_CONFIG_SPARE_0            ;
extern const uint16_t _LR4_SPARE_HOST_CONFIG__STATIC_CONFIG_SPARE_1            ;
extern const uint16_t _LR4_ALGO__RANGE_IGNORE_THRESHOLD_MCPS                   ;
extern const uint16_t _LR4_ALGO__RANGE_IGNORE_THRESHOLD_MCPS_HI                ;
extern const uint16_t _LR4_ALGO__RANGE_IGNORE_THRESHOLD_MCPS_LO                ;
extern const uint16_t _LR4_ALGO__RANGE_IGNORE_VALID_HEIGHT_MM                  ;
extern const uint16_t _LR4_ALGO__RANGE_MIN_CLIP                                ;
extern const uint16_t _LR4_ALGO__CONSISTENCY_CHECK__TOLERANCE                  ;
extern const uint16_t _LR4_SPARE_HOST_CONFIG__STATIC_CONFIG_SPARE_2            ;
extern const uint16_t _LR4_SD_CONFIG__RESET_STAGES_MSB                         ;
extern const uint16_t _LR4_SD_CONFIG__RESET_STAGES_LSB                         ;
extern const uint16_t _LR4_GPH_CONFIG__STREAM_COUNT_UPDATE_VALUE               ;
extern const uint16_t _LR4_GLOBAL_CONFIG__STREAM_DIVIDER                       ;
extern const uint16_t _LR4_SYSTEM__INTERRUPT_CONFIG_GPIO                       ;
extern const uint16_t _LR4_CAL_CONFIG__VCSEL_START                             ;
extern const uint16_t _LR4_CAL_CONFIG__REPEAT_RATE                             ;
extern const uint16_t _LR4_CAL_CONFIG__REPEAT_RATE_HI                          ;
extern const uint16_t _LR4_CAL_CONFIG__REPEAT_RATE_LO                          ;
extern const uint16_t _LR4_GLOBAL_CONFIG__VCSEL_WIDTH                          ;
extern const uint16_t _LR4_PHASECAL_CONFIG__TIMEOUT_MACROP                     ;
extern const uint16_t _LR4_PHASECAL_CONFIG__TARGET                             ;
extern const uint16_t _LR4_PHASECAL_CONFIG__OVERRIDE                           ;
extern const uint16_t _LR4_DSS_CONFIG__ROI_MODE_CONTROL                        ;
extern const uint16_t _LR4_SYSTEM__THRESH_RATE_HIGH                            ;
extern const uint16_t _LR4_SYSTEM__THRESH_RATE_HIGH_HI                         ;
extern const uint16_t _LR4_SYSTEM__THRESH_RATE_HIGH_LO                         ;
extern const uint16_t _LR4_SYSTEM__THRESH_RATE_LOW                             ;
extern const uint16_t _LR4_SYSTEM__THRESH_RATE_LOW_HI                          ;
extern const uint16_t _LR4_SYSTEM__THRESH_RATE_LOW_LO                          ;
extern const uint16_t _LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT           ;
extern const uint16_t _LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_HI        ;
extern const uint16_t _LR4_DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_LO        ;
extern const uint16_t _LR4_DSS_CONFIG__MANUAL_BLOCK_SELECT                     ;
extern const uint16_t _LR4_DSS_CONFIG__APERTURE_ATTENUATION                    ;
extern const uint16_t _LR4_DSS_CONFIG__MAX_SPADS_LIMIT                         ;
extern const uint16_t _LR4_DSS_CONFIG__MIN_SPADS_LIMIT                         ;
extern const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_A_HI                      ;
extern const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_A_LO                      ;
extern const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_B_HI                      ;
extern const uint16_t _LR4_MM_CONFIG__TIMEOUT_MACROP_B_LO                      ;
extern const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_A_HI                   ;
extern const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_A_LO                   ;
extern const uint16_t _LR4_RANGE_CONFIG__VCSEL_PERIOD_A                        ;
extern const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_B_HI                   ;
extern const uint16_t _LR4_RANGE_CONFIG__TIMEOUT_MACROP_B_LO                   ;
extern const uint16_t _LR4_RANGE_CONFIG__VCSEL_PERIOD_B                        ;
extern const uint16_t _LR4_RANGE_CONFIG__SIGMA_THRESH                          ;
extern const uint16_t _LR4_RANGE_CONFIG__SIGMA_THRESH_HI                       ;
extern const uint16_t _LR4_RANGE_CONFIG__SIGMA_THRESH_LO                       ;
extern const uint16_t _LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS         ;
extern const uint16_t _LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_HI      ;
extern const uint16_t _LR4_RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_LO      ;
extern const uint16_t _LR4_RANGE_CONFIG__VALID_PHASE_LOW                       ;
extern const uint16_t _LR4_RANGE_CONFIG__VALID_PHASE_HIGH                      ;
extern const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD                     ;
extern const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_3                   ;
extern const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_2                   ;
extern const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_1                   ;
extern const uint16_t _LR4_SYSTEM__INTERMEASUREMENT_PERIOD_0                   ;
extern const uint16_t _LR4_SYSTEM__FRACTIONAL_ENABLE                           ;
extern const uint16_t _LR4_SYSTEM__GROUPED_PARAMETER_HOLD_0                    ;
extern const uint16_t _LR4_SYSTEM__THRESH_HIGH                                 ;
extern const uint16_t _LR4_SYSTEM__THRESH_HIGH_HI                              ;
extern const uint16_t _LR4_SYSTEM__THRESH_HIGH_LO                              ;
extern const uint16_t _LR4_SYSTEM__THRESH_LOW                                  ;
extern const uint16_t _LR4_SYSTEM__THRESH_LOW_HI                               ;
extern const uint16_t _LR4_SYSTEM__THRESH_LOW_LO                               ;
extern const uint16_t _LR4_SYSTEM__ENABLE_XTALK_PER_QUADRANT                   ;
extern const uint16_t _LR4_SYSTEM__SEED_CONFIG                                 ;
extern const uint16_t _LR4_SD_CONFIG__WOI_SD0                                  ;
extern const uint16_t _LR4_SD_CONFIG__WOI_SD1                                  ;
extern const uint16_t _LR4_SD_CONFIG__INITIAL_PHASE_SD0                        ;
extern const uint16_t _LR4_SD_CONFIG__INITIAL_PHASE_SD1                        ;
extern const uint16_t _LR4_SYSTEM__GROUPED_PARAMETER_HOLD_1                    ;
extern const uint16_t _LR4_SD_CONFIG__FIRST_ORDER_SELECT                       ;
extern const uint16_t _LR4_SD_CONFIG__QUANTIFIER                               ;
extern const uint16_t _LR4_ROI_CONFIG__USER_ROI_CENTRE_SPAD                    ;
extern const uint16_t _LR4_ROI_CONFIG__USER_ROI_REQUESTED_GLOBAL_XY_SIZE       ;
extern const uint16_t _LR4_SYSTEM__SEQUENCE_CONFIG                             ;
extern const uint16_t _LR4_SYSTEM__GROUPED_PARAMETER_HOLD                      ;
extern const uint16_t _LR4_POWER_MANAGEMENT__GO1_POWER_FORCE                   ;
extern const uint16_t _LR4_SYSTEM__STREAM_COUNT_CTRL                           ;
extern const uint16_t _LR4_FIRMWARE__ENABLE                                    ;
extern const uint16_t _LR4_SYSTEM__INTERRUPT_CLEAR                             ;
extern const uint16_t _LR4_SYSTEM__MODE_START                                  ;
extern const uint16_t _LR4_RESULT__INTERRUPT_STATUS                            ;
extern const uint16_t _LR4_RESULT__RANGE_STATUS                                ;
extern const uint16_t _LR4_RESULT__REPORT_STATUS                               ;
extern const uint16_t _LR4_RESULT__STREAM_COUNT                                ;
extern const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0              ;
extern const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_HI           ;
extern const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_LO           ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0             ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_HI          ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_LO          ;
extern const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0                 ;
extern const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_HI              ;
extern const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_LO              ;
extern const uint16_t _LR4_RESULT__SIGMA_SD0                                   ;
extern const uint16_t _LR4_RESULT__SIGMA_SD0_HI                                ;
extern const uint16_t _LR4_RESULT__SIGMA_SD0_LO                                ;
extern const uint16_t _LR4_RESULT__PHASE_SD0                                   ;
extern const uint16_t _LR4_RESULT__PHASE_SD0_HI                                ;
extern const uint16_t _LR4_RESULT__PHASE_SD0_LO                                ;
extern const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0      ;
extern const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_HI                 ;
extern const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_LO                 ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0       ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_HI    ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_LO    ;
extern const uint16_t _LR4_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0     ;
extern const uint16_t _LR4_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_HI  ;
extern const uint16_t _LR4_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_LO  ;
extern const uint16_t _LR4_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0     ;
extern const uint16_t _LR4_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_HI  ;
extern const uint16_t _LR4_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_LO  ;
extern const uint16_t _LR4_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0          ;
extern const uint16_t _LR4_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_HI       ;
extern const uint16_t _LR4_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_LO       ;
extern const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1          ;
extern const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_HI       ;
extern const uint16_t _LR4_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_LO       ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1         ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_HI      ;
extern const uint16_t _LR4_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_LO      ;
extern const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1             ;
extern const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_HI          ;
extern const uint16_t _LR4_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_LO          ;
extern const uint16_t _LR4_RESULT__SIGMA_SD1      ;
extern const uint16_t _LR4_RESULT__SIGMA_SD1_HI   ;
extern const uint16_t _LR4_RESULT__SIGMA_SD1_LO   ;
extern const uint16_t _LR4_RESULT__PHASE_SD1      ;
extern const uint16_t _LR4_RESULT__PHASE_SD1_HI   ;
extern const uint16_t _LR4_RESULT__PHASE_SD1_LO   ;
extern const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1     ;
extern const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_HI  ;
extern const uint16_t _LR4_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_LO  ;
extern const uint16_t _LR4_RESULT__SPARE_0_SD1      ;
extern const uint16_t _LR4_RESULT__SPARE_0_SD1_HI   ;
extern const uint16_t _LR4_RESULT__SPARE_0_SD1_LO   ;
extern const uint16_t _LR4_RESULT__SPARE_1_SD1      ;
extern const uint16_t _LR4_RESULT__SPARE_1_SD1_HI   ;
extern const uint16_t _LR4_RESULT__SPARE_1_SD1_LO   ;
extern const uint16_t _LR4_RESULT__SPARE_2_SD1      ;
extern const uint16_t _LR4_RESULT__SPARE_2_SD1_HI   ;
extern const uint16_t _LR4_RESULT__SPARE_2_SD1_LO   ;
extern const uint16_t _LR4_RESULT__SPARE_3_SD1      ;
extern const uint16_t _LR4_RESULT__THRESH_INFO      ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0     ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_3   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_2   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_1   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_0   ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0      ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_3    ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_2    ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_1    ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_0    ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0       ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_3     ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_2     ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_1     ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_0     ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0     ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_3   ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_2   ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_1   ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_0   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1     ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_3   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_2   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_1   ;
extern const uint16_t _LR4_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_0   ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1      ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_3    ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_2    ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_1    ;
extern const uint16_t _LR4_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_0    ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1       ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_3     ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_2     ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_1     ;
extern const uint16_t _LR4_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_0     ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1     ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_3   ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_2   ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_1   ;
extern const uint16_t _LR4_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_0   ;
extern const uint16_t _LR4_RESULT_CORE__SPARE_0                       ;
extern const uint16_t _LR4_PHASECAL_RESULT__REFERENCE_PHASE           ;
extern const uint16_t _LR4_PHASECAL_RESULT__REFERENCE_PHASE_HI        ;
extern const uint16_t _LR4_PHASECAL_RESULT__REFERENCE_PHASE_LO        ;
extern const uint16_t _LR4_PHASECAL_RESULT__VCSEL_START               ;
extern const uint16_t _LR4_REF_SPAD_CHAR_RESULT__NUM_ACTUAL_REF_SPADS ;
extern const uint16_t _LR4_REF_SPAD_CHAR_RESULT__REF_LOCATION        ;
extern const uint16_t _LR4_VHV_RESULT__COLDBOOT_STATUS               ;
extern const uint16_t _LR4_VHV_RESULT__SEARCH_RESULT                 ;
extern const uint16_t _LR4_VHV_RESULT__LATEST_SETTING                ;
extern const uint16_t _LR4_RESULT__OSC_CALIBRATE_VAL                 ;
extern const uint16_t _LR4_RESULT__OSC_CALIBRATE_VAL_HI              ;
extern const uint16_t _LR4_RESULT__OSC_CALIBRATE_VAL_LO              ;
extern const uint16_t _LR4_ANA_CONFIG__POWERDOWN_GO1                 ;
extern const uint16_t _LR4_ANA_CONFIG__REF_BG_CTRL                   ;
extern const uint16_t _LR4_ANA_CONFIG__REGDVDD1V2_CTRL               ;
extern const uint16_t _LR4_ANA_CONFIG__OSC_SLOW_CTRL                 ;
extern const uint16_t _LR4_TEST_MODE__STATUS                         ;
extern const uint16_t _LR4_FIRMWARE__SYSTEM_STATUS                   ;
extern const uint16_t _LR4_FIRMWARE__MODE_STATUS                     ;
extern const uint16_t _LR4_FIRMWARE__SECONDARY_MODE_STATUS           ;
extern const uint16_t _LR4_FIRMWARE__CAL_REPEAT_RATE_COUNTER         ;
extern const uint16_t _LR4_FIRMWARE__CAL_REPEAT_RATE_COUNTER_HI      ;
extern const uint16_t _LR4_FIRMWARE__CAL_REPEAT_RATE_COUNTER_LO      ;
extern const uint16_t _LR4_FIRMWARE__HISTOGRAM_BIN                   ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_HIGH                  ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_HIGH_HI               ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_HIGH_LO               ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_LOW                   ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_LOW_HI                ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_LOW_LO                ;
extern const uint16_t _LR4_GPH__SYSTEM__ENABLE_XTALK_PER_QUADRANT    ;
extern const uint16_t _LR4_GPH__SPARE_0                              ;
extern const uint16_t _LR4_GPH__SD_CONFIG__WOI_SD0                   ;
extern const uint16_t _LR4_GPH__SD_CONFIG__WOI_SD1                   ;
extern const uint16_t _LR4_GPH__SD_CONFIG__INITIAL_PHASE_SD0         ;
extern const uint16_t _LR4_GPH__SD_CONFIG__INITIAL_PHASE_SD1         ;
extern const uint16_t _LR4_GPH__SD_CONFIG__FIRST_ORDER_SELECT        ;
extern const uint16_t _LR4_GPH__SD_CONFIG__QUANTIFIER                ;
extern const uint16_t _LR4_GPH__ROI_CONFIG__USER_ROI_CENTRE_SPAD     ;
extern const uint16_t _LR4_GPH__ROI_CONFIG__USER_ROI_REQUESTED_GLOBAL_XY_SIZE  ;
extern const uint16_t _LR4_GPH__SYSTEM__SEQUENCE_CONFIG            ;
extern const uint16_t _LR4_GPH__GPH_ID                             ;
extern const uint16_t _LR4_SYSTEM__INTERRUPT_SET                   ;
extern const uint16_t _LR4_INTERRUPT_MANAGER__ENABLES              ;
extern const uint16_t _LR4_INTERRUPT_MANAGER__CLEAR                ;
extern const uint16_t _LR4_INTERRUPT_MANAGER__STATUS               ;
extern const uint16_t _LR4_MCU_TO_HOST_BANK__WR_ACCESS_EN          ;
extern const uint16_t _LR4_POWER_MANAGEMENT__GO1_RESET_STATUS      ;
extern const uint16_t _LR4_PAD_STARTUP_MODE__VALUE_RO              ;
extern const uint16_t _LR4_PAD_STARTUP_MODE__VALUE_CTRL            ;
extern const uint16_t _LR4_PLL_PERIOD_US                           ;
extern const uint16_t _LR4_PLL_PERIOD_US_3                         ;
extern const uint16_t _LR4_PLL_PERIOD_US_2                         ;
extern const uint16_t _LR4_PLL_PERIOD_US_1                         ;
extern const uint16_t _LR4_PLL_PERIOD_US_0                         ;
extern const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT           ;
extern const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_3         ;
extern const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_2         ;
extern const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_1         ;
extern const uint16_t _LR4_INTERRUPT_SCHEDULER__DATA_OUT_0         ;
extern const uint16_t _LR4_NVM_BIST__COMPLETE                      ;
extern const uint16_t _LR4_NVM_BIST__STATUS                        ;
extern const uint16_t _LR4_IDENTIFICATION__MODEL_ID                ;
extern const uint16_t _LR4_IDENTIFICATION__MODULE_TYPE             ;
extern const uint16_t _LR4_IDENTIFICATION__REVISION_ID             ;
extern const uint16_t _LR4_IDENTIFICATION__MODULE_ID               ;
extern const uint16_t _LR4_IDENTIFICATION__MODULE_ID_HI            ;
extern const uint16_t _LR4_IDENTIFICATION__MODULE_ID_LO            ;
extern const uint16_t _LR4_ANA_CONFIG__FAST_OSC__TRIM_MAX          ;
extern const uint16_t _LR4_ANA_CONFIG__FAST_OSC__FREQ_SET          ;
extern const uint16_t _LR4_ANA_CONFIG__VCSEL_TRIM                  ;
extern const uint16_t _LR4_ANA_CONFIG__VCSEL_SELION                ;
extern const uint16_t _LR4_ANA_CONFIG__VCSEL_SELION_MAX            ;
extern const uint16_t _LR4_PROTECTED_LASER_SAFETY__LOCK_BIT        ;
extern const uint16_t _LR4_LASER_SAFETY__KEY                       ;
extern const uint16_t _LR4_LASER_SAFETY__KEY_RO                    ;
extern const uint16_t _LR4_LASER_SAFETY__CLIP                      ;
extern const uint16_t _LR4_LASER_SAFETY__MULT                      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_0       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_1       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_2       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_3       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_4       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_5       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_6       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_7       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_8       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_9       ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_10      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_11      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_12      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_13      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_14      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_15      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_16      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_17      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_18      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_19      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_20      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_21      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_22      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_23      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_24      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_25      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_26      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_27      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_28      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_29      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_30      ;
extern const uint16_t _LR4_GLOBAL_CONFIG__SPAD_ENABLES_RTN_31      ;
extern const uint16_t _LR4_ROI_CONFIG__MODE_ROI_CENTRE_SPAD        ;
extern const uint16_t _LR4_ROI_CONFIG__MODE_ROI_XY_SIZE            ;
extern const uint16_t _LR4_GO2_HOST_BANK_ACCESS__OVERRIDE          ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_3     ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_2     ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_1     ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLICAND_0     ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER         ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_3       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_2       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_1       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__MULTIPLIER_0       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI         ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_3       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_2       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_1       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_HI_0       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO         ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_3       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_2       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_1       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__PRODUCT_LO_0       ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__START     ;
extern const uint16_t _LR4_MCU_UTIL_MULTIPLIER__STATUS    ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__START        ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__STATUS       ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND     ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_3   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_2   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_1   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVIDEND_0   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR      ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_3    ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_2    ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_1    ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__DIVISOR_0    ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT     ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_3   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_2   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_1   ;
extern const uint16_t _LR4_MCU_UTIL_DIVIDER__QUOTIENT_0   ;
extern const uint16_t _LR4_TIMER0__VALUE_IN      ;
extern const uint16_t _LR4_TIMER0__VALUE_IN_3    ;
extern const uint16_t _LR4_TIMER0__VALUE_IN_2    ;
extern const uint16_t _LR4_TIMER0__VALUE_IN_1    ;
extern const uint16_t _LR4_TIMER0__VALUE_IN_0    ;
extern const uint16_t _LR4_TIMER1__VALUE_IN    ;
extern const uint16_t _LR4_TIMER1__VALUE_IN_3  ;
extern const uint16_t _LR4_TIMER1__VALUE_IN_2  ;
extern const uint16_t _LR4_TIMER1__VALUE_IN_1  ;
extern const uint16_t _LR4_TIMER1__VALUE_IN_0  ;
extern const uint16_t _LR4_TIMER0__CTRL        ;
extern const uint16_t _LR4_TIMER1__CTRL                                  ;
extern const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_0                     ;
extern const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_1                     ;
extern const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_2                     ;
extern const uint16_t _LR4_MCU_GENERAL_PURPOSE__GP_3                     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__CONFIG                        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__OFFSET_CORRECTED_RANGE        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__OFFSET_CORRECTED_RANGE_HI     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__OFFSET_CORRECTED_RANGE_LO     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4                       ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_3                     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_2                     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_1                     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_4_0                     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_DURATION_PRE_CALC     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_DURATION_PRE_CALC_HI  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_DURATION_PRE_CALC_LO  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_VCSEL_PERIOD             ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_5                      ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_TOTAL_PERIODS           ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_TOTAL_PERIODS_HI        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_TOTAL_PERIODS_LO        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE             ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_3           ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_2           ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_1           ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ACCUM_PHASE_0           ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS           ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_3         ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_2         ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_1         ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_SIGNAL_EVENTS_0         ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS          ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_3        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_2        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_1        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_AMBIENT_EVENTS_0        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_6                      ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_6_HI                   ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_6_LO                   ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ADJUST_VCSEL_PERIOD     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ADJUST_VCSEL_PERIOD_HI  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__ALGO_ADJUST_VCSEL_PERIOD_LO  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__NUM_SPADS                ;
extern const uint16_t _LR4_MCU_RANGE_CALC__NUM_SPADS_HI             ;
extern const uint16_t _LR4_MCU_RANGE_CALC__NUM_SPADS_LO             ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PHASE_OUTPUT             ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PHASE_OUTPUT_HI          ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PHASE_OUTPUT_LO          ;
extern const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS       ;
extern const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_3     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_2     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_1     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__RATE_PER_SPAD_MCPS_0     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_7                  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_8                  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_MCPS    ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_MCPS_HI ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_MCPS_LO ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AVG_SIGNAL_RATE_MCPS     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AVG_SIGNAL_RATE_MCPS_HI  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AVG_SIGNAL_RATE_MCPS_LO  ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_RATE_MCPS        ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_RATE_MCPS_HI     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__AMBIENT_RATE_MCPS_LO     ;
extern const uint16_t _LR4_MCU_RANGE_CALC__XTALK                    ;
extern const uint16_t _LR4_MCU_RANGE_CALC__XTALK_HI                 ;
extern const uint16_t _LR4_MCU_RANGE_CALC__XTALK_LO                 ;
extern const uint16_t _LR4_MCU_RANGE_CALC__CALC_STATUS              ;
extern const uint16_t _LR4_MCU_RANGE_CALC__DEBUG                    ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_XTALK_CORR_MCPS   ;
extern const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_XTALK_CORR_MCPS_HI;
extern const uint16_t _LR4_MCU_RANGE_CALC__PEAK_SIGNAL_RATE_XTALK_CORR_MCPS_LO;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_0   ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_1   ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_2   ;
extern const uint16_t _LR4_MCU_RANGE_CALC__SPARE_3   ;
extern const uint16_t _LR4_PATCH__CTRL               ;
extern const uint16_t _LR4_PATCH__JMP_ENABLES        ;
extern const uint16_t _LR4_PATCH__JMP_ENABLES_HI     ;
extern const uint16_t _LR4_PATCH__JMP_ENABLES_LO     ;
extern const uint16_t _LR4_PATCH__DATA_ENABLES       ;
extern const uint16_t _LR4_PATCH__DATA_ENABLES_HI    ;
extern const uint16_t _LR4_PATCH__DATA_ENABLES_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_0       ;
extern const uint16_t _LR4_PATCH__OFFSET_0_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_0_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_1       ;
extern const uint16_t _LR4_PATCH__OFFSET_1_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_1_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_2       ;
extern const uint16_t _LR4_PATCH__OFFSET_2_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_2_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_3       ;
extern const uint16_t _LR4_PATCH__OFFSET_3_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_3_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_4       ;
extern const uint16_t _LR4_PATCH__OFFSET_4_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_4_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_5       ;
extern const uint16_t _LR4_PATCH__OFFSET_5_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_5_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_6       ;
extern const uint16_t _LR4_PATCH__OFFSET_6_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_6_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_7       ;
extern const uint16_t _LR4_PATCH__OFFSET_7_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_7_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_8       ;
extern const uint16_t _LR4_PATCH__OFFSET_8_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_8_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_9       ;
extern const uint16_t _LR4_PATCH__OFFSET_9_HI    ;
extern const uint16_t _LR4_PATCH__OFFSET_9_LO    ;
extern const uint16_t _LR4_PATCH__OFFSET_10      ;
extern const uint16_t _LR4_PATCH__OFFSET_10_HI   ;
extern const uint16_t _LR4_PATCH__OFFSET_10_LO   ;
extern const uint16_t _LR4_PATCH__OFFSET_11      ;
extern const uint16_t _LR4_PATCH__OFFSET_11_HI   ;
extern const uint16_t _LR4_PATCH__OFFSET_11_LO   ;
extern const uint16_t _LR4_PATCH__OFFSET_12      ;
extern const uint16_t _LR4_PATCH__OFFSET_12_HI   ;
extern const uint16_t _LR4_PATCH__OFFSET_12_LO   ;
extern const uint16_t _LR4_PATCH__OFFSET_13      ;
extern const uint16_t _LR4_PATCH__OFFSET_13_HI   ;
extern const uint16_t _LR4_PATCH__OFFSET_13_LO   ;
extern const uint16_t _LR4_PATCH__OFFSET_14      ;
extern const uint16_t _LR4_PATCH__OFFSET_14_HI   ;
extern const uint16_t _LR4_PATCH__OFFSET_14_LO   ;
extern const uint16_t _LR4_PATCH__OFFSET_15      ;
extern const uint16_t _LR4_PATCH__OFFSET_15_HI   ;
extern const uint16_t _LR4_PATCH__OFFSET_15_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_0      ;
extern const uint16_t _LR4_PATCH__ADDRESS_0_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_0_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_1      ;
extern const uint16_t _LR4_PATCH__ADDRESS_1_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_1_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_2      ;
extern const uint16_t _LR4_PATCH__ADDRESS_2_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_2_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_3      ;
extern const uint16_t _LR4_PATCH__ADDRESS_3_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_3_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_4      ;
extern const uint16_t _LR4_PATCH__ADDRESS_4_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_4_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_5      ;
extern const uint16_t _LR4_PATCH__ADDRESS_5_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_5_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_6      ;
extern const uint16_t _LR4_PATCH__ADDRESS_6_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_6_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_7      ;
extern const uint16_t _LR4_PATCH__ADDRESS_7_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_7_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_8      ;
extern const uint16_t _LR4_PATCH__ADDRESS_8_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_8_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_9      ;
extern const uint16_t _LR4_PATCH__ADDRESS_9_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_9_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_10     ;
extern const uint16_t _LR4_PATCH__ADDRESS_10_HI  ;
extern const uint16_t _LR4_PATCH__ADDRESS_10_LO  ;
extern const uint16_t _LR4_PATCH__ADDRESS_11     ;
extern const uint16_t _LR4_PATCH__ADDRESS_11_HI  ;
extern const uint16_t _LR4_PATCH__ADDRESS_11_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_12      ;
extern const uint16_t _LR4_PATCH__ADDRESS_12_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_12_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_13      ;
extern const uint16_t _LR4_PATCH__ADDRESS_13_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_13_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_14      ;
extern const uint16_t _LR4_PATCH__ADDRESS_14_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_14_LO   ;
extern const uint16_t _LR4_PATCH__ADDRESS_15      ;
extern const uint16_t _LR4_PATCH__ADDRESS_15_HI   ;
extern const uint16_t _LR4_PATCH__ADDRESS_15_LO   ;
extern const uint16_t _LR4_SPI_ASYNC_MUX__CTRL                               ;
extern const uint16_t _LR4_CLK__CONFIG                                       ;
extern const uint16_t _LR4_GPIO_LV_MUX__CTRL                                 ;
extern const uint16_t _LR4_GPIO_LV_PAD__CTRL                                 ;
extern const uint16_t _LR4_PAD_I2C_LV__CONFIG                                ;
extern const uint16_t _LR4_PAD_STARTUP_MODE__VALUE_RO_GO1                    ;
extern const uint16_t _LR4_HOST_IF__STATUS_GO1                               ;
extern const uint16_t _LR4_MCU_CLK_GATING__CTRL                              ;
extern const uint16_t _LR4_TEST__BIST_ROM_CTRL                               ;
extern const uint16_t _LR4_TEST__BIST_ROM_RESULT                             ;
extern const uint16_t _LR4_TEST__BIST_ROM_MCU_SIG                            ;
extern const uint16_t _LR4_TEST__BIST_ROM_MCU_SIG_HI                         ;
extern const uint16_t _LR4_TEST__BIST_ROM_MCU_SIG_LO                         ;
extern const uint16_t _LR4_TEST__BIST_RAM_CTRL                               ;
extern const uint16_t _LR4_TEST__BIST_RAM_RESULT                             ;
extern const uint16_t _LR4_TEST__TMC                                         ;
extern const uint16_t _LR4_TEST__PLL_BIST_MIN_THRESHOLD                      ;
extern const uint16_t _LR4_TEST__PLL_BIST_MIN_THRESHOLD_HI                   ;
extern const uint16_t _LR4_TEST__PLL_BIST_MIN_THRESHOLD_LO                   ;
extern const uint16_t _LR4_TEST__PLL_BIST_MAX_THRESHOLD                      ;
extern const uint16_t _LR4_TEST__PLL_BIST_MAX_THRESHOLD_HI                   ;
extern const uint16_t _LR4_TEST__PLL_BIST_MAX_THRESHOLD_LO                   ;
extern const uint16_t _LR4_TEST__PLL_BIST_COUNT_OUT                          ;
extern const uint16_t _LR4_TEST__PLL_BIST_COUNT_OUT_HI                       ;
extern const uint16_t _LR4_TEST__PLL_BIST_COUNT_OUT_LO                       ;
extern const uint16_t _LR4_TEST__PLL_BIST_GONOGO                             ;
extern const uint16_t _LR4_TEST__PLL_BIST_CTRL                               ;
extern const uint16_t _LR4_RANGING_CORE__DEVICE_ID                           ;
extern const uint16_t _LR4_RANGING_CORE__REVISION_ID                         ;
extern const uint16_t _LR4_RANGING_CORE__CLK_CTRL1                           ;
extern const uint16_t _LR4_RANGING_CORE__CLK_CTRL2                           ;
extern const uint16_t _LR4_RANGING_CORE__WOI_1                               ;
extern const uint16_t _LR4_RANGING_CORE__WOI_REF_1                           ;
extern const uint16_t _LR4_RANGING_CORE__START_RANGING                       ;
extern const uint16_t _LR4_RANGING_CORE__LOW_LIMIT_1                         ;
extern const uint16_t _LR4_RANGING_CORE__HIGH_LIMIT_1                        ;
extern const uint16_t _LR4_RANGING_CORE__LOW_LIMIT_REF_1                     ;
extern const uint16_t _LR4_RANGING_CORE__HIGH_LIMIT_REF_1                    ;
extern const uint16_t _LR4_RANGING_CORE__QUANTIFIER_1_MSB                    ;
extern const uint16_t _LR4_RANGING_CORE__QUANTIFIER_1_LSB                    ;
extern const uint16_t _LR4_RANGING_CORE__QUANTIFIER_REF_1_MSB                ;
extern const uint16_t _LR4_RANGING_CORE__QUANTIFIER_REF_1_LSB                ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_1_MSB                ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_1_LSB                ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_REF_1_MSB            ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_OFFSET_REF_1_LSB            ;
extern const uint16_t _LR4_RANGING_CORE__FILTER_STRENGTH_1                   ;
extern const uint16_t _LR4_RANGING_CORE__FILTER_STRENGTH_REF_1               ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_1_MSB            ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_1_LSB            ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_REF_1_MSB        ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_EVENT_LIMIT_REF_1_LSB        ;
extern const uint16_t _LR4_RANGING_CORE__TIMEOUT_OVERALL_PERIODS_MSB         ;
extern const uint16_t _LR4_RANGING_CORE__TIMEOUT_OVERALL_PERIODS_LSB         ;
extern const uint16_t _LR4_RANGING_CORE__INVERT_HW                           ;
extern const uint16_t _LR4_RANGING_CORE__FORCE_HW                            ;
extern const uint16_t _LR4_RANGING_CORE__STATIC_HW_VALUE                     ;
extern const uint16_t _LR4_RANGING_CORE__FORCE_CONTINUOUS_AMBIENT            ;
extern const uint16_t _LR4_RANGING_CORE__TEST_PHASE_SELECT_TO_FILTER         ;
extern const uint16_t _LR4_RANGING_CORE__TEST_PHASE_SELECT_TO_TIMING_GEN     ;
extern const uint16_t _LR4_RANGING_CORE__INITIAL_PHASE_VALUE_1               ;
extern const uint16_t _LR4_RANGING_CORE__INITIAL_PHASE_VALUE_REF_1           ;
extern const uint16_t _LR4_RANGING_CORE__FORCE_UP_IN                         ;
extern const uint16_t _LR4_RANGING_CORE__FORCE_DN_IN                         ;
extern const uint16_t _LR4_RANGING_CORE__STATIC_UP_VALUE_1                   ;
extern const uint16_t _LR4_RANGING_CORE__STATIC_UP_VALUE_REF_1               ;
extern const uint16_t _LR4_RANGING_CORE__STATIC_DN_VALUE_1                   ;
extern const uint16_t _LR4_RANGING_CORE__STATIC_DN_VALUE_REF_1               ;
extern const uint16_t _LR4_RANGING_CORE__MONITOR_UP_DN                       ;
extern const uint16_t _LR4_RANGING_CORE__INVERT_UP_DN                        ;
extern const uint16_t _LR4_RANGING_CORE__CPUMP_1                             ;
extern const uint16_t _LR4_RANGING_CORE__CPUMP_2                             ;
extern const uint16_t _LR4_RANGING_CORE__CPUMP_3                             ;
extern const uint16_t _LR4_RANGING_CORE__OSC_1                               ;
extern const uint16_t _LR4_RANGING_CORE__PLL_1                               ;
extern const uint16_t _LR4_RANGING_CORE__PLL_2                               ;
extern const uint16_t _LR4_RANGING_CORE__REFERENCE_1                         ;
extern const uint16_t _LR4_RANGING_CORE__REFERENCE_3                         ;
extern const uint16_t _LR4_RANGING_CORE__REFERENCE_4                         ;
extern const uint16_t _LR4_RANGING_CORE__REFERENCE_5                         ;
extern const uint16_t _LR4_RANGING_CORE__REGAVDD1V2                          ;
extern const uint16_t _LR4_RANGING_CORE__CALIB_1                             ;
extern const uint16_t _LR4_RANGING_CORE__CALIB_2                             ;
extern const uint16_t _LR4_RANGING_CORE__CALIB_3                             ;
extern const uint16_t _LR4_RANGING_CORE__TST_MUX_SEL1                        ;
extern const uint16_t _LR4_RANGING_CORE__TST_MUX_SEL2                        ;
extern const uint16_t _LR4_RANGING_CORE__TST_MUX                             ;
extern const uint16_t _LR4_RANGING_CORE__GPIO_OUT_TESTMUX                    ;
extern const uint16_t _LR4_RANGING_CORE__CUSTOM_FE                           ;
extern const uint16_t _LR4_RANGING_CORE__CUSTOM_FE_2                         ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_READOUT               ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_READOUT_1             ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_READOUT_2             ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_PS                    ;
extern const uint16_t _LR4_RANGING_CORE__LASER_SAFETY_2             ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__MODE             ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PDN              ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PROGN            ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__READN            ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PULSE_WIDTH_MSB  ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__PULSE_WIDTH_LSB  ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_RISE_MSB      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_RISE_LSB      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_FALL_MSB      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__HV_FALL_LSB      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__TST              ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__TESTREAD         ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_MMM       ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_LMM       ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_LLM       ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAIN_LLL       ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_MMM      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_LMM      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_LLM      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_LLL      ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__ADDR             ;
extern const uint16_t _LR4_RANGING_CORE__NVM_CTRL__DATAOUT_ECC      ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_0              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_1              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_2              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_3              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_4              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_5              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_6              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_7              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_8              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_9              ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_10             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_11             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_12             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_13             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_14             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_15             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_16             ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_17             ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_SHIFT_EN              ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_DISABLE_CTRL          ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_EN_SHIFT_OUT_DEBUG    ;
extern const uint16_t _LR4_RANGING_CORE__SPI_MODE                   ;
extern const uint16_t _LR4_RANGING_CORE__GPIO_DIR                   ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_PERIOD               ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_START                ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_STOP                 ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_1                    ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_STATUS                      ;
extern const uint16_t _LR4_RANGING_CORE__STATUS                            ;
extern const uint16_t _LR4_RANGING_CORE__LASER_CONTINUITY_STATE            ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_1_MMM                       ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_1_LMM                       ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_1_LLM                       ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_1_LLL                       ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_MMM                   ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_LMM                   ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_LLM                   ;
extern const uint16_t _LR4_RANGING_CORE__RANGE_REF_1_LLL                   ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_MMM       ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_LMM       ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_LLM       ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_1_LLL       ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_MMM        ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_LMM        ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_LLM        ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_1_LLL        ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_MMM         ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_LMM         ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_LLM         ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_1_LLL         ;
extern const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_1_MM        ;
extern const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_1_LM        ;
extern const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_1_LL        ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_MM               ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_LM               ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_LL               ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_MMM   ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_LMM   ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_LLM   ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_WINDOW_EVENTS_REF_1_LLL   ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_MMM    ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_LMM    ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_LLM    ;
extern const uint16_t _LR4_RANGING_CORE__RANGING_TOTAL_EVENTS_REF_1_LLL    ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_MMM     ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_LMM     ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_LLM     ;
extern const uint16_t _LR4_RANGING_CORE__SIGNAL_TOTAL_EVENTS_REF_1_LLL     ;
extern const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_REF_1_MM    ;
extern const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_REF_1_LM    ;
extern const uint16_t _LR4_RANGING_CORE__TOTAL_PERIODS_ELAPSED_REF_1_LL    ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_REF_MM           ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_REF_LM           ;
extern const uint16_t _LR4_RANGING_CORE__AMBIENT_MISMATCH_REF_LL           ;
extern const uint16_t _LR4_RANGING_CORE__GPIO_CONFIG__A0                   ;
extern const uint16_t _LR4_RANGING_CORE__RESET_CONTROL__A0                 ;
extern const uint16_t _LR4_RANGING_CORE__INTR_MANAGER__A0                  ;
extern const uint16_t _LR4_RANGING_CORE__POWER_FSM_TIME_OSC__A0            ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_ATEST__A0                   ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_PERIOD_CLIPPED__A0          ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_STOP_CLIPPED__A0            ;
extern const uint16_t _LR4_RANGING_CORE__CALIB_2__A0                       ;
extern const uint16_t _LR4_RANGING_CORE__STOP_CONDITION__A0                ;
extern const uint16_t _LR4_RANGING_CORE__STATUS_RESET__A0                  ;
extern const uint16_t _LR4_RANGING_CORE__READOUT_CFG__A0                   ;
extern const uint16_t _LR4_RANGING_CORE__WINDOW_SETTING__A0                ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_DELAY__A0                   ;
extern const uint16_t _LR4_RANGING_CORE__REFERENCE_2__A0                   ;
extern const uint16_t _LR4_RANGING_CORE__REGAVDD1V2__A0                    ;
extern const uint16_t _LR4_RANGING_CORE__TST_MUX__A0                       ;
extern const uint16_t _LR4_RANGING_CORE__CUSTOM_FE_2__A0                   ;
extern const uint16_t _LR4_RANGING_CORE__SPAD_READOUT__A0                  ;
extern const uint16_t _LR4_RANGING_CORE__CPUMP_1__A0                       ;
extern const uint16_t _LR4_RANGING_CORE__SPARE_REGISTER__A0                ;
extern const uint16_t _LR4_RANGING_CORE__VCSEL_CONT_STAGE5_BYPASS__A0      ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_18  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_19  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_20  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_21  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_22  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_23  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_24  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_25  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_26  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_27  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_28  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_29  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_30  ;
extern const uint16_t _LR4_RANGING_CORE__RET_SPAD_EN_31  ;
extern const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_0__EWOK     ;
extern const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_1__EWOK     ;
extern const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_2__EWOK     ;
extern const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_3__EWOK     ;
extern const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_4__EWOK     ;
extern const uint16_t _LR4_RANGING_CORE__REF_SPAD_EN_5__EWOK     ;
extern const uint16_t _LR4_RANGING_CORE__REF_EN_START_SELECT     ;
extern const uint16_t _LR4_RANGING_CORE__REGDVDD1V2_ATEST__EWOK  ;
extern const uint16_t _LR4_SOFT_RESET_GO1                        ;
extern const uint16_t _LR4_PRIVATE__PATCH_BASE_ADDR_RSLV         ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__INTERRUPT_STATUS  ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__RANGE_STATUS      ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__REPORT_STATUS     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__STREAM_COUNT      ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_HI  ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_LO  ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_HI ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_LO ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_HI     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_LO     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD0      ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD0_HI   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD0_LO   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD0      ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD0_HI   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD0_LO   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_HI     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_LO     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCP;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCP_MSB;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCP_LSB;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0       ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_HI    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_LO    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0       ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_HI    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_LO    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0            ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_HI         ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_LO         ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1            ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_HI         ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_LO         ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1           ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_HI        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_LO        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1               ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_HI            ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_LO            ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD1                                 ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD1_HI                              ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SIGMA_SD1_LO                              ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD1                                 ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD1_HI                              ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__PHASE_SD1_LO                              ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_HI ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_LO ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_0_SD1                        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_0_SD1_HI                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_0_SD1_LO                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_1_SD1                        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_1_SD1_HI                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_1_SD1_LO                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_2_SD1                        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_2_SD1_HI                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_2_SD1_LO                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_3_SD1                        ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_3_SD1_HI                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT__SPARE_3_SD1_LO                     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_3   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_2   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_1   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_0   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0      ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_3    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_2    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_1    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_0    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0       ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_3     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_2     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_1     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_0     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_3   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_2   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_1   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_0   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_3   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_2   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_1   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_0   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1      ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_3    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_2    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_1    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_0    ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1       ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_3     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_2     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_1     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_0     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1     ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_3   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_2   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_1   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_0   ;
extern const uint16_t _LR4_PREV_SHADOW_RESULT_CORE__SPARE_0   ;
extern const uint16_t _LR4_RESULT__DEBUG_STATUS               ;
extern const uint16_t _LR4_RESULT__DEBUG_STAGE                ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_HIGH      ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_HIGH_HI   ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_HIGH_LO   ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_LOW       ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_LOW_HI    ;
extern const uint16_t _LR4_GPH__SYSTEM__THRESH_RATE_LOW_LO    ;
extern const uint16_t _LR4_GPH__SYSTEM__INTERRUPT_CONFIG_GPIO ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__ROI_MODE_CONTROL  ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT    ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_HI ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_EFFECTIVE_SPADS_SELECT_LO ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__MANUAL_BLOCK_SELECT    ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__MAX_SPADS_LIMIT        ;
extern const uint16_t _LR4_GPH__DSS_CONFIG__MIN_SPADS_LIMIT        ;
extern const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_A_HI     ;
extern const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_A_LO     ;
extern const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_B_HI     ;
extern const uint16_t _LR4_GPH__MM_CONFIG__TIMEOUT_MACROP_B_LO     ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_A_HI  ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_A_LO  ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__VCSEL_PERIOD_A       ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__VCSEL_PERIOD_B       ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_B_HI  ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__TIMEOUT_MACROP_B_LO  ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__SIGMA_THRESH         ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__SIGMA_THRESH_HI      ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__SIGMA_THRESH_LO      ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS   ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_HI;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__MIN_COUNT_RATE_RTN_LIMIT_MCPS_LO;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__VALID_PHASE_LOW      ;
extern const uint16_t _LR4_GPH__RANGE_CONFIG__VALID_PHASE_HIGH     ;
extern const uint16_t _LR4_FIRMWARE__INTERNAL_STREAM_COUNT_DIV     ;
extern const uint16_t _LR4_FIRMWARE__INTERNAL_STREAM_COUNTER_VAL   ;
extern const uint16_t _LR4_DSS_CALC__ROI_CTRL                      ;
extern const uint16_t _LR4_DSS_CALC__SPARE_1                       ;
extern const uint16_t _LR4_DSS_CALC__SPARE_2                       ;
extern const uint16_t _LR4_DSS_CALC__SPARE_3                       ;
extern const uint16_t _LR4_DSS_CALC__SPARE_4                       ;
extern const uint16_t _LR4_DSS_CALC__SPARE_5                       ;
extern const uint16_t _LR4_DSS_CALC__SPARE_6                       ;
extern const uint16_t _LR4_DSS_CALC__SPARE_7                       ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_0            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_1            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_2            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_3            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_4            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_5            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_6            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_7            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_8            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_9            ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_10           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_11           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_12           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_13           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_14           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_15           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_16           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_17           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_18           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_19           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_20           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_21           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_22           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_23           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_24           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_25           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_26           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_27           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_28           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_29           ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_30         ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_SPAD_EN_31         ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_0                  ;
extern const uint16_t _LR4_DSS_CALC__USER_ROI_1                  ;
extern const uint16_t _LR4_DSS_CALC__MODE_ROI_0                  ;
extern const uint16_t _LR4_DSS_CALC__MODE_ROI_1                  ;
extern const uint16_t _LR4_SIGMA_ESTIMATOR_CALC__SPARE_0         ;
extern const uint16_t _LR4_VHV_RESULT__PEAK_SIGNAL_RATE_MCPS     ;
extern const uint16_t _LR4_VHV_RESULT__PEAK_SIGNAL_RATE_MCPS_HI  ;
extern const uint16_t _LR4_VHV_RESULT__PEAK_SIGNAL_RATE_MCPS_LO  ;
extern const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF   ;
extern const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_3 ;
extern const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_2 ;
extern const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_1 ;
extern const uint16_t _LR4_VHV_RESULT__SIGNAL_TOTAL_EVENTS_REF_0 ;
extern const uint16_t _LR4_PHASECAL_RESULT__PHASE_OUTPUT_REF     ;
extern const uint16_t _LR4_PHASECAL_RESULT__PHASE_OUTPUT_REF_HI  ;
extern const uint16_t _LR4_PHASECAL_RESULT__PHASE_OUTPUT_REF_LO  ;
extern const uint16_t _LR4_DSS_RESULT__TOTAL_RATE_PER_SPAD       ;
extern const uint16_t _LR4_DSS_RESULT__TOTAL_RATE_PER_SPAD_HI    ;
extern const uint16_t _LR4_DSS_RESULT__TOTAL_RATE_PER_SPAD_LO    ;
extern const uint16_t _LR4_DSS_RESULT__ENABLED_BLOCKS            ;
extern const uint16_t _LR4_DSS_RESULT__NUM_REQUESTED_SPADS       ;
extern const uint16_t _LR4_DSS_RESULT__NUM_REQUESTED_SPADS_HI    ;
extern const uint16_t _LR4_DSS_RESULT__NUM_REQUESTED_SPADS_LO    ;
extern const uint16_t _LR4_MM_RESULT__INNER_INTERSECTION_RATE    ;
extern const uint16_t _LR4_MM_RESULT__INNER_INTERSECTION_RATE_HI ;
extern const uint16_t _LR4_MM_RESULT__INNER_INTERSECTION_RATE_LO ;
extern const uint16_t _LR4_MM_RESULT__OUTER_COMPLEMENT_RATE      ;
extern const uint16_t _LR4_MM_RESULT__OUTER_COMPLEMENT_RATE_HI   ;
extern const uint16_t _LR4_MM_RESULT__OUTER_COMPLEMENT_RATE_LO   ;
extern const uint16_t _LR4_MM_RESULT__TOTAL_OFFSET               ;
extern const uint16_t _LR4_MM_RESULT__TOTAL_OFFSET_HI            ;
extern const uint16_t _LR4_MM_RESULT__TOTAL_OFFSET_LO            ;
extern const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS   ;
extern const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_3      ;
extern const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_2      ;
extern const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_1      ;
extern const uint16_t _LR4_XTALK_CALC__XTALK_FOR_ENABLED_SPADS_0      ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS      ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_3    ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_2    ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_1    ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_USER_ROI_KCPS_0    ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS  ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_3;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_2;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_1;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_INNER_ROI_KCPS_0;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS  ;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_3;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_2;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_1;
extern const uint16_t _LR4_XTALK_RESULT__AVG_XTALK_MM_OUTER_ROI_KCPS_0;
extern const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE               ;
extern const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_3             ;
extern const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_2             ;
extern const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_1             ;
extern const uint16_t _LR4_RANGE_RESULT__ACCUM_PHASE_0             ;
extern const uint16_t _LR4_RANGE_RESULT__OFFSET_CORRECTED_RANGE    ;
extern const uint16_t _LR4_RANGE_RESULT__OFFSET_CORRECTED_RANGE_HI ;
extern const uint16_t _LR4_RANGE_RESULT__OFFSET_CORRECTED_RANGE_LO ;
extern const uint16_t _LR4_SHADOW_PHASECAL_RESULT__VCSEL_START     ;
extern const uint16_t _LR4_SHADOW_RESULT__INTERRUPT_STATUS         ;
extern const uint16_t _LR4_SHADOW_RESULT__RANGE_STATUS             ;
extern const uint16_t _LR4_SHADOW_RESULT__REPORT_STATUS            ;
extern const uint16_t _LR4_SHADOW_RESULT__STREAM_COUNT             ;
extern const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0     ;
extern const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_HI  ;
extern const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD0_LO  ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0    ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_HI ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD0_LO ;
extern const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0        ;
extern const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_HI     ;
extern const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD0_LO     ;
extern const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD0      ;
extern const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD0_HI   ;
extern const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD0_LO   ;
extern const uint16_t _LR4_SHADOW_RESULT__PHASE_SD0      ;
extern const uint16_t _LR4_SHADOW_RESULT__PHASE_SD0_HI   ;
extern const uint16_t _LR4_SHADOW_RESULT__PHASE_SD0_LO                                       ;
extern const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0             ;
extern const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_HI          ;
extern const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD0_LO             ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0   ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_HI;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_CROSSTALK_CORRECTED_MCPS_SD0_LO;
extern const uint16_t _LR4_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0         ;
extern const uint16_t _LR4_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_HI      ;
extern const uint16_t _LR4_SHADOW_RESULT__MM_INNER_ACTUAL_EFFECTIVE_SPADS_SD0_LO      ;
extern const uint16_t _LR4_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0         ;
extern const uint16_t _LR4_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_HI      ;
extern const uint16_t _LR4_SHADOW_RESULT__MM_OUTER_ACTUAL_EFFECTIVE_SPADS_SD0_LO      ;
extern const uint16_t _LR4_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0              ;
extern const uint16_t _LR4_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_HI           ;
extern const uint16_t _LR4_SHADOW_RESULT__AVG_SIGNAL_COUNT_RATE_MCPS_SD0_LO           ;
extern const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1              ;
extern const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_HI           ;
extern const uint16_t _LR4_SHADOW_RESULT__DSS_ACTUAL_EFFECTIVE_SPADS_SD1_LO           ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1             ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_HI          ;
extern const uint16_t _LR4_SHADOW_RESULT__PEAK_SIGNAL_COUNT_RATE_MCPS_SD1_LO          ;
extern const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1                 ;
extern const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_HI              ;
extern const uint16_t _LR4_SHADOW_RESULT__AMBIENT_COUNT_RATE_MCPS_SD1_LO              ;
extern const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD1                                   ;
extern const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD1_HI                                ;
extern const uint16_t _LR4_SHADOW_RESULT__SIGMA_SD1_LO                                ;
extern const uint16_t _LR4_SHADOW_RESULT__PHASE_SD1                                   ;
extern const uint16_t _LR4_SHADOW_RESULT__PHASE_SD1_HI                                ;
extern const uint16_t _LR4_SHADOW_RESULT__PHASE_SD1_LO                                ;
extern const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1      ;
extern const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_HI   ;
extern const uint16_t _LR4_SHADOW_RESULT__FINAL_CROSSTALK_CORRECTED_RANGE_MM_SD1_LO   ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_0_SD1    ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_0_SD1_HI ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_0_SD1_LO ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_1_SD1    ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_1_SD1_HI ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_1_SD1_LO ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_2_SD1    ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_2_SD1_HI ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_2_SD1_LO ;
extern const uint16_t _LR4_SHADOW_RESULT__SPARE_3_SD1    ;
extern const uint16_t _LR4_SHADOW_RESULT__THRESH_INFO    ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_3 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_2 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_1 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD0_0 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0    ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_3  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_2  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_1  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD0_0  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0     ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_3   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_2   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_1   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD0_0   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_3 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_2 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_1 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD0_0 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_3 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_2 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_1 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__AMBIENT_WINDOW_EVENTS_SD1_0 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1    ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_3  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_2  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_1  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__RANGING_TOTAL_EVENTS_SD1_0  ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1     ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_3   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_2   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_1   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SIGNAL_TOTAL_EVENTS_SD1_0   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1   ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_3 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_2 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_1 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__TOTAL_PERIODS_ELAPSED_SD1_0 ;
extern const uint16_t _LR4_SHADOW_RESULT_CORE__SPARE_0                     ;
extern const uint16_t _LR4_SHADOW_PHASECAL_RESULT__REFERENCE_PHASE_HI      ;
extern const uint16_t _LR4_SHADOW_PHASECAL_RESULT__REFERENCE_PHASE_LO      ;

extern const uint8_t _LR4_DISTANCE_MODE_SHORT  ;
extern const uint8_t _LR4_DISTANCE_MODE_MEDIUM ;
extern const uint8_t _LR4_DISTANCE_MODE_LONG   ;

extern const uint8_t _LR4_RESP_INSUFFICIENT_BUDGET          ;
extern const uint8_t _LR4_RESP_TOO_HIGH_BUDGET              ;
extern const uint8_t _LR4_RESP_BUDGET_IS_SUCCESSFULLY_SET   ;
extern const uint8_t _LR4_RESP_DEVICE_ERROR_ID_IS_NOT_VALID ;
extern const uint8_t _LR4_RESP_FIRMWARE_TIMEOUT_ERROR       ;
extern const uint8_t _LR4_RESP_INIT_IS_SUCCESSFUL           ;
extern const uint8_t _LR4_RESP_WRONG_MODE                   ;
extern const uint8_t _LR4_RESP_MODE_SUCCESSFULLY_SET        ;
extern const uint8_t _LR4_MRESP_SIGNAL_FAIL                 ;
extern const uint8_t _LR4_MRESP_PHASE_OUT_OF_VALID_LIMITS   ;
extern const uint8_t _LR4_MRESP_SIGMA_FAIL                  ;
extern const uint8_t _LR4_MRESP_WRAP_TARGET_FAIL            ;
extern const uint8_t _LR4_MRESP_MINIMUM_DETECTION_THRESHOLD ;

extern const uint8_t _LR4_DEFAULT_SLAVE_ADDRESS;

                                                                      /** @} */
/** @defgroup LIGHTRANGER4_TYPES Types */                             /** @{ */

typedef struct
{
    uint8_t topLeftX;
    uint8_t topLeftY;
    uint8_t bottomRightX;
    uint8_t bottomRightY;
}lightranger4_userRoi;

                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup LIGHTRANGER4_INIT Driver Initialization */              /** @{ */

#ifdef   __LIGHTRANGER4_DRV_SPI__
void lightranger4_spiDriverInit(T_LIGHTRANGER4_P gpioObj, T_LIGHTRANGER4_P spiObj);
#endif
#ifdef   __LIGHTRANGER4_DRV_I2C__
void lightranger4_i2cDriverInit(T_LIGHTRANGER4_P gpioObj, T_LIGHTRANGER4_P i2cObj, uint8_t slave);
#endif
#ifdef   __LIGHTRANGER4_DRV_UART__
void lightranger4_uartDriverInit(T_LIGHTRANGER4_P gpioObj, T_LIGHTRANGER4_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void lightranger4_gpioDriverInit(T_LIGHTRANGER4_P gpioObj);
                                                                       /** @} */
/** @defgroup LIGHTRANGER4_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write one byte in register
 *
 * @param[in] addr    Register in which the data will be written
 * @param[in] _data   Data which be written in the register
 */
void lightranger4_writeByte(uint16_t addr, uint8_t _data);

/**
 * @brief Functions for write two bytes in register
 *
 * @param[in] addr    Register in which the data will be written
 * @param[in] _data   Data which be written in the register
 */
void lightranger4_writeData(uint16_t addr, uint16_t _data);

/**
 * @brief Functions for write four bytes in register
 *
 * @param[in] addr    Register in which the data will be written
 * @param[in] _data   Data which be written in the register
 */
void lightranger4_writeLongData(uint16_t addr, uint32_t _data);

/**
 * @brief Functions for read byte from register
 *
 * @param[in] reg    Register which will be read
 * @retval one byte data which is read from the register
 */
uint8_t lightranger4_readByte(uint16_t addr);

/**
 * @brief Functions for read two bytes from register
 *
 * @param[in] reg    Register which will be read
 * @retval two bytes data which is read from the register
 */
uint16_t lightranger4_readData(uint16_t addr);

/***************************** Functions *************************************/

/**
 * @brief Functions for device configuration 
 *
 * @retval Function return device error status (_ID_IS_NOT_VALID or _FIRMWARE_TIMEOUT_ERROR) or device ok status (_INIT_IS_SUCCESSFUL)
 *
 * @note
    This function should be called in the start program after the power on procedure, in order to check the chip communication and configure the chip for the operation.
 */
uint8_t lightranger4_deviceConfiguration();

/**
 * @brief Functions for start measurement 
 *
 * @param[in] perion_us  Inter measurement period in us
 *
 * @note
    This function should be called in the start program after the device configuration, in order to sets chip for start measurement.
 */
void lightranger4_startMeasurement(uint32_t period_ms);

/**
 * @brief Function that checks whether the new data is ready for reading 
 *
 * @retval Funstion return information about new data (0 - if new data is ready or 1 - if new data is not ready)
 *
 * @note
    Call this function before measuring the distance.
 */
uint8_t lightranger4_newDataReady();

/**
 * @brief Function for software reset
 */
void lightranger4_softReset();

/**
 * @brief Function reads distance of the object in front of the sensor  
 *
 * @retval Distance in mm
 *
 * @note
    Distance depends on the set distance measurement mode,
	In _DISTANCE_MODE_SHORT the maximum measurement distance is 1300mm,
	in _DISTANCE_MODE_MEDIUM the maximum measurement distance is 3000mm, and
	in _DISTANCE_MODE_LONG the maximum measurement distance is 4000mm.
 */
uint16_t lightranger4_getDistance();

/**
 * @brief Function reads signal rate  
 *
 * @retval signal rate
 */
uint16_t lightranger4_getSignalRate();

/**
 * @brief Functions for sets distance measurement mode  
 *
 * @param[in] mode  Distance measurement mode
 *
 * @note
    Distance mode:
	   _DISTANCE_MODE_SHORT the maximum measurement distance is 1300mm
	   _DISTANCE_MODE_MEDIUM the maximum measurement distance is 3000mm
       _DISTANCE_MODE_LONG the maximum measurement distance is 4000mm
 */
uint8_t lightranger4_setDistanceMode(uint8_t mode);

/**
 * @brief Function reads range status  
 *
 * @retval Range status
 */
uint8_t lightranger4_getRangeStatus();

/**
 * @brief Functions for set center position
 *
 * @param[in] centerX       Center X position
 * @param[in] centerY       Center Y position
 */
void lightranger4_setCenter(uint8_t centerX, uint8_t centerY);

/**
 * @brief Functions for sets zone size
 *
 * @param[in] width       Width zone size min(4) and max(16)
 * @param[in] height      Height zone size min(4) and max(16)
 */
void lightranger4_setZoneSize(uint8_t width, uint8_t height);

/**
 * @brief Functions for sets user Roi
 *
 * @param[in] (struct)roi   User Roi
 */
void lightranger4_setUserRoi(lightranger4_userRoi *roi);

/**
 * @brief Functions for sets measurement timing budget
 *
 * @param[in] budget_us  Measurement timing budget in us
 *
 * @retval Function return error status (_INSUFFICIENT_BUDGET or _TOO_HIGH_BUDGET) or device ok status (_BUDGET_IS_SUCCESSFULLY_SET)
 */
uint8_t lightranger4_setMeasurementTimingBudget(uint32_t budget_us);

/**
 * @brief Function reads interrupt pin state 
 *
 * @retval Interrupt pin state 
 */
uint8_t lightranger4_getIntrruptState();

/**
 * @brief Function for sets XSHUT pin
 *
 * @param[in] state  Pin state 
 *
 * @note 
       Xshutdown pin - active low 
 *
 */
void lightranger4_setXSHUTpin(uint8_t state);

/**
 * @brief Function for starts power ON procedure 
 */
void lightranger4_powerON();




                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_LightRanger4_STM.c
    @example Click_LightRanger4_TIVA.c
    @example Click_LightRanger4_CEC.c
    @example Click_LightRanger4_KINETIS.c
    @example Click_LightRanger4_MSP.c
    @example Click_LightRanger4_PIC.c
    @example Click_LightRanger4_PIC32.c
    @example Click_LightRanger4_DSPIC.c
    @example Click_LightRanger4_AVR.c
    @example Click_LightRanger4_FT90x.c
    @example Click_LightRanger4_STM.mbas
    @example Click_LightRanger4_TIVA.mbas
    @example Click_LightRanger4_CEC.mbas
    @example Click_LightRanger4_KINETIS.mbas
    @example Click_LightRanger4_MSP.mbas
    @example Click_LightRanger4_PIC.mbas
    @example Click_LightRanger4_PIC32.mbas
    @example Click_LightRanger4_DSPIC.mbas
    @example Click_LightRanger4_AVR.mbas
    @example Click_LightRanger4_FT90x.mbas
    @example Click_LightRanger4_STM.mpas
    @example Click_LightRanger4_TIVA.mpas
    @example Click_LightRanger4_CEC.mpas
    @example Click_LightRanger4_KINETIS.mpas
    @example Click_LightRanger4_MSP.mpas
    @example Click_LightRanger4_PIC.mpas
    @example Click_LightRanger4_PIC32.mpas
    @example Click_LightRanger4_DSPIC.mpas
    @example Click_LightRanger4_AVR.mpas
    @example Click_LightRanger4_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __lightranger4_driver.h

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
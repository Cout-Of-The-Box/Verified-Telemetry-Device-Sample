/* Copyright (c) Microsoft Corporation.
   Licensed under the MIT License. */

#ifndef _SAMPLE_VT_DEVICE_DRIVER_H
#define _SAMPLE_VT_DEVICE_DRIVER_H

#include <stdint.h>
#include "vt_device_driver.h"
#include "stm32f4xx_hal.h"

/* ADC Definitions */
extern uint16_t vt_adc_id_sensor_1;
extern uint16_t vt_adc_id_sensor_2;

extern ADC_HandleTypeDef vt_adc_controller_sensor_1;
extern ADC_HandleTypeDef vt_adc_controller_sensor_2;

extern uint32_t vt_adc_channel_sensor_1;
extern uint32_t vt_adc_channel_sensor_2;

/* GPIO Definitions */
extern uint16_t vt_gpio_id_sensor_1;
extern uint16_t vt_gpio_id_sensor_2;

extern GPIO_TypeDef* vt_gpio_port_sensor_1;
extern GPIO_TypeDef* vt_gpio_port_sensor_2;

extern uint16_t vt_gpio_pin_sensor_1;
extern uint16_t vt_gpio_pin_sensor_2;

#endif // _SAMPLE_VT_DEVICE_DRIVER_H

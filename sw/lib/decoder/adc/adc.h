/**
 * @file adc.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#pragma once

#include <stdint.h>

/**
 * @brief adc_init initializes the ADC at pins <TODO: STATE PINS HERE> to 
 * 
 * @return int 0 if initialization was successful or a positive integer if an
 *         error occurred. <TODO: LIST ERROR CODES AND POSSIBLE ERROR EVENTS>
 */
int adc_init(void);

/**
 * @brief adc_get returns the value stored within the ADC FIFO
 * 
 * @return int value from the ADC
 */
int adc_get(void);
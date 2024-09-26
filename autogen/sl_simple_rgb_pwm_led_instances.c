/***************************************************************************//**
 * @file
 * @brief Simple RGB PWM LED Driver Instances
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#if defined(SL_COMPONENT_CATALOG_PRESENT)
#include "sl_component_catalog.h"
#endif

#if defined(SL_CATALOG_GPIO_PRESENT)
#include "sl_gpio.h"
#else
#include "em_gpio.h"
#endif

#include "sl_simple_rgb_pwm_led.h"

#include "sl_simple_rgb_pwm_led_RGB_ex1_config.h"



sl_led_pwm_t red_rgb_ex1 = {
  .port = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RED_PORT,
  .pin = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RED_PIN,
  .level = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION - 1,
  .polarity = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RED_POLARITY,
  .channel = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RED_CHANNEL,
#if defined(SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RED_LOC)
  .location = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RED_LOC,
#endif
  .timer = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_PERIPHERAL,
  .frequency = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_FREQUENCY,
  .resolution = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION,
};

sl_led_pwm_t green_rgb_ex1 = {
  .port = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_GREEN_PORT,
  .pin = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_GREEN_PIN,
  .level = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION - 1,
  .polarity = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_GREEN_POLARITY,
  .channel = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_GREEN_CHANNEL,
#if defined(SL_SIMPLE_RGB_PWM_LED_RGB_EX1_GREEN_LOC)
  .location = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_GREEN_LOC,
#endif
  .timer = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_PERIPHERAL,
  .frequency = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_FREQUENCY,
  .resolution = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION,
};

sl_led_pwm_t blue_rgb_ex1 = {
  .port = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_BLUE_PORT,
  .pin = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_BLUE_PIN,
  .level = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION - 1,
  .polarity = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_BLUE_POLARITY,
  .channel = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_BLUE_CHANNEL,
#if defined(SL_SIMPLE_RGB_PWM_LED_RGB_EX1_BLUE_LOC)
  .location = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_BLUE_LOC,
#endif
  .timer = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_PERIPHERAL,
  .frequency = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_FREQUENCY,
  .resolution = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION,
};

sl_simple_rgb_pwm_led_context_t simple_rgb_pwm_rgb_ex1_context = {
  .red = &red_rgb_ex1,
  .green = &green_rgb_ex1,
  .blue = &blue_rgb_ex1,

  .timer = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_PERIPHERAL,
  .frequency = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_FREQUENCY,
  .resolution = SL_SIMPLE_RGB_PWM_LED_RGB_EX1_RESOLUTION,
};

const sl_led_rgb_pwm_t sl_simple_rgb_pwm_led_rgb_ex1 = {
  .led_common.context = &simple_rgb_pwm_rgb_ex1_context,
  .led_common.init = sl_simple_rgb_pwm_led_init,
  .led_common.turn_on = sl_simple_rgb_pwm_led_turn_on,
  .led_common.turn_off = sl_simple_rgb_pwm_led_turn_off,
  .led_common.toggle = sl_simple_rgb_pwm_led_toggle,
  .led_common.get_state = sl_simple_rgb_pwm_led_get_state,
  .set_rgb_color = sl_simple_rgb_pwm_led_set_color,
  .get_rgb_color = sl_simple_rgb_pwm_led_get_color,
};



void sl_simple_rgb_pwm_led_init_instances(void)
{
  
  sl_led_init((sl_led_t *)&sl_simple_rgb_pwm_led_rgb_ex1);
  
}

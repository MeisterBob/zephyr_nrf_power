/* Copyright (C) metraTec GmbH - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Gerhard Jörges <joerges@metratec.com>, March 2022
 */

#include <drivers/gpio.h>

/******************************************************************************/

void main(void)
{
    /* setup LEDs */
    struct gpio_dt_spec led0 =
        GPIO_DT_SPEC_GET_OR(DT_ALIAS(led0), gpios, { 0 });
    gpio_pin_configure_dt(&led0, GPIO_OUTPUT_INACTIVE);

    while (1) {
        k_sleep(K_MSEC(9975));
        gpio_pin_toggle_dt(&led0);
        k_sleep(K_MSEC(25));
        gpio_pin_toggle_dt(&led0);
    }
}

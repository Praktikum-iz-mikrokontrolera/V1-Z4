/* Praktikum iz mikrokontrolera Vezbe 1 Zadatak 4
 * Copyright (c) 2023 ETF
 * SPDX-License-Identifier: Apache-2.0
 */

// Obavezna biblioteka
#include "mbed.h"


// Perioda signala generisanog ISM
#define PERIOD_MS     20


int main()
{
    // Instanciranje led
    PwmOut led(LED1);

    // Postavljanje ispunjenost periode
    led.write(0.5);
    // Postavljanje periode
    led.period_ms(PERIOD_MS);
    // Uvek je neophodan deo koda koji se stalno izvrsava cak i ako nista nema u telu tog dela
    while(true){}
}


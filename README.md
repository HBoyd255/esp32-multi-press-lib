# ESP32 Multi Press Lib

<!-- Harry Boyd - 22/11/2024 - github.com/hboyd255 -->

This is an attempt at creating a library that will attach an interrupt to an
ESP32 pin, but also allow for a integer to be passed into the ISR representing
the number of times the button was pressed in a short span (For double or
triple presses and so on).


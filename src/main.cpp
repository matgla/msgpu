#include <cstdint>

#include <pico/stdlib.h>

int main() 
{
    constexpr uint32_t LED_PIN = 25; 
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) 
    {
        gpio_put(LED_PIN, 1); 
        sleep_ms(250);
        gpio_put(LED_PIN, 0);
        sleep_ms(250);
    }
}

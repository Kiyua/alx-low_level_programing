#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */
void jack_bauer(void)
{
    int hour, min;
    int hour1, hour2, min1, min2;
    for (hour = 0; hour < 24; hour++)
    {
        hour1 = hour / 10;
        hour2 = hour % 10;
        for (min = 0; min < 60; min++)
        {
            min1 = min / 10;
            min2 = min % 10;
            
            _putchar('0' + hour1);
            _putchar('0' + hour2);
            _putchar(':');
            _putchar('0' + min1);
            _putchar('0' + min2);
            _putchar('\n');
        }
    }
}


#include <stdio.h>

/* print Celsius-Fahrenheit table
   for fahr = 0, 20, ..., 300, floating-point version
   with a header for the table
*/

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -20;    /* lower limit of temperature table */
    upper = 150;  /* upper limit */
    step = 5;    /* step size */

    celsius = lower;

    printf(" °C  |   °F\n");
    printf("-----|------\n");

    while (celsius <= upper) {
        fahr = 32.0 + (9.0/5.0) * celsius;
        printf("%3.0f  |%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
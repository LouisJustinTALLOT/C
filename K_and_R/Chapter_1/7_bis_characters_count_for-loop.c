#include <stdio.h>

/* counts characters in input ; 2nd version : for-loop */

main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
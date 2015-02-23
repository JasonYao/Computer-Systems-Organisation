#include<stdio.h>
#include<stdlib.h>

int main()
{
        double *p;
        p = (double *) malloc(24);
        printf("%d\n", sizeof(p));
        free(p);
        return 0;
} // End of the main function


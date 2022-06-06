#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Documentation - main : Exercise that lights up negative numbers from positives ones*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*  */
	 if (n>0)
        printf("%d is positive",n);
    else if (n<0)
        printf("%d is negative",n);
    else
        printf("%d is zero",n);
	return (0);
}

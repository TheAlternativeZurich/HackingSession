/*
 * This program is a super awesome numerical simulation of some super duper
 * new ultra cool physcial thingy. And of course it takes forever to run,
 * so you have to run on the ultra modern amazingly new TheAlt super cluster.
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main() {
    printf("Starting calculation...\n");

    sleep(2);

    // some cleverly named variables
    int a, b, c;

    // initialize the variables
    a = 42;
    b = 0;
    c = 0;

    //actually do the calculation
    b = c++;
    b++;
    int temp = a;
    a = b + c;

    srand(time(NULL));
    int r;
    int i = 200000;
    while (i --> 0) {
    	r = rand();
	printf("%d \n", r);
	sleep (0.8);
	if (i == 150000) {
		printf ("\n preprocessing done\n");
		sleep(1);
	} else if (i == 1000) {
		printf("\n Main calculations done. Starting Clean up \n");
		sleep(1);
	}
    }

    c = temp+1;
    a = temp;
    int res = a;

    char result[3];
    result[2] = 0;

    if (res == 42) {
        // we are happy the calculation worked
        snprintf(result, 3, "%d", res);
    } else {
        result[0] = '4'; // correct the wrong calculation
        result[1] = '2';
    }

    // save the result in the res file
    FILE *fp;
    fp = fopen("AmazingResults.txt", "w+");
    fputs(result, fp);
    fclose(fp);

    // notify the user
    printf("the answer to everything has just been calculated\n");
    return 0;
}

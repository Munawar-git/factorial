#include <stdio.h>
#include <stdlib.h>


// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int usage(void) {
    printf("\nUsage\n");
    printf("============================\n");
    printf("factorial <positive-integer>\n");
    printf("============================\n");
    return(0);
}

int main(int argc, char *argv[]) {  
    if(argc<=1) {
        printf("ERROR: No argument found...\n");
        usage();
        exit(1);
     }
    int num;
    num = atoi(argv[1]);
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        usage();
    }
    else
        printf("Factorial of %d is %llu.\n", num, factorial(num));

    return 0;
}


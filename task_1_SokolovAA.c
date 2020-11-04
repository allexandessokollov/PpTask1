#include <stdio.h>
#include <math.h>



void main()
{

    #pragma omp parallel
    {

        float a =  95.0, b = 0.02;

        printf("\n\n\nUsing float\n\n");
        
        float part1 = pow(a + b , 2);
        printf("%e", part1);
        printf("\n\n");

        float part2 = pow(a, 2);
        printf("%e", part2);
        printf("\n\n")
        ;
        float part3 = 2 * a * b;
        printf("%e", part3);
        printf("\n\n");

        float numerator = part1 - (part2 + part3);
        printf("%e", numerator);
        printf("\n\n");

        float denominator = pow(b, 2);        
        printf("%e", denominator);
        printf("\n\n");

        float result = numerator / denominator;
        printf("result is %e", result);
        printf("\n\n\n\n\n\n");



        printf("Using double\n\n");
        double a1 =  95.0, b1 = 0.02;
        
        double part11 = pow(a1 + b1 , 2);
        printf("%e", part11);
        printf("\n\n");

        double part21 = pow(a1, 2);
        printf("%e", part21);
        printf("\n\n")
        ;
        double part31 = 2 * a1 * b1;
        printf("%e", part31);
        printf("\n\n");

        double numerator1 = part11 - (part21 + part31);
        printf("%e", numerator1);
        printf("\n\n");

        double denominator1 = pow(b1, 2);        
        printf("%e", denominator1);
        printf("\n\n");

        double result1 = numerator1 / denominator1;
        printf("result is %e", result1);
    
    }
    
}

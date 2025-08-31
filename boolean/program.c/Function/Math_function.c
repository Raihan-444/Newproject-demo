/*
#include<stdio.h>
#include<math.h>
int main(){
    printf("%.1f", sqrt(16));
}
    
   #include<stdio.h>
   #include<math.h>
   int main(){
    printf("%d\n", (int)pow(5,3));
    return 0;
   }
    */
   #include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
    }
}
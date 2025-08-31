
#include <stdio.h>
int main(){

    int number,i;
    int isprime = 1;
    printf("Enter a number :");
    scanf("%d", &number);
     
    
       if (number <=1){
        
isprime = 0;
            
        } else {
            for(i = 2 ; i<number ; i++){
                if(number % i ==0 ){
                    isprime = 0;
                    break;
                }
            }
        }
    

     if(isprime){
        printf("The number is prime.\n");
     } else {
        printf("The number is not prime.");
     }
    return 0;
    }

    

 
    


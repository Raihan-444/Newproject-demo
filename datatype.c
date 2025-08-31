/*
personal datatype:
#include<stdio.h>
int main(){
printf(" Raihan ali\n");
printf("Institute of Science and Technology\n");
printf("01305343645");

return 0;
}

//integer datatype: 
#include<stdio.h>
int main(){
    
   int num1= 20;
   int num2= 30; 
   printf("Numbers are %d, %d\n",num1,num2);
    return 0;
}

    
//Write a programme that prints floating,double,character
#include<stdio.h>
int main(){
    float num1= 110.5;
    double num2= 29.446324;
    char ch='r';
    printf("number1 is %.1f\n",num1);
    printf("Number2 is %lf\n",num2);
    printf("character is %c",ch);
}

#include<stdio.h>
int main(){
    int num;
    printf("enter an integer: ");
    scanf("%d",&num);
    printf("you have pressed : %d\n",num);
}    
 
#include<stdio.h>
int main(){
    int num1,num2;
    printf(" enter the numbers :");
    scanf("%d %d",&num1,&num2);
 printf("numbers are :%d %d\n", num1,num2);
    return 0;
}

#include<stdio.h>
int main(){
    float num1,num2;
    printf("enter the floating numbers :");
    scanf("%f %f", &num1, &num2);
    printf("numbers are : %.1f %.1f\n",num1, num2);
    return 0;
}

#include<stdio.h>
int main(){
    char a=65,b=66,c=67;
   printf("%c%c%c", a, b, c);
    return 0;
}

   //string datatype:
#include<stdio.h>
int main(){
    char mytext[]="Hello world";
    printf("%s",mytext);
    return 0;
}
    
#include<stdio.h>
int main(){
    int f1= 33e3;
    double d1= 10E10;
    printf("%d\n",f1);
    printf("%lf",d1);
    return 0;
}
    
//Memory size:
#include <stdio.h>
int main(){
    int myInt;
    float myFloat;
    double mydouble;
    char mychar;
    printf("%zu\n", sizeof(myInt)); 
     printf("%zu\n", sizeof(myFloat)); 
      printf("%zu\n", sizeof(mydouble)); 
      printf("%zu\n", sizeof(mychar));
      return 0; 


}

// Create variables of different data types:
#include<stdio.h>
int main(){
    int items=50; 
    float cost_per_items=9.9;
    float total_cost= items * cost_per_items;
    char currency='$';

    printf("Number of items : %d\n",items);
    printf("Cost per items : %.2f %c\n",cost_per_items,currency);
    printf("Total cost= %.2f %c",total_cost,currency);
    return 0;
}
     
    //Conversion C programming:
     #include<stdio.h>
     int main(){
        
    int x=5;
    int y=2;
    int sum = 5/2;
    printf("%d",sum);
    return 0;

     }
    
   #include<stdio.h>
   int main(){
    int num1=5;
    int num2=2;
    float mynum= (float) 5/2;
    printf("%.1f",mynum);
    return 0;
   }
*/
//Real life example:
#include<stdio.h>
int main(){
    int maxScore = 500;
    int userScore = 423;
    float percentage = (float) maxScore/userScore * 100.0;
    printf("User's percentage is %.2f",percentage);
    return 0;
}
    
    
     

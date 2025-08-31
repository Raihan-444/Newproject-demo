/*
#include<stdio.h>
int main(){
    int num = 25;
    int *ptr = &num;
    printf("%d\n", num);
    printf("%p\n", &num);
    printf("%d\n", *ptr);
    return 0;
}
    
   //pointers and arrays :
   #include <stdio.h>
   int main (){
    int num[4] = {25,50,75,100};
    int i; 
    for( i = 0; i<4; i++){
        printf("%d\n",num[i]);
        
    }
   return 0;
   }
   
  #include <stdio.h>
  int main(){
    int myNum;
    printf("%zu", sizeof(myNum));
    return 0;
  }
    

    #include<stdio.h>
    int main(){
        int myNumbers[4]= {25,50,75,100};
        printf("%p\n", myNumbers);
        printf("%p\n", &myNumbers[0]);
        return 0;
    }
        
       #include<stdio.h>
       int main(){
        int num[4]= {25,50,75,100};
        printf("%d", *num);
        return 0;
       }
    

    #include<stdio.h>
    int main(){
        int myNumbers[4] = {25,50,75,100};
        int *ptr = myNumbers;
        int i;
        for (i = 0; i<4 ; i++){
            printf("%d\n", *(ptr+i));
           }
           return 0;
    }
    */

     #include<stdio.h>
    int main(){
    int myNumbers[4] = {25,50,75,100};
    
    *(myNumbers)= 12;
    *(myNumbers +1) = 15;

printf("%d\n", *(myNumbers));
printf("%d\n",*(myNumbers+1));

  return 0;
 }

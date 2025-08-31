/*
#include <stdio.h>
int main(){
    int i = 0;
    while (i < 5){

        printf("%d\n",i);
        i++;
    }
    return 0;
    
}
    

    #include <stdio.h>
    int main(){
        int countdown = 3;
        while (countdown>0){
            printf("%d\n",countdown);
            countdown --;
        }
        printf("Happy New Year");
        return 0;   
    }
    

    #include<stdio.h>
    int main(){
        int i = 0;
        do{
            printf("%d\n",i);
            i++;
        }
        while ( i < 5);
        return 0;
    }
    

    #include <stdio.h>
    int main(){
        int i = 10;
        do{
            printf("i is %d\n",i);
            i++;
        } 
        while (i<5);
        return 0;
    }
        

        #include<stdio.h>
        int main(){
            int number;
            do {
                printf("Enter a Positive number :");
                scanf("%d", &number);
            }
            while (number>0);
            return 0;
            
        }
        
       //Even number in loop:
       #include <stdio.h>
       int main(){
        int i = 0;
        while (i<= 10)
        {
            printf("%d\n",i);
            i +=2;
        }
        return 0;
       }
       

       #include<stdio.h>
       int main(){
        int numbers = 12345; 
        int revNumbers = 0;
        while (numbers){
            revNumbers = revNumbers * 10 + numbers %10;
            numbers /= 10;
        }
        printf("%d\n",revNumbers);
        return 0;
        
        
       }
        

        #include<stdio.h>
        int main(){
            int dice = 1;
            while (dice <= 6){
            if (dice<6){
            printf("No Yatzy\n");
            }else {
             printf("Yatzy!\n");
            }
             dice = dice+1;  
        }
        return 0;
    }
      
     #include<stdio.h>
     int main(){
        int i;
        for (i=0; i<=10; i = i + 2){
        printf("%d\n",i);
     }
     return 0;
    }


#include<stdio.h>
int main(){
    int sum = 0; 
    int i;
    for (i=1;i<=5;i++){
        sum = sum + i;
    }
    printf("sum is %d\n",sum);
    return 0;
}


#include<stdio.h>
int main(){
    int i;
    for ( i=5;i>0;i--){
        printf("%d\n",i);
    }
    return 0;
}
    

    #include <stdio.h>
    int main(){
        int i,j;

        for(i=1;i<=2;++i){
            printf("Outer :%d\n",i);
            for (j=1;j<=3;++j){
                printf("Inner : %d\n",j);

            }
            

        }
        return 0;
    

 #include<stdio.h>
 int main(){
    int i,j;
    for (i = 1;i <= 3;i++){
        for(j = 1;j <= 3;j++){
        printf("%d ", i * j);
    }
    printf("\n");
    
 }
 return 0;
}
 

#include<stdio.h>
int main(){
    int number = 2;
    int i;
    for(i = 1;i <= 10;i++){
        printf("%d x %d = %d\n",number,i ,number*i);
    }
}
 
   
 //Break and Continue:
 #include<stdio.h>
 int main(){
    int i;
    for(i = 0; i<10 ; i++){
        if(i == 4){
             break;
            }
       printf("%d\n",i);
    }
    return 0;
 }
 */

  #include<stdio.h>
 int main(){
    int i;
    for(i = 0; i<10 ; i++){
        if(i == 4){
             continue;
            }
       printf("%d\n",i);
    }
    return 0;
 }
/*
#include <stdio.h>
int main(){
    char greetings[]= "Hell0 World!";
     greetings[0]= 'h';
    printf("%s",greetings);
    return 0;
}
   
  
   #include <stdio.h>
   int main(){
    char carName[] = "Volvo";
    int lenth = sizeof (carName) / sizeof (carName[0]);
    int i;
    for (i= 0; i<lenth ; ++i){
        printf("%c\n",carName[i]);
    }
    return 0;
   }
   
  #include<stdio.h>
  int main(){
    char greetings[] = {'H','e','l','l','o',' ', 'W','o','r','l','d','\0'};
    char greetings2[]="Hello World";
    printf("%s\n",greetings);
    printf("%s\n",greetings2);
  }

   //Real life example:
   #include<stdio.h>
   int main(){
    char  message[]="Good to see you";
    char fname[] = "John";
    printf("%s , %s !",message , fname);
    return 0;
   }


//Special Characters:
#include<stdio.h>
int main(){
    char text[] = "We are the so-called \"Vikings\" from the  north.";
    printf("%s", text);
    return 0;


}

#include<stdio.h>
int main(){
    char txt[] = "It\'s alright.";
    printf("%s",txt);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main(){
    char alphabet[]= "abcdefghijklmnopqrstuvwxyz";
    printf("%zu\n",strlen(alphabet));
    printf("%zu",sizeof (alphabet));
    return 0;
}
    

    //Concatenate Strings:

    #include<stdio.h>
    #include<string.h>
    int main(){
         char str1[25]= "Hello ";
         char str2[]="World!";
         strcat(str1 , str2);
         printf("%s",str1);
         return 0;

    
    }
    

    //Copy strings:

    #include<stdio.h>
    #include<string.h>
    int main(){
        char str1[20] = "Hello World!";
        char str2[20];
        strcpy(str2 , str1);
        printf("%s",str2);
        return 0;

    }
    

    //Compare Strings:
    #include<stdio.h>
    #include<string.h>
    int main(){
        char str1[15] = "Hello";
        char str2[20] = "Hello";
        char str3[20] = "Hi";
        printf("%d\n", strcmp(str1 , str2));
        printf("%d\n", strcmp(str1 , str3));
        return 0;
    }
        
     //User Input:

     #include<stdio.h>
     int main(){
        int myNum;
        printf("Type a number : \n");
        scanf("%d", &myNum);
        printf("Your number is : %d", myNum);
     }
        

        #include<stdio.h>
        int main(){
            char firstname[30];
            printf("Type your full  name : \n ");
            scanf("%s", &firstname);
            printf(" Hello %s ", firstname);
            return 0;
        }
        */
       //Memory Address :
       #include<stdio.h>
       int main(){
        int myAge = 30;
        printf("%p", &myAge);
        return 0;
       }

// #include<stdio.h>
//  int main()
//  {
//     printf("this is my first programme");
    
//  }

/*
#include<stdio.h>
int main(){
   int mynumbers[]={1,2,3,4,5};
   mynumbers[3] = 10;
   printf("%d\n",mynumbers[3]);

}
   

   #include<stdio.h>
   int main(){
      int mynumbers[]={25,50,75,100};
      int i;
      for (i=0; i<4; i++){// Here 4 is element number
         printf("%d\n",mynumbers[i]);
      }
      return 0;
   }
   

   #include<stdio.h>
   int main(){
      int myNumbers[4];
      myNumbers[0] = 25;
      myNumbers[1]= 50;
      myNumbers[2]= 75;
      myNumbers[3]= 100;
      printf("%d\n", myNumbers[3]);
      return 0;
   }
   
  //Sizeof matter:
  #include<stdio.h>
  int main(){
   int mynumbers [] = {10,20,30,40,50};
   printf("%zu", sizeof(mynumbers));
  }
  
 #include<stdio.h>
 int main(){
   int myNumbers[] = {10,20,30,40,50};
   int lenth = sizeof(myNumbers)/sizeof(myNumbers[0]);
   printf("%d",lenth);
   return 0;
 }
 
#include<stdio.h>
int main(){
   int myNumbers[]={25,50,75,100};
   int lenth = sizeof(myNumbers)/sizeof(myNumbers[0]);
   int i;
   for (i=0;i<lenth;i++){
      printf("%d\n",myNumbers[i]);
   }
   return 0;
}


#include<stdio.h>
int main(){
   int Ages[] = {12,13,45,56,78,87,23};
   float avg,sum = 0;
   int i;
  int  lenth = sizeof(Ages)/sizeof(Ages[0]);
  for (i = 0; i<lenth; i++){
   sum += Ages[i];
   avg  = sum / lenth;
  }
  printf("The Average age is :%.2f",avg);
  return 0;

}
  

  #include<stdio.h>
  int main(){
    int Ages[] = {12,13,45,56,78,87,23};
    int i;
    int lenth = sizeof(Ages)/sizeof(Ages[0]);

    int lowestAge = Ages[0];

    for(i = 0; i<lenth ;i++){

      if( lowestAge>Ages[i]){
         lowestAge = Ages[i];
      }

}
 printf("The lowest Age is : %d",lowestAge);
return 0;
  }
  
 #include<stdio.h>
 int main(){
   int matrix[2][3]= {{1,3,4}, {2,4,6,}};
   printf("%d\n",matrix[0][1]);
   return 0;
 }
   
  //2d dimentional arrays:
  #include<stdio.h>
  int main(){
   int matrix[2][3]= {{1,2,3},{4,5,6}};
   matrix [0][0] = 7;
   printf("%d\n", matrix[0][0]);
   return 0;
  }
   
*/
    #include<stdio.h>
  int main(){
   int matrix[2][3]= {{1,2,3},{4,5,6}};
    int i,j;
         for(i = 0 ; i < 2  ; i++){
            for(j = 0 ; j <  3 ; j++){
              printf("%d\n",matrix[i][j]);
            }
         }
          
return 0;
}

 

   
/* 
 #include<stdio.h>
 void Myfunction(){
    printf("I will go to exicuted");
}
int main(){
    Myfunction();
    return 0;
}
    
   #include<stdio.h>
   void calculatesum(){
    int x=3;
    int y = 4;
    int sum = x+y;
    printf("The sum of x+y is:%d",sum);
   }
   int main(){
    calculatesum();
    return 0;
   }
   
  //C function parameters:
  #include<stdio.h>
  void myfunction(char name []){
    printf("Hello %s\n",name);
  }
  int main(){
    myfunction("Liam");
     myfunction("Siam");
      myfunction("Sakil");
  }

  
 #include<stdio.h>
 void myfunction(int x, int y){
    int sum = x+y;
    printf("The sum of %d + %d = %d\n", x,y,sum);
 }
 int main(){
    myfunction(4,5);
    myfunction(3,5);
    myfunction(2,5);
    return 0;
 }
    
   #include<stdio.h>
   void myfunction(int mynumbers[5]){
 for (int i = 0; i<5 ; i++){
 printf("%d\n",mynumbers[i]);
 
 }
}
int main(){
   int mynumbers[5] = {10,20,30,40,50};
   myfunction(mynumbers);
}
   
  #include<stdio.h>
  int myfunctions(int x){
   return 5+x;
  }
  int main(){
   printf("Result is : %d",myfunctions(3));
  }
   
  #include<stdio.h>
  int myfunction(int x, int y){
   return x+y;
  }
  int main(){
   int result = myfunction(5,3);
   printf("Result is : %d", result);
  }

#include<stdio.h>
int mynumbers(int x, int y){
return x+y;
}
int main(){
  int resultArr [4];
resultArr[0] = mynumbers(4,6);
resultArr[1] = mynumbers(3,4);
resultArr[2] = mynumbers(6,7);
 resultArr[3] = mynumbers(8,7);
   for(int i = 0; i<4 ; i++){
     printf("Result%d is = %d\n", i+1, resultArr[i]);
   }
  return 0;
}
  
 #include<stdio.h>
 float tocelceus(float farenheit){
   return(5.0/9.0)*(farenheit-32);
 }
 int main(){
   float f_value = 98.4;
   float result =tocelceus(f_value);
   printf("Farenheit value is : %.2f\n",f_value);
   printf("Convert farenheit to celceus : %.2f",result);

 }
 
//C scope:
#include<stdio.h>
int x = 5;
void myfunction(){
   int x = 22 ;
   printf("%d\n",x);
}
int main(){
   myfunction();
   printf("%d", ++x);
   return 0;
}
*/
 

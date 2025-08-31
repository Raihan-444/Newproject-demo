/*
#include<stdio.h>
#include<string.h>
struct mystructure
{
  
int mynumber;
char myletter;
char mystring[50];
  
};
int main(){
    struct mystructure s1 = {14, 'R', "validity"};
    struct mystructure s2;
   s2.mynumber = 15;
   s2.myletter = 'S';
   strcpy(s2.mystring,"Super");
   printf("%d %c %s",s2.mynumber,s2.myletter,s2.mystring);
   return 0;    
}


#include<stdio.h>
struct Car
{
    char brand[50];
    char model[50];
    int year;
};
int main(){
    struct Car car1 = {"BMW","X5",1999};
    struct Car car2 = {"Ford","Mustang", 1969};
     struct Car car3 = {"Toyota","Corolla", 2011};
     printf("%s %s %d\n", car1.brand,car1.model,car1.year);
    printf("%s %s %d\n", car2.brand,car2.model,car2.year);
    printf("%s %s %d\n", car3.brand,car3.model,car3.year);
    return 0;
}
*/
//structs and pointers:
#include<stdio.h>
struct Car
{
    char Brand[50];
    int year;
};
    void updateyear(struct Car *c){
     c->year = 2025;
    }
    
int main(){
    struct Car mycar = {"Toyota",1999};
    updateyear(&mycar);
    printf("Car Brand : %s\n",mycar.Brand);
    printf("Year : %d\n",mycar.year);
    return 0;
        
}

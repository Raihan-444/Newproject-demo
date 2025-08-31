#include<stdio.h>
struct mystructure
{
  int numbers;
  char letter;
};
int main(){
    struct mystructure s1;
    s1.numbers = 20;
    s1.letter = 'R';
    printf("The number is : %d\n",s1.numbers);
    printf("The Letter is : %c\n",s1.letter);
    return 0;
    
}

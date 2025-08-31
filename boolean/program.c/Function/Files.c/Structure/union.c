#include<stdio.h>
union myunion
{
    int mynum;
    char myletter;
};
int main(){
    union myunion u1;
    u1.mynum = 49;
    u1.myletter = 'R';
    printf("The number is : %d\n",u1.mynum);
    printf("The letter is : %c\n",u1.myletter);
    return 0;
}

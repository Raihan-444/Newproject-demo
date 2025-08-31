/*
#include<stdio.h>
struct mystructure
{
	int mynumber;
	char myletter;
};
int main(){
	struct mystructure s1;
	struct mystructure s2;
	s1.mynumber = 10;
	s1.myletter = 'R';
	s2.mynumber = 50;
	s2.myletter ='S';
	printf("The first number is : %d\n",s1.mynumber);
	printf("The first letter is : %c\n",s1.myletter);
	printf("The second number is : %d\n",s2.mynumber);
	printf("The second letter is : %c\n",s2.myletter);
	return 0;
	
}
	*/

	#include<stdio.h>
	void myfunction(){
		printf("It just to be executed!");
	}
	int main(){
		myfunction();
		return 0;
	}

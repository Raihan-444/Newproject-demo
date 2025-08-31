/*
#include<stdio.h>
 int main(){
    FILE *fptr;
    fptr = fopen("filename.txt","w");
    fprintf(fptr,"Some text");
    fclose(fptr);
    return 0;
 }
    
 

 #include<stdio.h>
 int main(){
    FILE *fptr;
    fptr = fopen("filename.txt", "a");
fprintf( fptr, "\nHello World!");
fclose(fptr);
return 0;
 }


#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("filename.txt", "r");
    char mystring[100];
    while (fgets(mystring,100,fptr)){
    printf("%s",mystring);
    }
    fclose(fptr);
    return 0;


#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("ordinaryfolder.txt","r");
    if(fptr==NULL){
        printf("This folder is not found!");
    }
    fclose(fptr);
    return 0;
}
    */

#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("filename.txt","r");
    char mystring[100];
    if (fptr!= NULL){
    
     while (fgets(mystring,100,fptr)){
     
        printf("%s",mystring);
     }
     
    } else{
        printf("Unable to find the file.");
    }
    fclose(fptr);
    return 0;
}
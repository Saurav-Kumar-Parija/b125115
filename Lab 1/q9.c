#include<stdio.h>
struct Student{
    int Roll_Number;
    float cgpa;
    char Name[50];
};
    int main(){
struct Student s[5];
    int i;
    printf("||Enter Student Details||\n");
    for(i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &s[i].Roll_Number);
        
        printf("Enter Name: ");
        
        scanf("%s",s[i].Name); 
        
        printf("Enter cgpa: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("Students's whose cgpa is greater than or equal to 8.0 are: \n");
    for(i = 0; i < 5; i++){
        if(s[i].cgpa>=8.0){
        printf("%s\n",s[i].Name);
        }
    } 
    }
    
#include<stdio.h>
struct Student{
    int Roll_Number,age,cgpa;
    char Name[50];

};
int main(){
struct Student s1;
printf("Enter Student's name: ");
fgets(s1.Name,sizeof(s1.Name),stdin);
printf("Enter Your Age: ");
scanf("%d",&s1.age);

printf("Enter your Roll no: ");
scanf("%d",&s1.Roll_Number);

printf("Enter your cgpa: ");
scanf("%d",&s1.cgpa);

//display
printf("||Student's Details||\n");
printf("Student's name: %s",s1.Name);
printf("Your Age: %d\n",s1.age );
printf("Your roll no.: %d\n",s1.Roll_Number);
printf("Your cgpa: %d",s1.cgpa );

}


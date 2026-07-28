#include<stdio.h>
struct Student{
    int Roll_Number,marks_c,marks_maths,marks_physics;
    char Name[50];
};
int main(){
struct Student s1;
printf("Enter Student's name: ");
fgets(s1.Name,sizeof(s1.Name),stdin);

printf("Enter your Roll no: ");
scanf("%d",&s1.Roll_Number);

printf("Enter Your Marks in C: ");
scanf("%d",&s1.marks_c);

printf("Enter Your Marks in Maths: ");
scanf("%d",&s1.marks_maths);

printf("Enter Your Marks in Physics: ");
scanf("%d",&s1.marks_physics);

float marks,average;
marks=s1.marks_c+s1.marks_maths+s1.marks_physics;
average=marks/3.0;
//display
printf("Your Total marks:%f \nYour Average:%f",marks,average);

}




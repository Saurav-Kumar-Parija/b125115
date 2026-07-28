#include<stdio.h>
struct Date{
    int day,month,year;
};
struct Student{
    int rollNumber;
    char name[50];
    struct Date dob;
};
int main(){
    struct Student s;
    printf("Enter Roll Number: ");
    scanf("%d",&s.rollNumber);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Date of Birth(Day Month Year): ");
    scanf("%d %d %d",&s.dob.day,&s.dob.month,&s.dob.year);

    printf("\n--- Student Information ---\n");
    printf("Roll Number: %d\n",s.rollNumber);
    printf("Name: %s\n",s.name);
    printf("Date of Birth : %02d/%02d/%d\n",s.dob.day,s.dob.month,s.dob.year);
}

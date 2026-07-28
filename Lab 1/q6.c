#include<stdio.h>
struct Distance{
    int feet,inches;
};
int main(){
struct Distance s1,s2;
printf("Enter feet of 1st person:\n");
scanf("%d",&s1.feet);
printf("Enter inches of 1st person:\n");
scanf("%d",&s1.inches);

printf("Enter feet of 2nd person:\n");
scanf("%d",&s2.feet);
printf("Enter inches of 2nd person:\n");
scanf("%d",&s2.inches);

printf("Total Distance:%d feet and %d inches",s1.feet+s2.feet,s1.inches+s2.inches);

}
#include<stdio.h>
struct Rectangle{
    float length,breadth;
};
int main(){
struct Rectangle s1;
printf("Enter length: ");
scanf("%f",&s1.length);
printf("Enter Breadth: ");
scanf("%f",&s1.breadth);

int area,perimeter;
printf("Area:%.2f\nPerimeter:%.2f",s1.length*s1.breadth,2*(s1.length+s1.breadth));
}
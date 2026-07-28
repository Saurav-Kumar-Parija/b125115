#include<stdio.h>
struct Product{
    int Price,Product_ID,quantity;
    char Name[50];
};
int main(){
    struct Product s1;
printf("Enter Product's name: ");
fgets(s1.Name,sizeof(s1.Name),stdin);

printf("Enter your Price: ");
scanf("%d",&s1.Price);

printf("Enter your Quantity: ");
scanf("%d",&s1.quantity);

printf("Enter your Product ID: ");
scanf("%d",&s1.Product_ID);

//display
int Total=s1.Price*s1.quantity;
printf("Total cost of all products: %d",Total);
}
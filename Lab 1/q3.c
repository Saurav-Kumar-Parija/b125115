#include<stdio.h>
struct Book{
    int Price,Book_ID;
    char Name[50];
    char Title[50];
};
int main(){
struct Book s1;
printf("Enter Author's name: ");
fgets(s1.Name,sizeof(s1.Name),stdin);
printf("Enter Book's Title: ");
fgets(s1.Title,sizeof(s1.Title),stdin);

printf("Enter your Price: ");
scanf("%d",&s1.Price);

printf("Enter your Book ID: ");
scanf("%d",&s1.Book_ID);

//display
printf("        || Book's details ||    \n");

printf("Author's name: %s",s1.Name);
printf("Book Price: %d\n",s1.Price );
printf("Book ID: %d\n",s1.Book_ID);
printf("Book Title: %s\n",s1.Title );

}
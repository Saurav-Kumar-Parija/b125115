#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i,max_index=0;
    printf("Enter Employee Details\n");
    for(i = 0; i < 5; i++) {
        printf("Enter details for Employee: %d\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        
        printf("Enter Name: ");
        scanf("%49s", emp[i].name); 
        
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
    for(i=1;i<5;i++){
        if(emp[i].salary>emp[max_index].salary)
        max_index=i;
    }

    printf("\n--- Displaying Records Of The Employee Having The Highest Salary---\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
    printf("%-10d %-20s %-10.2f\n", emp[max_index].id, emp[max_index].name, emp[max_index].salary);
    

}

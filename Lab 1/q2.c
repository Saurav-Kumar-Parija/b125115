#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;
    printf("Enter Employee Details\n");
    for(i = 0; i < 3; i++) {
        printf("Enter details for Employee: %d\n", i + 1);
        
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        
        printf("Enter Name: ");
        scanf("%49s", emp[i].name); 
        
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- Displaying Employee Records ---\n");
    printf("%-10s %-20s %-10s\n", "ID", "Name", "Salary");
    
    for(i = 0; i < 3; i++) {
        printf("%-10d %-20s %-10.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }

}

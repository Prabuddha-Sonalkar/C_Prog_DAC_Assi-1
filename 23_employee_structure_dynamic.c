#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    int n, i;
    struct Employee *emp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // dynamically allocate memory
    emp = (struct Employee *)malloc(n * sizeof(struct Employee));

    // input details
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Designation: ");
        scanf("%s", emp[i].designation);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // display details
    printf("\nEmployee Details:\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d  Name: %s  Designation: %s  Salary: %.2f\n",
               emp[i].id, emp[i].name, emp[i].designation, emp[i].salary);
    }

    free(emp);
    return 0;
}

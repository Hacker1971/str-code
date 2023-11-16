#include <stdio.h>

struct person
{
    /* data */
    double salary;
    int aga;
};

int main()
{
    struct person person1;
    person1.salary = 1000;
    person1.aga = 20;
    printf("salary = %.2f\n", person1.salary);
    printf("aga = %d\n", person1.aga);

    return 0;
}
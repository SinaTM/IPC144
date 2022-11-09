#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Person
{
    int age;
    float weight;
};

int main()
{
    struct Person* personPtr, personVar;
    personPtr = &personVar;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);

    return 0;
}

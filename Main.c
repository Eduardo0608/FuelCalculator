// Tutorial in C language to calculate the fuel that a car will consume during a trip and the cost.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int people;
    float distance, fuel_consumption = 6.5, fuel_price = 3.8, total_fuel, total_cost, total_cost_person;
    char option = 'Y';

    do
    {
        system("CLS");

        printf("Enter the distance of the trip (in km): ");
        scanf("%f", &distance);

        printf("Enter with the amount of people: ");
        scanf("%d", &people);

        total_fuel = distance / fuel_consumption;
        total_cost = total_fuel * fuel_price;
        total_cost_person = total_cost / people;

        printf("---------------------------------\n");
        printf("Total fuel consumption: %.2f L\n", total_fuel);
        printf("Total cost: R$ %.2f\n", total_cost);
        printf("Total for each person: R$ %.2f\n", total_cost_person);
        printf("---------------------------------\n");

        printf("To redo the calculation, type Y, otherwise press any key: ");
        scanf("%s", &option);
    } while (option == 'Y' || option == 'y');

    system("PAUSE");
    return 0;
}
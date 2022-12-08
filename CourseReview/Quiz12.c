#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_LEN 25 // Product name max length
#define MAX_PARTS 6 // Number of products in the inventory

// Structure for the inventory:
struct Part
{
    int sku;
    double price;
    char name[NAME_LEN + 1];
    int in_stock;
};

// Module to clear the buffer:
void clearBuffer(void)
{
    while ( getchar() != '\n')
    {
    }
}

// Module to show the products:
void showProducts(const struct Part* database, const int arrSZ)
{
    int i = 0;
    for (; i < arrSZ; i++)
    {
        /* If the product is in-stock: in-stock = Y
        If the product is not in-stock: in-stock = N */
        printf("SKU = %d; Part price = %.2lf; Part name = %s; in-stock = : %c\n",
            database[i].sku, database[i].price, database[i].name,
            database[i].in_stock == 0 ? 'N' : 'Y');
    }
    puts("--------------------------------------------------");
}

// Search the inventory for a specific user input SKU: 
void searchdatabase(const struct Part* database, const int arrSZ)
{
    int userSKU, i; // userSKU to store user input SKU
    /* foundIndex variable stores found product index.
     If it is -1, no product is found. */
    int foundIndex = -1;
    // Ask the user to input SKU:
    printf("Please enter an SKU:\n");
    scanf("%d", &userSKU);
    clearBuffer();
    for (i = 0; i < arrSZ; i++)
    {
        // check if the SKU exists: 
        if (database[i].sku == userSKU)
        {
            // update found if the product is found:
            foundIndex = i;
        }
    }

    // check if the item is found in the inventory:
    if (foundIndex > -1)
    {
        // check if the found item is in stock or not:
        if (database[foundIndex].in_stock)
        {
            printf("SKU = %d; Part price = %.2lf, Part name = %s; in stock\n\n",
                database[foundIndex].sku, database[foundIndex].price,
                database[foundIndex].name);
        }
        else
        {
            printf("SKU = %d; Part price = %.2lf; Part name = %s; not in stock\n\n",
                database[foundIndex].sku, database[foundIndex].price,
                database[foundIndex].name);
        }
    }
    else
    {
        printf("No product is found!\n");
        puts("--------------------------------------------------");
    }
}

void findCheapest(const struct Part* database, const int arrSZ)
{
    int cheapestIndex = 0;
    int i;
    double cheapest = database[cheapestIndex].price;
    // find the cheapest in-stock product:
    for (i = 1; i < arrSZ; i++)
    {
        if (database[i].price < cheapest && database[i].in_stock)
        {
            cheapestIndex = i;
            cheapest = database[i].price;
        }
    }

    printf("The cheapest in-stock product is %s with price = %.2lf\n\n",
        database[cheapestIndex].name, database[cheapestIndex].price);
}

int main(void) {
    // Inventory data:
    struct Part inventory[MAX_PARTS] = { {123, 190.21, "Disk drive", 1}, {234, 120.0, "CPU", 1},
        {456, 540.34, "GPU", 1}, {678, 60.15, "RAM", 0}, {198, 550.12, "PSU", 1}, {573, 21.1, "Mouse", 0} };
    int option; // stores user selected option
    int keepGoing = 1; // flag variable to continue/exit the program

    while (keepGoing)
    {
        //Show the option:
        printf("Please select from this menu:\n");
        printf("1. Show products\n2. Search the database\n");
        printf("3. Find and show the cheapest in-stock product\n");
        puts("4. Exit the program");
        puts("--------------------------------------------------");

        // Get user-selected option:
        do
        {
            scanf("%d", &option);
            clearBuffer();
            if (option < 1 || option > 4)
            {
                puts("Please select a valid option");
            }
        } while (option < 1 || option > 4);
        // Based on the user input, call the appropriate function:
        switch (option)
        {
        case 1:
            showProducts(inventory, MAX_PARTS);// only show the products
            break;
        case 2:
            // search the database for a specific user input:
            searchdatabase(inventory, MAX_PARTS);
            break;
        case 3:
            findCheapest(inventory, MAX_PARTS); // find cheapest product
            break;
        case 4:
            keepGoing = 0; // change the flag variable
            break;
        }
    }

    return 0;
}

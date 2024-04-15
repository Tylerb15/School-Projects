#include <stdio.h>
#include <string.h>
#include <stdlib.h>


double EurosToDollars(double euros) {
    const double exchangeRate = 1.0623605; 
    return euros * exchangeRate;
}

int main() {
    char input[10];
    double dollars;
    double euros;
    int count = 0;

    printf("Welcome to the European Euro to US Dollar converter\n");

    while (1) {
        printf("Please enter a value in euros to be converted to US Dollar (press q to quit): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0; 

        if (strcmp(input, "Q") == 0 || strcmp(input, "q") == 0) {
            break;
        }

        euros = atof(input);  
        dollars = EurosToDollars(euros); 
        printf("%.2f Euros are worth %.2f US Dollars.\n", euros, dollars); count++;
    }
    printf("You've completed %d conversions from Euros to Dollars, goodbye!\n", count);
    return 0;
}

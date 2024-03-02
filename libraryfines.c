// Hey Professor Rabe, I wanted to go the case switch route because we have not done much regarding it, and I wanted to try it. 

#include <stdio.h>

int main(void) {
    double price;
    int days_borrowed;
    int days_kept;
    double fine_amount = 0;
    int days_overdue;

    printf("Welcome to the Tulsa County Library fine calculator\n");

    printf("Please enter the price of the book: ");
    scanf("%lf", &price);

    printf("Please enter agreed days borrowed: ");
    scanf("%d", &days_borrowed);

    printf("Please enter days kept: ");
    scanf("%d", &days_kept);

    if (days_kept >= days_borrowed) {
        days_overdue = days_kept - days_borrowed;
        switch (days_overdue) {
            case 0:
                printf("Tulsa county library will not issue a fine, as it was returned on time\n");
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                fine_amount = days_overdue * 0.5;
                printf("Agreement was %d days but kept book for %d days, fine for %d days is $%.2f.\n", days_borrowed, days_kept, days_overdue, fine_amount);
                break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
                fine_amount = days_overdue * 1.25;
                printf("Agreement was %d days but kept book for %d days, fine for %d days is $%.2f.\n", days_borrowed, days_kept, days_overdue, fine_amount);
                break;
            case 22:
            case 23:
            case 24:
            case 25:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
                fine_amount = days_overdue * 2.25;
                printf("Agreement was %d days but kept book for %d days, fine for %d days is $%.2f.\n", days_borrowed, days_kept, days_overdue, fine_amount);
                break;
            default:
                fine_amount = days_overdue * 4;
                break;
        }

        
        if (fine_amount > price) {
            printf("Agreement was %d days but kept book for %d days, fine for %d days is $%.2f.\n", days_borrowed, days_kept, days_overdue, price);
            fine_amount = price;
        }
        
    } 

    return 0;
}
// Tyler Banfield 
// Hey Professor Rabe I have no clue why my compiler is not working
// So I went online and found an online compiler to make sure my code was working there
// Not sure if it is something in the code or what but if something is bugging in VS that is why
// The error message says this when I try to put in input, "Unable to perform this action because the process is running."

#include <stdio.h>
#include <math.h>

int main(void) {
    float income;
    float IRA;
    float mortgage;
    float phone;
    float electric;
    float waterTrash;
    float gas;
    float TV;
    float studentLoans;
    float transportation;
    float debt;
    float healthInsurance;
    float food;
    float amount_remaining;

    printf("Welcome to Tyler's monthly budget calculator!\n\n");

    printf("Please enter MONTHLY values below as DOLLARS and CENTS, example (99.99)\n\n");

    printf("Enter your monthly income: $\n");
    scanf("%f", &income);

    printf("15 percent or 401k cost is: $ 525.00 \n");
    
    printf("Enter cost for monthly mortgage/rent: $\n");
    scanf("%f", &mortgage);
    
    printf("Enter cost for cell phone: $\n");
    scanf("%f", &phone);
    
    printf("Enter cost for electric bill: $\n");
    scanf("%f", &electric);
    
    printf("Enter city water/trash: $\n");
    scanf("%f", &waterTrash);
    
    printf("Enter internet/TV subscription: $\n");
    scanf("%f", &TV);
    
    printf("Enter natural gas bill: $\n");
    scanf("%f", &gas);
    
    printf("Enter student loan payment: $\n");
    scanf("%f", &studentLoans);

    printf("Enter transportation/car cost: $\n");
    scanf("%f", &transportation);

    printf("Enter all other debt payment: $\n");
    scanf("%f", &debt);

    printf("Enter health insurance cost: $\n");
    scanf("%f", &healthInsurance);

    printf("Groceries and dining: $\n");
    scanf("%f", &food);
    
    IRA = income * 0.15;
    amount_remaining = income - (IRA + mortgage + phone + electric + waterTrash + gas + TV + studentLoans + transportation + debt + healthInsurance + food);


    printf("Enter your monthly income               :$ %.2f\n\n", income);
    printf("15 percent or 401k cost is              :$ %.2f\n", IRA);
    printf("Enter cost for monthly mortgage/rent    :$ %.2f\n", mortgage);
    printf("Enter cost for cell phone               :$ %.2f\n", phone);
    printf("Enter cost for electric bill            :$ %.2f\n", electric);
    printf("Enter city water/trash                  :$ %.2f\n", waterTrash);
    printf("Enter internet/TV subscription          :$ %.2f\n", TV);
    printf("Enter natural gas bill                  :$ %.2f\n", gas);
    printf("Enter student loan payment              :$ %.2f\n", studentLoans);
    printf("Enter transportation/car cost           :$ %.2f\n", transportation);
    printf("Enter all other debt payment            :$ %.2f\n", debt);
    printf("Enter health insurance cost             :$ %.2f\n", healthInsurance);
    printf("Groceries and dining                    :$ %.2f\n\n", food);
    printf("Amount remaining                        :$ %.2f", amount_remaining);

    return 0;
}
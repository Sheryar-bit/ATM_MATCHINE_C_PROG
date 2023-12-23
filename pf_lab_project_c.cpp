#include <stdio.h> // Defines standard input-output functions that are pre-defined
unsigned long amount=2000, deposition, withdrawal;
int pin, choice, k; // Defining few required variables in the transaction
char transaction ='y';
int main()
{
while (pin != 30430) // Using while loop to check for the condition on a pin number matching
{
printf("Type your secret pin number:");
scanf("%d", &pin);
if (pin != 30430) // Checking if the pin number types by the user is matched with the database record or not
printf("Please insert your valid password:\n");
}
do
{
printf("Hello! Welcome to our ATM Service\n");
printf("1. Balance Checking\n");
printf("2. Cash Withdrawal\n");
printf("3.Cash Deposition\n");
printf("4. Exit\n");
printf("*******?********?*\n\n");
printf("Please proceed with your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("\n The account balance in Rs : %lu ", amount);
break;
case 2:
printf("\n Insert the amount to be withdrawal: ");
scanf("%lu", &withdrawal);
if (withdrawal % 100 != 0)
{
printf("\n You are requested to insert the amount in multiples of 100");
}
else if (withdrawal >(amount - 500))
{
printf("\n You are having an insufficient balance");
}
else
{
amount = amount - withdrawal;
printf("\n\n You can now collect the cash"); // after having a sufficient amount in the account the ATM machine will provide the cash amount.
printf("\n The current balance is%lu", amount);
}
break;
case 3:
printf("\n Insert the amount to be deposited");
scanf("%lu", &deposition);
amount = amount + deposition;
printf("The balance is %lu", amount); // Displays the new current balance after the cash deposition in the user’s account
break;
case 4:
printf("\n We are thankful to you for USING our ATM services!");
break;
default:
printf("\n You have made an invalid choice"); // Defines that the user have done something wrong with the ATM service options
}
printf("\n\n\n Would you like to have another ATM transaction?(y/n): \n");
fflush(stdin);
scanf("%c", &transaction);
if (transaction == 'n'|| transaction == 'N')
k = 1;
} while (!k);
printf("\n\n Thank you so much for your time to choose The our ATM services!");
// the ATM program terminates with a thank you note.
}

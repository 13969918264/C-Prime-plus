/*
	Name: 赵子豪(ZiHao Zhao)
	Date: 2017年10月26日
*/
/*
	vegetable.c --
	buy some vegetables and calculate the total charge.
*/
#include <stdio.h>
#define	ANTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define	CARROT_PRICE 1.09
#define DISCOUNT_CHARGE 100
#define FIRST_WEIGHT 5.0
#define SECOND_WEIGHT 20.0
#define FIRST_WEIGHT_CHARGE 6.5
#define SECOND_WEIGHT_CHARGE 14.00
#define REST_PER_POUND_CHARGE 14.50
#define DISCOUNT 0.05
int main(void)
{
	float total_weight = 0;
	float antichoke_weight = 0;
	float carrot_weight = 0;
	float beet_weight = 0;
	float discount;
	float total_charge;
	float shopping_charge;
	float grand_charge;
	float antichoke_charge;
	float beet_charge;
	float carrot_charge;
	char choice;

	printf("a : enter the pounds of antichoke desired.\n");
	printf("b : enter the pounds of beets desired.\n");
	printf("c : enter the pounds of carrots desired.\n");
	printf("q : the program is over.\n");
	printf("Please enter the number of choice.\n");
	while (scanf("%c", &choice))
	{
		switch (choice)
		{
			case 'a' :
					printf("Enter the pounds of antichoke desired.\n");
					scanf("%f", &antichoke_weight);
					total_weight += antichoke_weight;
					break;
			case 'b' :
					printf("Enter the pounds of beet desired.\n");
					scanf("%f", &beet_weight);
					total_weight += beet_weight;
					break;
			case 'c' :
					printf("Enter the pounds of carrot desired.\n");
					scanf("%f", &carrot_weight);
					total_weight += carrot_weight;
					break;
			case 'q' :
					printf("You enter %c.\nThe order is over.\n", choice);
					break;
			default :
					printf("Please enter the number of choice given.\n");
		}
		if (choice == 'q')
			break;
		else if (choice >= 'a'&& choice <= 'c')
		{
            printf("What else do you want to buy?\n");
            printf("Please enter the number of choice given (except you have bought.)and q to quit.\n");
        }
	}
    antichoke_charge = antichoke_weight * ANTICHOKE_PRICE;
    beet_charge = beet_weight * BEET_PRICE;
    carrot_charge = carrot_weight * CARROT_PRICE;
    total_charge = antichoke_charge + beet_charge + carrot_charge;
    if (total_charge <= DISCOUNT_CHARGE)
    {
        if (total_weight <= FIRST_WEIGHT)
        {
            shopping_charge = FIRST_WEIGHT_CHARGE;
            grand_charge = total_charge + shopping_charge;
        }
        else if (total_weight <= SECOND_WEIGHT)
        {
            shopping_charge = SECOND_WEIGHT_CHARGE;
            grand_charge = total_charge + shopping_charge;
        }
        else
        {
            shopping_charge = SECOND_WEIGHT_CHARGE + (total_weight - SECOND_WEIGHT) * REST_PER_POUND_CHARGE;
            grand_charge = total_charge + shopping_charge;
        }
    }
    else
    {
        discount = total_charge * DISCOUNT;
        grand_charge = total_charge - discount;
    }
    printf("The price of antichoke per pounds is $%f.\n", ANTICHOKE_PRICE);
    printf("The price of beet per pounds is $%f.\n", BEET_PRICE);
    printf("The price of carrot per pounds is $%f.\n", CARROT_PRICE);
    printf("You bought %f pounds antichoke.\t\t\tcosts $%f.\n", antichoke_weight, antichoke_charge);
    printf("You bought %f pounds beet.\t\t\tcosts $%f.\n", beet_weight, beet_charge);
    printf("You bought %f pounds carrot.\t\t\tcosts $%f.\n", carrot_weight, carrot_charge);
    printf("You spend $%f, shopping charge is $%f, the grand charge of all is $%f.\n", total_charge, shopping_charge, grand_charge);
    printf("Wishing you have a happy shopping.\n");

	return 0;
}

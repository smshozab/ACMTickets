#include<stdio.h>
main()
{
	int tickets=500, year, price, count, count1, quantity, quantity1;
	
	while (tickets!=0 && tickets>0 && tickets<=500)
	{
	printf("Enter 1 if you're a sophomore and 2 if you're a junior \n");
	scanf("%d", &year);
	if (year=1)
	{
		printf("How many tickets do you want to buy? \n");
		scanf("%d", &quantity);
	}
	else
	{
	printf("How many tickets do you want to buy? \n");
	scanf("%d", &quantity1);
	}
	
	switch (year){
		case 1:
			if (quantity>3)
			{
				count=1;
				while (count<=3){
					price=100;
					printf("Your ticket price is Rs. %d \n", price);
					count++;
				}
				while (count<=quantity){
					price=0.8*100;
					printf("Your ticket price is Rs. %d \n", price);
					count++;
		}
			}
			else {
				count=1;
				while (count<=quantity){
					price=100;
					printf("Your ticket price is Rs. %d \n", price);
					count++;
			}
		}
		break;
		case 2:
			if (quantity1>3)
			{
				count1=1;
				while (count1<=3){
					price=50;
					printf("Your ticket price is Rs. %d \n", price);
					count1++;
				}
				while (count1<=quantity1){
					price=0.8*50;
					printf("Your ticket price is Rs. %d \n", price);
					count1++;
		}
			}
			else 
			{
				count1=1;
				while (count1<=quantity1){
					price=50;
					printf("Your ticket price is Rs. %d \n", price);
					count1++;
			}
}
		printf("Number of seats available free are: %d \n", 1+tickets-count-count1);
		if (count=500)
		{
			break;
		}
		printf("Total tickets sold are: %d \n", quantity);
		printf("Total income generated is: %d \n", quantity*100+quantity1*50);
}
}
}
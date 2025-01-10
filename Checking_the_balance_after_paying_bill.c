#include<stdio.h>
int main()
{
	float totalbill=0.0f;
	float cash=0.0f;
	float balance=0.0f;
	
	printf(" Type the value of the total bill: ");
	scanf("%f",&totalbill);
	printf(" Type the value of the cash that you have: ");
	scanf("%f",&cash);
	
	balance = cash - totalbill;
	if(balance>0)
	{
		printf("The balance is:%.2f",balance);
	}
	else
	{
		printf(" There is no balance left");
	}
	
	return 0;
	
}


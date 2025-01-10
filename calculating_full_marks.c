#include<stdio.h>
int main()
{
	float midmark=0.0f;
	float projectmark=0.0f;
	float finalmark=0.0f;
	float total=0.0f;
	
	printf("Type your mid mark: ");
	scanf("%f",&midmark);
	printf("Type your project mark: ");
	scanf("%f",&projectmark);
	printf("Type your final mark: ");
	scanf("%f",&finalmark);
	
	total = midmark+projectmark+finalmark;
	if(total>50)
	{
		printf("You PASS");
	}
	
	return 0;
}

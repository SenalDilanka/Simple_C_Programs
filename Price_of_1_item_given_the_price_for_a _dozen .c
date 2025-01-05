#include <stdio.h> 

int main() { 
           float dozenpric; 
           int items; 
           float priceof1item; 
     
           printf("Type the price of the dozen of items: \n"); 
           scanf("%f",&dozenpric); 
           printf("How many items in the dozen of items: \n"); 
           scanf("%d",&items); 
     
           priceof1item = (dozenpric / items); 
 
           printf("Price of 1 item is: %.2f\n",priceof1item); 
           return 0; 
}

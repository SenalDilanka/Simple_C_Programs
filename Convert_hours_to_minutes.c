#include <stdio.h> 
 
int main() { 
            float hours; 
            float minutes; 
     
            printf("Enter the Hours: "); 
            scanf("%f", &hours); 
     
            minutes = hours*60; 
     
            printf("The minutes of the given hours is: %.1f\n", minutes); 
     
            return 0; 
         }

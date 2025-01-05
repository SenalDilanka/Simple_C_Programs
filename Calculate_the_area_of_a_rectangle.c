#include <stdio.h> 
 
int main() { 
            float length; 
            float width; 
            float rectanglearea; 
 
     
            printf("Enter the rectangle length: "); 
            scanf("%f", &length); 
            printf("Enter the rectangle width: "); 
            scanf("%f", &width); 
     
            rectanglearea = length*width; 
     
            printf("The area of the rectangle is: %.2f\n", rectanglearea); 
     
            return 0; 
           } 

#include <stdio.h> 
 
  int main() { 
              int number; 
              int revnum; 
 
     
              printf("Enter a 3-digit number: "); 
              scanf("%d", &number); 
 
    
              if (number >= 100 && number <= 999) { 
        
                                              int hundreds = number / 100;        
                                              int tens = (number / 10) % 10;     
                                              int ones = number % 10;           
 
         
                                              revnum = ones * 100 + tens * 10 + hundreds; 
 
         
                                             printf("The reversed number is: %d\n", revnum); 
                                         } 
     
              return 0; 
            }

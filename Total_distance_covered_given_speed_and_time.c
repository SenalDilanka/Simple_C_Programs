#include <stdio.h> 
          
int main() { 
            int totdistance; 
            int speed; 
            int timee; 
     
            printf("Type the speed of the vehicle: \n"); 
            scanf("%d",&speed); 
            printf("Howmuch time did it get to go to the distance: \n"); 
            scanf("%d",&timee); 
     
            totdistance = speed * timee; 
 
            printf("Total  distance is: %d\n",totdistance); 
            return 0; 
}

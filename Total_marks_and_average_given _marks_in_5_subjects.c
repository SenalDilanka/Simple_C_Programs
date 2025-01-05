 #include <stdio.h> 

int main() { 
           int fmarks; 
           float avg; 
           int mark; 
           int count = 0; 
  
           while(count<5) { 
                          printf("Type the mark you get: \n"); 
                          scanf("%d",&mark); 
                          fmarks = fmarks + mark; 
                          count = count+1; 
                       } 
          avg=(fmarks)/5; 
          printf("The full mark is: %d\n",fmarks); 
          printf("Your average of the full mark is: %f\n",avg); 
          return 0; 
}

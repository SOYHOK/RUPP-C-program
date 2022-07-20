#include <stdio.h>                                                                          (4)
int main(){
    int X ;
        // enter number from user
    printf("Enter a number: ");
    scanf("%d", &X);
    // display the messeage whether user enter number higher or lower than 20 
     if(X < 20){ 
         printf("Thank You");
     }
   else 
        printf("Too High");
    

    return 0;
}
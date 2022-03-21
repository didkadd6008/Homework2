#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int xor(int num1,int num2){
if ((!num1 && num2) || (num1 && !num2))
    {
        printf("1\n");
    }else{
        printf("0\n");
    }
}

int checkNumber(int num1,int num2){
    if (num1 == 0 || num1 == 1 || num2 == 0 || num2 == 1 )
    {
        xor(num1,num2);
        return EXIT_SUCCESS;
    }else{

    return EXIT_FAILURE;
    }
}


int main(){
    int num1,num2;
   
   printf("Enter two numbers: 0 or 1!\n");

   scanf("%d",&num1);
    
    scanf("%d",&num2);
    

   checkNumber(num1,num2);
    
     

    return EXIT_SUCCESS;
}
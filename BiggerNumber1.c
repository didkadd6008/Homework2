#include<stdio.h>
#include<stdlib.h>
#include<math.h>



void printerForBiggestNumber(double number){
    printf("%lf",number);
};

void biggestNumnber(double first,double second,double third){


 if(first >= second && first > third){
     printerForBiggestNumber(first);
 }else if(second > first && second >= third){
     printerForBiggestNumber(second);
 }else if (third >= first && third > second)
 {
       printerForBiggestNumber(third);
 }
 
};

 double scannerForNumbers(double number){
     
     scanf("%lf",&number);

     
 };

 

int main(){
    double firstNumber,secondNumber,thirdNumber;
    
   
    biggestNumnber(scannerForNumbers(firstNumber),scannerForNumbers(secondNumber),scannerForNumbers(thirdNumber));
    
}
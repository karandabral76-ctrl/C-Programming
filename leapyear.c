#include<stdio.h>
int main(){
int year;
  printf("Enter a year to check if its is leap year or not");
    scanf("%d",&year);
  if(year % 400 ==0 || year % 4==0 && year % 100 !=0){  // Condition to check if a year is a leap year or not || indicates OR , && indicates AND
  printf("Leap year");
  }
  else{
  printf("Not Leap Year");
  }
  return 0;
}

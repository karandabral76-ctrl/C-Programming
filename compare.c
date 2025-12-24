#include<stdio.h>
int main(){
int a,b;
  printf("Enter the 1st Number to compare : ");
  scanf("%d",&a);
  printf("enter the 2nd Number to compare : ");
  scanf("%d",&b);
  if(a>b){
    printf("The number %d is Greater than %d .",a,b);}
    else if(a==b){
    printf("Both Numbers are equal.");
    }
    else{
      printf("The Number %d is Greater than %d .",b,a);
    }
    return 0;
}

#include <stdio.h>
int main(){
int a,b,c;
  printf("Enter the 1st Number : ");
  scanf("%d",&a);
  printf("Enter the 2n Number ");
  scanf("%d",&b);
  printf("Enter the 3rd Number ");
  scanf("%d",&c);
  if(a>b && a>c){
    printf("The Number %d is greater .",a);}
  else if(b>a && b>c){
    printf("The Number %d is greater .",b);}
  else if(c>a && c>b){
    printf("The Number %d is greater .",c);}
  else{
    printf("ALL EQUAL! ");}
  return 0;
}

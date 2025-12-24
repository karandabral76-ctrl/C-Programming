#include <stdio.h>
int main(){
int a;
printf("Enter the number : ");
  scanf("%d",&a);
if(a>0){
  printf("Positive number. ");
}
  else if(a==0){
  printf("The number is Zero. ");
  }
  else{
    printf("The number is negative. ");
  }  
 return 0;   
}

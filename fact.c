#include <stdio.h>
int main(){
  int a;
  long long fact=1; //long long i sused to stor very large amount of integers value
  printf("Enter the number to find the factorial of a no : ");
  scanf("%d",&a);
  if(a==0){
    printf("Factorial is 1!!!");
  }
  else{
  for(int i=1;i<=a;i++){
  fact=fact*i;
  }
printf("Factorial is %lld ",fact); //to print long long integers we use %lld rather than only %d
}
return 0;
}

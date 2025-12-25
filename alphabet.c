#include <stdio.h>
int main(){
  char ch;
  printf("Enter an alphabet : ");
  scanf("%c",&ch);
  if(ch=='A' || ch=='a' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
  printf("Vowel");
  }
  else{
  printf("Constants");}
  return 0;
}

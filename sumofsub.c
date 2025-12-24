#include <stdio.h>
int main(){
int a,b,c,d,e,total;
printf("Enter the number of English : ");
scanf("%d",&a);
printf("Enter the number of Maths : ");
scanf("%d ",&b);
printf("Enter the number of Hindi : ");
scanf("%d ",&c);
printf("Enter the number of Science : ");
scanf("%d ",&d);
printf("Enter the number of computer : ");
scanf("%d ",&e);
total = a+b+c+d+e;
printf("Total number of exams : %d \n",total);
return 0;}

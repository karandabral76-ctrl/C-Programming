#include <stdio.h>
int main(){
int a,num=0,c=0,reverse=0,digit=0;
printf("Enter the number you want to reverse : ");
scanf("%d",&a);
num=a;
while(num!=0){
    c=c+1;
    num=num/10;
}
for(int i=0;i<c;i++){
    digit=a%10;
    reverse=reverse*10+digit;
    a=a/10;
}
printf("Your reversed number is :- %d ",reverse);
return 0;
}

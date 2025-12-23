//Basics
#include <stdio.h>
int main(){
  printf("Name : Karan Dabral\n Course: BCA AI & DS\n ") //Printf used for printing the value or string
 //ASCII Value 
char ch='a';
printf(" The ASCII Value is %d\n",ch); //Basically %d is used to print integer value but here is the %d is used to print the ASCII value(in Programming charcter are store in i a integer value those are known as ASCCI value for short For Ex:A=65 and a=97 and so on
//Size of a Data type;
printf(" The Size of int %zu\n",sizeof(int));
printf(" The Size of Float %zu\n",sizeof(float));
printf(" The Size of Char %zu\n",sizeof (char)); // Here size of is used to find the size of a Data type Like int ,float, char

//Coding Questions
//Swapping of two Number 
//1:Using 3rd variable
int a=76;// Can also take from the user by scanf("%d",&a); scanf:This is used for taking the input from the user.
int b=89;
int c=0;
printf("Before Swapping a:%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf("After Swapping(using 3rd variable) : a = %d , b = %d\n",a,b); //Descriptiohn: First we directluy store value on variable a,b,and c=0 because c will be used to store a then give that value to b. 
//2:Without using 3rd variable
int d,e
printf("Enter the value of d for swapping:\n);
  scanf("%d",&d);
printf("Enter the value of e for swapping:\n");
  scanf("%d",&e);
d=d+e;//For ex: d=12+24
e=d-e;// e=36-24
d=d-e;// d=36-12
printf(" After The swapping(without using 3rd variable) d=%d , e=%d :\n",d,e);
return 0;
}


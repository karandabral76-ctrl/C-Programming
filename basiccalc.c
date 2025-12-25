#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    printf("Enter the 2nd Number 2 :");
    scanf("%d",&b);
    int choice;
    printf("Enter your choice 1:ADD 2:SUB 3:MULTIPLY 4:DIVIDE : ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        c=a+b;
        printf("After addition %d ",c);
        break;
        case 2:
        c=a-b;
        printf("After subtraction %d ",c);
        break;
        case 3:
        c=a*b;
        printf("After multiiplication %d ",c);
        break;
        case 4:
        c=a%b;
        printf("After division %d",c);
        break;
        default :
        printf("ERROR! WRONG CHOICE!!!");
    };
    return 0;
}

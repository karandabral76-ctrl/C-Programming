#include <stdio.h>
int main(){
    int a;
    printf("Enter the number to check if its is divisible by 5 and 11 : ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("Divisible!");
    }
    else{
        printf("Not Dvisible!");
    }
    return 0;
}

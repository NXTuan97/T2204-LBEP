#include<stdio.h>

int main(){
    int n;
    int number = 0 ;
        printf("\nNhap n: ");
        scanf("%d", &n);
    while(n != 0){
        number = number * 10 + n%10;
        n = n / 10;
    }
    printf("\nSo nghich dao la: %d", number);
    return 0;
}

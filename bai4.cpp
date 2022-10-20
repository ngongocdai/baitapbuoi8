#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int y = 0 ;
    printf("\nNhap n: ");
    scanf("%d", &n);
    if(n < 0 && printf("\nLoi: n >= 0 !"));
    while(n != 0)
    {
       y =y * 10 + n%10;
        n = n / 10;
    }
    printf("\nSo nghich dao la: %d",y);
}

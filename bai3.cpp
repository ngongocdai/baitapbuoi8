#include<stdio.h>
int main(){
	int n;
	int y=0;
	printf("nhap n=");
	scanf("%d",&n);
	if(n<2){
		printf("day khong phai la so nguyen to\n",n);
	}else
	{
	int i=1;
	while(n>=i){
		if(n%i==0){
			y+=1;
		}
		i++;
	}
		if(y==2){
			printf("%d la so nguyen to",n);
		}else{
			printf("%d khong phai la so nguyen to",n);
		}
	}
}



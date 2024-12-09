#include<stdio.h>
int tinhTong(int a, int b){
	printf("Tong 2 so %d va %d la: %d",a,b,a+b);
	return a+b;
}
int main(){
	tinhTong(3,5);
	return 0;
}

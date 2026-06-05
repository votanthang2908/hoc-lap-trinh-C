
#include<stdio.h>
int main(){
	int a, b;
	printf("nhap vao hai so bat ki:");
	scanf("%d%d",&a,&b);
	int tong=a+b;
	int hieu=a-b;
	int tich=a*b;
	float thuong=(float)a/b;
	int du=a%b;
	printf("tong:%d\n,hieu:%d\n,tich:%d\n,thuong:%.1lf\n,du:%d\n",tong,hieu,tich,thuong,du); 
} 


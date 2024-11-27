#include<stdio.h>
int main (){
	int mang[1000],i,n;
	printf("Moi ban nhap mang:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Moi ban nhap mang[%d]:",i);
		scanf("%d",&mang[i]);
	}
	printf("Mang vua nhap :%d\n",n);
	for(i=1;i<=n;i++){
		printf("%d\n",mang[i]);
	}
	
	
	
	return 0;
}

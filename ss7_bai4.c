#include<stdio.h>
int main(){
	int mang[1000],n,i;
	printf("Moi ban nhap do dai cua phan tu: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	 printf("Moi ban nhap:",i);
	 scanf("%d",&mang[i]);
	}
	printf("Phan tu co trong mang:\n");
for (i=1;i<=n;i++){
		printf("phan tu thu %d = %d\n",i,mang[i]);
	}
	return 0;
}

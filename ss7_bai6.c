#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int b[5];
	int i;
	for (i=0;i<5;i++){
		printf("Mang a la %d\n",a[i]);
	}
	for (i=0;i<5;i++){
		if (a[i]%2==0){
		b[i] =	a[i] + 3;
		} else {
			b[i] = a[i]+ 2;
		}
		printf("Mang a moi la %d\n",b[i]);}
	return 0;
}

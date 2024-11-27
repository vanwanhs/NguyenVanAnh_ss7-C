#include<stdio.h>
int main(){
	int mang[5]={1,3,5,6,10},i;
	for(i=0;i<5;i++){
		if (mang[i] % 2 == 0){
			printf("phan tu chan: %d\n",mang[i]);
		} else { printf("Phan tu le: %d\n",mang[i]);
		}
	}
	
	
	return;
}

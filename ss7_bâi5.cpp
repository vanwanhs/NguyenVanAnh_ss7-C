#include <stdio.h>

int main(){
	int list[5] = {6,2,8,7,3}, temp, i;
	for(i=0;i<=4;i++){
		if(list[0]<list[i]){
			temp = list[i];
			list[0] = temp;
			list[i] = temp;
		}
		if(list[4]>list[i]){
			temp = list[i];
			list[4] = temp;
			list[i] = temp;
		}
	}
	printf("phan tu lon nhat la %d\n",list[0]);
	printf("phan tu nho nhat la %d",list[4]);
	
	return 0;
	
}

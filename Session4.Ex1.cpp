#include <stdio.h>

int main (){
	int number;
	printf("Moi ban nhap 1 so nguyen : ");
	scanf("%d", &number);
	if(number < 0){
		printf("So %d la so nguyen am\n",number);
	}else{
		printf("So %d la so nguyen duong\n",number);
	}
}

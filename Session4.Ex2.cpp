#include <stdio.h>

int main (){
	int number;
	printf("Moi ban nhap 1 so nguyen : ");
	scanf("%d", &number);
	if(number % 2 == 0){
		printf("So %d la so chan\n",number);
	}else{
		printf("So %d la so le\n",number);
	}
}

#include <stdio.h>

int main(){
    int number;
    printf("Vui long nhap vao mot so nguyen: ");
    scanf("%d",&number);
    if(number % 3 == 0 && number % 5 == 0){
        printf("So %d chia het cho ca 3va5\n",number);
    } else if(number % 3 == 0){
        printf("So %d chia het cho 3\n",number);
    } else if(number % 5 == 0){
        printf("So %d chia het cho 5\n",number);
    } else{
        printf("So %d khong chia het cho ca 3va5",number);
    }
}


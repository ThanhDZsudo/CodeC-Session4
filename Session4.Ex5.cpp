#include <stdio.h>

int main() {
    int fistNumber,secondNumber,thirdNumber;
    printf("Nhap vao so thu nhat: ");
    scanf("%d",&fistNumber);
    printf("Nhap vao so thu hai: ");
    scanf("%d",&secondNumber);
    printf("Nhap vao so thu ba: ");
    
    scanf("%d",&thirdNumber);
    if ((thirdNumber>fistNumber&&thirdNumber<secondNumber)&(thirdNumber>secondNumber&&thirdNumber<fistNumber)){
        printf("So %d nam trong khoang giua so %d và so %d.\n",thirdNumber,fistNumber,secondNumber);
    } else{
        printf("So %d khong nam trong khoang giua so %d và so %d.\n",thirdNumber,fistNumber,secondNumber);
    }
}


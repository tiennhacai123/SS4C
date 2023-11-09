#include <stdio.h>
int main(){
    int number;
    printf("Nhap vao 1 so nguyen:");
    scanf("%d",&number);
    if(number%5==0 && number%3==0){
        printf("%d la so chia het cho 3 va 5",number);
    }else
    printf("%d ko chia het cho 3 va 5",number);
}
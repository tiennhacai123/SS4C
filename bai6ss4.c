#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Nhap vao 3 so ngau nhien:");
    scanf("%d%d%d", &num1, &num2, &num3);
    int max = num1, min = num1, the_rest;
    max = (num1 > num2) ? num1 : num2;
    max = (num3 > max) ? num3 : max;
    min = (num1 < num2) ? num1 : num2;
    min = (num3 < min) ? num3 : min;
    the_rest= num1+num2+num3-max-min;
    printf("Max= %d \t Min= %d \t So con lai= %d",max,min,the_rest);
}
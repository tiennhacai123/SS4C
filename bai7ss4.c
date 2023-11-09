#include <stdio.h>
int main(){
    float basic_salary, real_workday;
    printf("Nhap vao luong co ban:");
    scanf("%f", &basic_salary);
    printf("Nhap vao ngay cong thuc te");
    scanf("%f", &real_workday);
    if (real_workday>26){
        real_workday=26+(real_workday-26)*1.5;
    }
    float salary=basic_salary*real_workday/26;
    printf("Luong cua nhan vien la:%f",salary);
}
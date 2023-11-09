#include <stdio.h>
int main(){
    int year;
    printf("Nhap vao nam:");
    scanf("%d",&year);
    int month;
    printf("Nhap vao thang:");
    scanf("%d",&month);
    switch(month){
    case 1:
        printf("Co 31 ngay");
        break;
    case 2:
        if(year%400==0|| year%4==0 && year%100!=0){
            printf("Day la nam nhuan");
        }else{
            printf("Day khong phai nam nhuan");
        } 
        break;         
    case 3:
        printf("Co 31 ngay");
        break;
    case 4:
        printf("Co 30 ngay");
        break;
    case 5:
        printf("Co 31 ngay");
        break;
    case 6:
        printf("Co 30 ngay");
        break;
    case 7:
        printf("Co 31 ngay");
        break; 
    case 8:
        printf("Co 31 ngay");
        break;  
    case 9:
        printf("Co 30 ngay");
        break; 
    case 10:
        printf("Co 31 ngay");
        break;    
    case 11:
        printf("Co 30 ngay");
        break;  
    default: 
        printf("Co 31 ngay");                       
    }
}
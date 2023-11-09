#include <stdio.h>
int main(){
    int new_index, old_index;
    printf("Nhap chi so moi va chi so cu:");
    scanf("%d %d",&new_index,&old_index);
    int electricity_number = new_index - old_index;
    if(0<= electricity_number && electricity_number <50){ 
        printf("Gia dien la 10.000");
    }else if(50<= electricity_number && electricity_number <100){
         printf("Gia dien la 15.000");
    }else if(100<= electricity_number && electricity_number <150){
         printf("Gia dien la 20.000");
    }else if(150 <= electricity_number && electricity_number <200){
         printf("Gia dien la 25.000");
    }else{
         printf("Gia dien la 30.000");
    }
}
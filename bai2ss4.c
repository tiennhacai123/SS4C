#include <stdio.h>
int main(){
    int edge1, edge2, edge3;
    printf("Nhap vao 3 canh cua tam giac:");
    scanf("%d%d%d", &edge1,&edge2,&edge3);
    if(edge1 == edge2 && edge2 == edge3){
        printf("Tam giac deu"); 
    }else if (edge1*edge1+edge2*edge2 == edge3*edge3 || edge1*edge1+edge3*edge3 == edge2*edge2 || edge2*edge2 + edge3*edge3 == edge1*edge1 ){
        printf("Tam giac vuong");
    }else if (edge1*edge1+edge2*edge2 == edge3*edge3 || edge1*edge1+edge3*edge3 == edge2*edge2 || edge2*edge2 + edge3*edge3 == edge1*edge1 && edge1 == edge2 || edge1 == edge3 || edge2 == edge3){
        printf("Tam giac vuong can");
    }else if (edge1 == edge2 || edge1 == edge3 || edge2 == edge3){
        printf("tam giac can");
    }else if(edge1+edge2>edge3 || edge1+edge3>edge2 || edge2+edge3>edge1){
        printf("Tam giac thuong:");
    }else{
        printf("Khong la tam giac");
    }
}
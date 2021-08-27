#include<stdio.h>
void square(int x){
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    square(n);
    return 0;
}

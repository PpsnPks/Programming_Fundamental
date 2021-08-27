#include<stdio.h>
void frame(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==1||j==1||i==x||j==x)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    frame(n);
    return 0;
}

#include<stdio.h>
void draw(int n){
    for(int i=1;i<=n*2-1;i++){
        for(int j=1;j<=n*2-1;j++){
            if(i<=n&&j>=0+i&&j<=(n*2)-i)printf("*");
            else if(i>n&&j<=i&&j>=n*2-i)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    draw(n);
}

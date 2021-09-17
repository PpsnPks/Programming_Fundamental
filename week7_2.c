#include<stdio.h>
void draw(int n){
    if(n==0)printf("\n");
    if(n==1)printf("*");
    if(n==2)printf(" ");
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n*2-1;i++){
        for(int j=1;j<=n*2-1;j++){
            if(i<=n&&j>=0+i&&j<=(n*2)-i)draw(1);
            else if(i>n&&j<=i&&j>=n*2-i)draw(1);
            else draw(2);
        }
        draw(0);
    }
    return 0;
}

#include<stdio.h>
void draw(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0&&j%2==0)printf("*");
            else if(i%2!=0&&j%2!=0)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    draw(n);
    return 0;
}

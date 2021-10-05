#include<stdio.h>
int main(){
    int a[4],nub=0;
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)++nub;
    }
    printf("%d",nub);
    return 0;
}

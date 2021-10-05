#include<stdio.h>
void check(int a,int *p){
    if(a%2==0)++*p;
}
int main(){
    int a,nub=0;
    for(int i=0;i<4;i++){
        scanf("%d",&a);
        check(a,&nub);
    }
    printf("%d",nub);
    return 0;
}

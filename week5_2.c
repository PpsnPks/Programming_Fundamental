#include<stdio.h>
int isPrime(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0) return 0;
    }
    return 1;
}
int main(){
    int n[10],a=-1;
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
        if(isPrime(n[i])==1){
            ++a;
            n[a]=n[i];
        }
    }
    for(int i=0;i<=a;i++){
        printf("%d\n",n[i]);
    }
    return 0;
}

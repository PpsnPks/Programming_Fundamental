#include<stdio.h>
int cal(double n){
    int dt=0;double out=500;
    while(n>0){
        ++dt;
        if(dt%10==0){
            n=n+10000;
        }
        else {
            if(dt==1)
            out=500;
            else{out=out*1.05;}
            n=n-out;
        }
    }
    return dt;
}
int main(){
    double n;
    int dt;
    scanf("%lf",&n);
    n=n*1000;
    dt=cal(n);
    printf("%d",dt);
    return 0;
}

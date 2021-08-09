#include<stdio.h>
int main(){
    int a,min1=1000000,min2;
    for(int i=1;i<=3;i++){
        scanf("%d",&a);
        if(a<min1){
            min2=min1;
            min1=a;
        }
        else if(a<min2)min2=a;
    }
    printf("%d",min1+min2);
}

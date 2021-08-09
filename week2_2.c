#include<stdio.h>
int main(){
    int a[3],min1,min2;
    for(int i=1;i<=3;i++){
        scanf("%d",&a[i]);
        if(i==1){
            min1=a[i];
        }
        else if(a[i]<min1){
            min2=min1;
            min1=a[i];
        }
        else if(a[i]<min2)min2=a[i];
    }
    printf("%d",min1+min2);
}

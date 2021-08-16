#include<stdio.h>
#include<string.h>
int main(){
    char a[10000];
    int len;
    scanf("%[^\n]",&a);
    len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]>96&&a[i]<123)a[i]=a[i]-32;
        else if(a[i]>64&&a[i]<91) a[i]=a[i]+32;
    }
    printf("%s",a);
    return 0;
}

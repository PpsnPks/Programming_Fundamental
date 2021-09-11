#include<stdio.h>
#include<string.h>
int main(){
    char ass,a[10000];
    int len;
    scanf("%[^\n]",&a);
    scanf(" %c",&ass);
    len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]!=ass)
            printf("%c",a[i]);
    }
    return 0;
}

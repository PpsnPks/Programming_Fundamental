#include<stdio.h>
#include<string.h>
void cut(int n,char a[n],char c){
    for(int i=0;i<n;i++){
        if(a[i]!=c)
            printf("%c",a[i]);
    }
}
int main(){
    char ass,a[10000];
    int len;
    scanf("%[^\n]",&a);
    scanf(" %c",&ass);
    len=strlen(a);
    cut(len,a,ass);
    return 0;
}

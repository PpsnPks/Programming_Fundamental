#include<stdio.h>
#include<string.h>
char change(char a){
    if(a>96&&a<123)a=a-32;
    else if(a>64&&a<91) a=a+32;
    return a;
}
int main(){
    char a[10000];
    int len;
    scanf("%[^\n]",&a);
    len=strlen(a);
    for(int i=0;i<len;i++){
        a[i]=change(a[i]);
    }
    printf("%s",a);
    return 0;
}

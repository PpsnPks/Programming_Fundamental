#include<stdio.h>
#include<string.h>
int main(){
    char a[1000];
    scanf("%[^\n]",&a);
    int len=strlen(a);
    printf("%c",a[len-1]);
    return 0;
}

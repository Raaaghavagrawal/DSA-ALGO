#include <ctype.h>
#include <string.h>
#include <stdio.h>
int main(){
    char ch[3000]="Hello Good Morning";
    int i=0;
    char str;
    while(ch[i]){
        str=ch[i];
        putchar(tolower(str));
        i++;
    }
    return 0;

}
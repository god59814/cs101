#include <stdio.h>

int main(){
    int mystrlen(char *);
    char str[100];
    char *p;
    p = str;
    printf("Enter a string:");
    scanf("%s", p);
    int x = mystrlen(p);
    printf("the length of string is %d\n", x);
}
int mystrlen(char *p){
    int c = 0;
    while(*p != '\0'){
        c++;
       *p++;
    }
    return(c);
}
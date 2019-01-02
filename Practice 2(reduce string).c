https://www.hackerrank.com/challenges/reduced-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reducedString(char *s){
    int red = 1;
    for (int i=0; s[i]!='\0'; i++){
        if (s[i]==s[i+1]){
            s[i]='0';
            s[i+1]='0';
            red=0;
        }
    }
    char *s1 = (char *)malloc(10240 * sizeof(char));
    int k=0;
    for (int i=0; s[i]!='\0'; i++){
        if (s[i]!='0'){
            s1[k]=s[i];
            k++;
        }
    }
    if (red == 1){
        return s1;
    } else {
        return reducedString(s1);
    }
}

int main(){
    char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    char *s1 = (char *)malloc(10240 * sizeof(char));
    s1 = reducedString(s);
    if (s1[0]=='\0'){
        printf("Empty String");
    } else {
        printf("%s", s1);
    }
    //printf("%s", reducedString(s));
    return 0;
}

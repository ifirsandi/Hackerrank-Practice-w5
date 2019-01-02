https://www.hackerrank.com/challenges/caesar-cipher-1/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int transformCharLow(int a, int k){
    if (a>122){
        a=96+(a-122);
        return transformCharLow(a,k);
    } else {
        return a;
    }
}
int transformCharUp(int a, int k){
    if (a>90){
        a=64+(a-90);
        return transformCharUp(a,k);
    }  else {
        return a;
    }
}


int main()
{
   int n;
   scanf("%d", &n);
   char *s = (char *)malloc(10240 * sizeof(char));
   scanf("%s", s);
   int k;
   scanf("%d", &k);
   //printf("%c", 97);
   for (int i=0; i<n; i++){
       int a = s[i]+k;
       if (s[i]<='Z' && s[i]>='A'){
           printf("%c", transformCharUp(a, k));
       }
       else if (s[i]>='a'&&s[i]<='z'){
            printf("%c", transformCharLow(a, k));
       } else {
            printf("%c", s[i]);
       }
   }
    return 0;
}


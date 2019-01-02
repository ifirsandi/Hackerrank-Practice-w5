https://www.hackerrank.com/challenges/gem-stones/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *gemStones(char *s, char *t){
    char *u = (char *)malloc(10240 * sizeof(char));
    int k=0;
    for (int i=0; s[i]!='\0'; i++){
        int done=0;
        for (int j=0; t[j]!='\0'; j++){
            if (s[i]==t[j]){
                t[j]='1';                
                if (done == 0){
                    done =1;
                    u[k]=s[i];
                    k++;
                }
            }
        }
    }
    return u;
}


int main()
{
    int n;
    scanf ("%d", &n);
    char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    int a=0;
    for (int i=0; s[i]!='\0'; i++)
        a++;
    if (n==1){
        printf ("%d", a);
    } else {

    for (int q=1; q<n; q++){
        char *t = (char *)malloc(10240 * sizeof(char));
        scanf("%s", t);
        s=gemStones(s,t);
    }
    int count=0;
    for (int i=0; s[i]!='\0'; i++)
        count++;
    printf("%d", count);

    }
    return 0;
}


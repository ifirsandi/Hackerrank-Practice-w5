https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char *a = "hackerrank";
    char *s = (char *)malloc(10240 * sizeof(char));
    int q;
    scanf ("%d", &q);
    while(q--){
    scanf ("%s", s);
    int k=0;
    for (int i=0; s[i]!='\0'; i++){
        if (a[k]==s[i]){
            k++;
        }
        if (k==9){
            break;
        }
    }
    if (k==9){
        printf ("YES\n");
    } else {
        printf ("NO\n");
    }
    }
    return 0;
}



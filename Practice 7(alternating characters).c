https://www.hackerrank.com/challenges/alternating-characters/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int q; 
    scanf ("%d", &q);
    while(q--){

    char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    char a=s[0];
    int count=0;
    for (int i=1; s[i]!='\0'; i++){
        if (s[i]==a){
            count++;
        } else {
            a=s[i];
        }
    }
    printf ("%d\n", count);

    }
    return 0;
}



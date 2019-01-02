https://www.hackerrank.com/challenges/tutorial-intro/problem

#include <stdio.h>
#include <stdlib.h>




int main()
{
    int v;
    scanf("%d", &v);
    int n;
    scanf("%d", &n);
    int i=-1;
    int a=-1;
    while (a!=v){
        scanf("%d", &a);
        i++;
    }
    printf("%d", i);

    return 0;
}



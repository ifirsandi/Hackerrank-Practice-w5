https://www.hackerrank.com/challenges/two-characters/problem


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reducedString(char *s){
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
        return k;
    } else {
        return reducedString(s1);
    }
}



int isTwoChar(char *s, char a, char b){
    char *ar = (char *)malloc(10240 * sizeof(char));
    int k=0;
    for (int i=0; s[i]!=0; i++){
        if (s[i]==a || s[i]==b){
            ar[k]=s[i];
            k++;
        }
    }
    //printf ("%d & %d\n", k, reducedString(ar));
    if (k==reducedString(ar)){
        return k;
    } else {
        return 0;
    }
}

char *simpleString(char *s){
    char *s1 = (char *)malloc(10240 * sizeof(char));
    char *a = (char *)malloc(10240 * sizeof(char));
    for (int i=0; s[i]!='\0'; i++){
        a[i]=s[i];
        //printf("%c", s[i]);
    }
    int k=0;
    for (int i=0; a[i]!='\0'; i++){
        if (a[i]!='1'){
            s1[k]=a[i];
            for (int j=i; a[j]!='\0'; j++){
                if (a[j]==s1[k]){
                    a[j]='1';
                }
            }
            k++;
        }
    }
    return s1;
}

int main()
{
    int n;
    scanf("%d", &n);
    char *s = (char *)malloc(10240 * sizeof(char));
    scanf("%s", s);
    //printf("%d\n", isTwoChar(s,s[0],s[2]));
    char *ar = simpleString(s);
    int count=0;
    for (int i=0; ar[i]!='\0'; i++){
        count++;
    }
    //printf("%s \n%s", s, ar);
    bool find = false;
    int max=0;
    for (int i=0; i<=count; i++){
        for (int j=i+1; j<count; j++){
            //printf("%c %c => %d\n", ar[i], ar[j], isTwoChar(s,ar[i],ar[j]));
            if (isTwoChar(s,ar[i],ar[j])>max){
                max = isTwoChar(s,ar[i],ar[j]);
                find = true;
            }
        }
    }
    if (find == true){
        printf("%d", max);
    } else {
        printf("0");
    }
    return 0;
}



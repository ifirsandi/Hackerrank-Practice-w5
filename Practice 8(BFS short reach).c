https://www.hackerrank.com/challenges/bfsshortreach/problem

#include <stdio.h>

#include <stdlib.h>

#define from 0
#define to 1
#define distance 0
#define status 1

int main(){
    int queries;
    int node[1000][2];//distance(0), status(1)
    int edge[1000*(1000-1)/2][2];//from(0), to(1)
    scanf("%d", &queries);
    for (int q=0; q<queries; q++){
        int n, m, s;
        scanf("%d%d", &n, &m);

        for (int i=1; i<=m; i++){
            scanf("%d%d", &edge[i][from], &edge[i][to]);
        }
        for (int i=1; i<=n; i++){
            node[i][distance]=-1;//inisiasi
            node[i][status]=0;//not process yet
        }
        scanf("%d", &s);
        node[s][distance]=0;
        int a=s;
        unsigned dismin;
        while(a){
            a=0;
            dismin=-1;
            for (int i=1; i<=n; i++){ //choose node
                if(node[i][status]==0 && node[i][distance]<dismin){
                    a=i;
                    dismin=node[i][distance];
                }
            }
            //printf("prosses %d\n", a);
            for (int i=1; i<=m; i++){//find distance
                if (edge[i][from]==a){
                if(node[edge[i][to]][distance]>node[edge[i][from]][distance]+6 || node[edge[i][to]][distance]==-1){
                    node[edge[i][to]][distance]=node[edge[i][from]][distance]+6;
                }
                }
                if (edge[i][to]==a){
                if(node[edge[i][from]][distance]>node[edge[i][to]][distance]+6 || node[edge[i][from]][distance]==-1){
                    node[edge[i][from]][distance]=node[edge[i][to]][distance]+6;
                }
                }
            }
            node[a][status]=1;//processed
        }
        for(int i=1; i<=n; i++){
            if (i!=s){
                printf("%d ", node[i][distance]);
            }
        }

        printf("\n");
    }
    return 0;
}

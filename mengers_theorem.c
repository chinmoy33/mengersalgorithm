#include<stdio.h>
int n;
int disjoint=0;
void DFS(int node,int node2,int *isTraversed,int graph[][n])
{
    for(int i=0;i<n;i++)
    {
        if(graph[node][i]==1 && isTraversed[i]==0)
        {
            if(i==node2)
            {
                disjoint++;
                return;
            }
            //printf("NODE %d     ",i);
            isTraversed[i]=1;
            DFS(i,node2,isTraversed,graph);
        }
    }
}
int main()
{
    int i,j;
    printf("enter the no. of nodes\n");
    scanf("%d",&n);
    int graph[n][n];
    /*printf("enter 1 if the below mentioned node pairs are connected else enter 0\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Node %d AND Node %d\n",i,j);
            scanf("%d",graph[i][j]);
        }
    }*/

    int isTraversed[n];

    //test sample of graph:

        graph[0][0]=0;
        graph[0][1]=1;
        graph[0][2]=0;
        graph[0][3]=0;
        graph[0][4]=0;
        graph[0][5]=0;

        graph[1][0]=1;
        graph[1][1]=0;
        graph[1][2]=1;
        graph[1][3]=0;
        graph[1][4]=0;
        graph[1][5]=0;

        graph[2][0]=0;
        graph[2][1]=1;
        graph[2][2]=0;
        graph[2][3]=1;
        graph[2][4]=1;
        graph[2][5]=1;

        graph[3][0]=0;
        graph[3][1]=0;
        graph[3][2]=1;
        graph[3][3]=0;
        graph[3][4]=1;
        graph[3][5]=1;

        graph[4][0]=0;
        graph[4][1]=0;
        graph[4][2]=1;
        graph[4][3]=1;
        graph[4][4]=0;
        graph[4][5]=0;

        graph[5][0]=0;
        graph[5][1]=0;
        graph[5][2]=1;
        graph[5][3]=1;
        graph[5][4]=0;
        graph[5][5]=0;


    //test sample 2

        graph[0][0]=0;
        graph[0][1]=0;
        graph[0][2]=1;
        graph[0][3]=1;
        graph[0][4]=1;
        graph[0][5]=0;

        graph[1][0]=0;
        graph[1][1]=0;
        graph[1][2]=1;
        graph[1][3]=1;
        graph[1][4]=0;
        graph[1][5]=1;

        graph[2][0]=1;
        graph[2][1]=1;
        graph[2][2]=0;
        graph[2][3]=0;
        graph[2][4]=0;
        graph[2][5]=0;

        graph[3][0]=1;
        graph[3][1]=1;
        graph[3][2]=0;
        graph[3][3]=0;
        graph[3][4]=1;
        graph[3][5]=1;

        graph[4][0]=1;
        graph[4][1]=0;
        graph[4][2]=0;
        graph[4][3]=1;
        graph[4][4]=0;
        graph[4][5]=0;

        graph[5][0]=0;
        graph[5][1]=1;
        graph[5][2]=0;
        graph[5][3]=1;
        graph[5][4]=0;
        graph[5][5]=0;

    

    for(i=0;i<n;i++)
    {
        isTraversed[i]=0;
    }

    //implementing DFS , hope it works in one go :)
    //took a lot of retries developing it :(
    isTraversed[5]=1;
    //printf("NODE 0      ");
    DFS(5,2,isTraversed,graph);
    printf("disjoint=%d",disjoint);
}
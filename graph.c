#include "graph.h"

 
void CreateGraph(Graph *Gp)
{
    int i, j, k, w;
    bool isDirected;
    cout<<"无向图请输入0，有向图请输入1"<<endl;
    cin>>isDirected;
    cout<<"请输入顶点数和边数（空格分隔）："<<endl;
    cin>>Gp->numNodes>>Gp->numEdges;;
    for (i=1;i<=Gp->numNodes;i++)
    {
        for (j=1;j<=Gp->numNodes;j++)
        {
            if (i==j)
                Gp->matrix[i][j]=0;
            else
                Gp->matrix[i][j]=INT_MAX;
        }
    }
    cout<<"请输入边（vi, vj)和权值w,三个变量空格分隔即可："<<endl;
    for (k=0;k<Gp->numEdges;k++)
    {
        cin>>i>>j>>w;
        Gp->matrix[i][j]=w;
        if(!isDirected)
            Gp->matrix[j][i]=Gp->matrix[i][j];
    }
}
 
void ShowGraph(Graph M){
    int i, j;
    for(i=1;i<=M.numNodes;i++){
        for(j=1;j<=M.numNodes;j++){
            if(M.matrix[i][j]!=INT_MAX)
                cout<<M.matrix[i][j]<<" ";
        else
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
 
void Graph_Dfs(Graph M, int visiting_Node){
    bool *isVisited=new bool[M.numNodes];
    for(int i=1;i<M.numNodes;i++)
        isVisited[i]=false;
    int visited_count=0;//记录已经访问过的节点
    stack<int> p;
    while(visited_count<M.numNodes){
        if(isVisited[visiting_Node]==false){
            cout<<visiting_Node<<" ";
            visited_count++;
        }
        p.push(visiting_Node);
        isVisited[visiting_Node]=true;
        int j;
        for(j=1;j<=M.numNodes;j++){
            if(M.matrix[visiting_Node][j]!=0 && M.matrix[visiting_Node][j]!=INT_MAX && isVisited[j]==false )
                break;
        }
        if(j==M.numNodes+1){
            p.pop();
            if(!p.empty()){
                visiting_Node=p.top();
                p.pop();
            }
            else
                break;
        }
        else
            visiting_Node=j;
    }
}
 
void Graph_Bfs(Graph M, int visiting_Node){
    bool *isVisited=new bool[M.numNodes];
    for(int i=1;i<M.numNodes;i++)
        isVisited[i]=false;
    int visited_count=0;//记录已经访问过的节点
    queue<int> p;
    while(visited_count<M.numNodes){
        if(isVisited[visiting_Node]==false){
            cout<<visiting_Node<<" ";
            visited_count++;
        }
        isVisited[visiting_Node]=true;
        p.push(visiting_Node);
        for(int j=1;j<=M.numNodes;j++){
            if(M.matrix[visiting_Node][j]!=0 && M.matrix[visiting_Node][j]!=INT_MAX && isVisited[j]==false){
                p.push(j);
            }
        }
        p.pop();
        visiting_Node=p.front();
    }
}
 

#include "graph.h"

 
int main(void)
{
    Graph M;
    CreateGraph(&M);
    cout<<"邻接矩阵为："<<endl;
    ShowGraph(M);
 
    cout<<"该图的深度遍历为："<<endl;
    Graph_Dfs(M,1);
 
    cout<<endl;
 
    cout<<"该图的广度遍历为："<<endl;
    Graph_Bfs(M,1);
 
    return 0;
}

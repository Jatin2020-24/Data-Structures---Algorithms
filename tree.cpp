#include<iostream>
#include<vector>

using namespace std;

void addEdge(int x, int y, vector<vector<int> >& adj)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void printParents(int node, vector<vector<int>>& adj, int parent)
{
    if(parent==0)
        cout<<node<<"->Root"<<endl;
    else    
        cout<<node<<"->"<<parent<<endl;
}

int main()
{

}
#include <stdio.h>

#define V 5


void addEdge(int graph[V][V],int i , int j){
    graph[i][j]=graph[j][i]=1;

}


void displayGraph(int graph[V][V]){
    for(int i = 0 ; i<V*V ; i++){
        printf("%d%c", graph[i/V][i%V], ((i+1)%V) ? ' ':'\n');
    }
}


int main(){
    int matrix[V][V] = {0};
    addEdge(matrix,0,1);
    addEdge(matrix,0,2);
    addEdge(matrix,1,2);
    addEdge(matrix,1,4);
    displayGraph(matrix);
}


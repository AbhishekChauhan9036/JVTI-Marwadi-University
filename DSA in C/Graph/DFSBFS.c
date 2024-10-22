#include <stdio.h>
#include <stdlib.h>

struct Node {
    int vertex;
    struct Node* next;
};

struct Graph {
    int numVertices;
    struct Node** adjLists;
    int* visited;
};

struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
    graph->adjLists = (struct Node**)malloc(vertices * sizeof(struct Node*));
    graph->visited = (int*)malloc(vertices * sizeof(int));
    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

void DFS(struct Graph* graph, int vertex) {
    struct Node* adjList = graph->adjLists[vertex];
    struct Node* temp = adjList;
    graph->visited[vertex] = 1;
    printf("%d ", vertex);
    while (temp != NULL) {
        int connectedVertex = temp->vertex;
        if (graph->visited[connectedVertex] == 0)
            DFS(graph, connectedVertex);
        temp = temp->next;
    }
}

void BFS(struct Graph* graph, int startVertex) {
    struct Node* adjList;
    struct Node* temp;
    int* queue = (int*)malloc(graph->numVertices * sizeof(int));
    int front = 0;
    int rear = 0;
    graph->visited[startVertex] = 1;
    queue[rear] = startVertex;
    rear++;
    while (front < rear) {
        int currentVertex = queue[front];
        printf("%d ", currentVertex);
        front++;
        adjList = graph->adjLists[currentVertex];
        temp = adjList;
        while (temp != NULL) {
            int adjVertex = temp->vertex;
            if (graph->visited[adjVertex] == 0) {
                queue[rear] = adjVertex;
                rear++;
                graph->visited[adjVertex] = 1;
            }
            temp = temp->next;
        }
    }
    free(queue);
}

int main() {
    struct Graph* graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    printf("DFS Traversal: ");
    DFS(graph, 0);
    for (int i = 0; i < graph->numVertices; i++)
        graph->visited[i] = 0;
    printf("\nBFS Traversal: ");
    BFS(graph, 0);
    return 0;
}

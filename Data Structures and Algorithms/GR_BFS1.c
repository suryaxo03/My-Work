#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

int visited[MAX_NODES];
int queue[MAX_NODES];
int front = 0, rear = 0;

void enqueue(int node) {
  if (rear == MAX_NODES) {
    printf("Queue is full\n");
    return;
  }

  queue[rear] = node;
  rear++;
  visited[node] = 1;
}

int dequeue() {
  if (front == rear) {
    printf("Queue is empty\n");
    return -1;
  }

  int node = queue[front];
  front++;
  return node;
}

void BFS(int graph[MAX_NODES][MAX_NODES], int n, int start) {
  enqueue(start);

  while (front != rear) {
    int current = dequeue();
    printf("%d ", current);

    for (int i = 0; i < n; i++) {
      if (graph[current][i] && !visited[i]) {
        enqueue(i);
      }
    }
  }
}

int main() {
  int graph[MAX_NODES][MAX_NODES] = {
    {0, 1, 0, 1, 0},
    {0, 0, 1, 0, 1},
    {1, 0, 0, 1, 0},
    {0, 1, 0, 0, 1},
    {1, 0, 1, 0, 0},
  };

  BFS(graph, 5, 0);

  return 0;
}

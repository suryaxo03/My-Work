#include <stdio.h>

// Define the maximum number of nodes in the graph
#define MAX 100

// Function to print the adjacency matrix
void print_adjacency_matrix(int adjacency_matrix[MAX][MAX], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", adjacency_matrix[i][j]);
    }
    printf("\n");
  }
}

// Function to perform DFS traversal on the graph
void dfs(int adjacency_matrix[MAX][MAX], int n, int start) {
  // Initialize an array to keep track of whether a node has been visited
  int visited[MAX] = {0};

  // Push the starting node onto the stack
  int stack[MAX] = {start};
  int top = 0;

  // While the stack is not empty
  while (top >= 0) {
    // Pop the current node from the stack
    int current_node = stack[top];
    top--;

    // If the current node has not been visited
    if (!visited[current_node]) {
      // Visit the current node
      printf("%d ", current_node);
      visited[current_node] = 1;

      // For each neighbor of the current node
      for (int i = 0; i < n; i++) {
        // If the neighbor is not visited
        if (!visited[i] && adjacency_matrix[current_node][i] == 1) {
          // Push the neighbor onto the stack
          stack[++top] = i;
        }
      }
    }
  }
}

int main() {
  // Create the adjacency matrix
  int adjacency_matrix[MAX][MAX] = {{0, 1, 0, 1, 0},
                                   {0, 0, 1, 0, 1},
                                   {1, 0, 0, 1, 0},
                                   {0, 1, 0, 0, 1},
                                   {1, 0, 1, 0, 0}};

  // Print the adjacency matrix
  print_adjacency_matrix(adjacency_matrix, 5);

  // Perform DFS traversal on the graph
  dfs(adjacency_matrix, 5, 0);

  return 0;
}

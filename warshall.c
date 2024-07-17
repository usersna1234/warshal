#include <stdio.h>
int cost[10][10],n,i,j;
void warshall() {
    int i, j, k;
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cost[i][j] = cost[i][j] || (cost[i][k] && cost[k][j]);
            }
        }
    }
}
void main() {
    printf("Enter the number of vertices of the graph: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }
    warshall(cost, n);
    printf("The path matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", cost[i][j]);
        }
    }
}

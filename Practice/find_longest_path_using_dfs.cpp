Raja is in the process of developing a program that aims to analyze a social network and discover the longest chain of connections among its users.



Your task is to help him design a program that utilizes the Depth-First Search (DFS) algorithm to identify the most extended chain of friendships within the network.

Input format :
The first line of input consists of two integers "n" and "m", representing the number of users and the number of friendship connections in the social network, respectively.

The second line of input consists of each contain two integers, "u" and "v," where "u" and "v" are the user IDs of two users in the network who are friends.

Output format :
The output displays a single integer representing the length of the longest friendship chain within the network.



Refer to the sample output for the formatting specifications.

Code constraints :
The test cases will fall under the following constraints:

2 = n = 10

0 = m = n*(n-1)/2

1 = u, v = n, u ? v

Sample test cases :
Input 1 :
4 5
1 2
1 3
3 2
2 4
3 4
Output 1 :
3
Input 2 :
3 4
1 2
2 1
2 3
1 3
Output 2 :
2



#include <stdio.h>

#define MAXN 100

int dfs(int node, int adj[][MAXN], int dp[], int vis[], int n) {
    if (vis[node]) {
        return dp[node];
    }

    vis[node] = 1;
    int maxPath = 0;

    for (int i = 0; i < n; i++) {
        if (adj[node][i]) {
            int temp = 1 + dfs(i, adj, dp, vis, n);
            if (temp > maxPath) {
                maxPath = temp;
            }
        }
    }

    dp[node] = maxPath;
    return maxPath;
}

void addEdge(int adj[][MAXN], int u, int v) {
    adj[u][v] = 1;
}

int findLongestPath(int adj[][MAXN], int n) {
    int dp[MAXN] = {0};
    int vis[MAXN] = {0};

    int longestPath = 0;

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            int temp = dfs(i, adj, dp, vis, n);
            if (temp > longestPath) {
                longestPath = temp;
            }
        }
    }

    return longestPath;
}

int main() {
    int n, m;  
    scanf("%d", &n);
    
    int adj[MAXN][MAXN] = {0};
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(adj, u - 1, v - 1); 
    }

    printf("%d", findLongestPath(adj, n));
    return 0;
}


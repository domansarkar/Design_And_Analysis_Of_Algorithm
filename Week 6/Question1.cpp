#include <iostream>
#include <stack>
#define MAX 20
using namespace std;

// Function to check whether a path exists between 2 nodes of graph or not
bool isPathBFS(int *adjMatrix[MAX], int V, int src, int dest) {
    stack<int> st;
    bool *visited = new bool[V]();
    st.push(src);
    visited[src] = 1;
     
    while (!st.empty()) {
        int u = st.top();
        st.pop();

        for (int v = 0; v < V; ++v) {
            if (adjMatrix[u][v] && v == dest)
                return true;

            if (adjMatrix[u][v] && !visited[v]) {
                st.push(v);
                visited[v] = 1;
            }
        }
    }

    return false;
}

// Driver function
int main() {
    int t, v, src, dest;

    // t = No. of test cases
    cin >> t;

    while (t--) {
        cin >> v;
        int **adjMatrix = new int*[v];

        for (int i = 0; i < v; ++i) {
            adjMatrix[i] = new int[v];
            for (int j = 0; j < v; ++j)
                cin >> adjMatrix[i][j];
        }

        cin >> src >> dest;

        // Function call
        if (isPathBFS(adjMatrix, v, src, dest))
            cout << "Yes, path exists";
        else
            cout << "No, path doesn't exist";
        cout << endl;

        delete[] adjMatrix;
    }
    return 0;
}

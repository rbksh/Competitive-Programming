#include <bits/stdc++.h>
using namespace std;

int rowSum(int row[]) {
    int sum = 0;
    for (int i = 0; i <= row.size()-1; i++) {
        sum+=row[i];
    }
}

int indexOfMax(int arr[]) {
    int maxSum = mat[0][];
    for (int i = 0; i <= mat.size()-1; i++) {
        if (rowSum(mat[i][] > maxSum)) {
            maxSum = mat[i][];
        }
    }
}

int allRowSums(int mat[][]) {
    for (int i = 0; i <= mat.size()-1; i++) {
        int sumOfRow = rowSum(mat[i][]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin >> n >> m;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cin >> rowSum[][j]
        }
    }

    int rowSum[n][m];

    allRowSums(rowSum);
    int idx = indexOfMax(rowSum);


   return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define SIZE 1024

int n, m;
int arr[SIZE+1][SIZE+1];
int d[SIZE+1][SIZE+1];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            d[i][j] = d[i-1][j] + d[i][j-1] - d[i-1][j-1] + arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = d[x2][y2] - d[x2][y1-1] - d[x1-1][y2] + d[x1-1][y1-1];
        cout << result << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}
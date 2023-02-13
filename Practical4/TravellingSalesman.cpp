#include<bits/stdc++.h>
using namespace std;
int knapsack(int W, vector<int> &weight, vector<int> &value, int n) {
    int dp[n + 1][W + 1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int W, n;
    vector<int> weight, value;

    cout << "Enter the maximum capacity of the knapsack: ";
    cin >> W;

    cout << "Enter the number of items: ";
    cin >> n;

    weight.resize(n);
    value.resize(n);

    cout << "Enter the weights and values of the items: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Item " << i + 1 << ": ";
        cin >> weight[i] >> value[i];
    }

    cout << "The maximum value that can be obtained is: " << knapsack(W, weight, value, n) << endl;

    return 0;
}

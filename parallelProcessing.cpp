#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0; // Total execution time for all tasks
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        long long prefixSum = 0; // Sum of tasks assigned to the first processor
        long long ans = LLONG_MAX; // Initialize answer with the maximum possible value
        for (int i = 0; i < n; i++) {
            prefixSum += a[i]; // Calculate prefix sum iteratively
            // The time taken is the maximum of the current prefix sum and the remaining tasks
            long long timeTaken = max(prefixSum, sum - prefixSum);
            ans = min(ans, timeTaken); // Update the answer with the minimum time taken
        }
        
        cout << ans << endl; // Print the minimum execution time
    }
    return 0;
}
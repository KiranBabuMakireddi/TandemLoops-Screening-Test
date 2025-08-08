#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, int> counts;

    // Initialize counts for 1 to 9
    for (int i = 1; i <= 9; i++) {
        counts[i] = 0;
    }

    // Count multiples
    for (int num : nums) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                counts[i]++;
            }
        }
    }

    // Output results in order
    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << counts[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}

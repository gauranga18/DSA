#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN; // Minimum possible value for a 32-bit integer

    for (int st = 0; st < n; st++) {
        int currSum = 0; // Reset current sum for each starting index
        for (int en = st; en < n; en++) {
            currSum += arr[en]; // Accumulate the sum of the current subarray
            maxSum = max(currSum, maxSum); // Update maxSum if current sum is greater
        }
    }
    
    cout << "Maximum subarray sum: " << maxSum << endl;
    return 0;
}

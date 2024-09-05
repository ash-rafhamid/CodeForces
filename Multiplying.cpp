#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        vector<int> result;

        if (!arr.empty()) {
            vector<int> currentSegment;
            bool isPositive = arr[0] > 0;

            for (int num : arr) {
                if ((num > 0) != isPositive) {
                    if (!currentSegment.empty()) {
                        result.push_back(*max_element(currentSegment.begin(), currentSegment.end()));
                    }
                    currentSegment = {num};
                    isPositive = !isPositive;
                } else {
                    currentSegment.push_back(num);
                }
            }

            if (!currentSegment.empty()) {
                result.push_back(*max_element(currentSegment.begin(), currentSegment.end()));
            }
        }

        long long sum = 0;
        for (int num : result) {
            sum += num;
        }
        cout << sum <<endl;
    }
}

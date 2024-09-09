#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n), time(n);

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int initial_sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> time[i];
        if (time[i] == 1) {
            initial_sum += arr[i];
        }
    }

    int max_additional_sum = 0;
    int current_additional_sum = 0;

    for (int i = 0; i < k; ++i) {
        if (time[i] == 0) {
            current_additional_sum += arr[i];
        }
    }
    max_additional_sum = current_additional_sum;

    for (int i = k; i < n; ++i) {
        if (time[i - k] == 0) {
            current_additional_sum -= arr[i - k];
        }
        if (time[i] == 0) {
            current_additional_sum += arr[i];
        }
        max_additional_sum = max(max_additional_sum, current_additional_sum);
    }

    int result = initial_sum + max_additional_sum;
    cout << result << endl;

}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {

        long long int n, largest_odd = INT_MIN,largest_even = INT_MIN,smallest_even = INT_MAX;
        cin>>n;
        long long int arr[n],countEven=0,countOdd=0,sumEven=0;

        for(long long int i=0; i<n; i++) {
            cin>>arr[i];
            if (arr[i] % 2 == 0) {
                countEven++;
                sumEven += arr[i];
                if (arr[i] > largest_even) {
                    largest_even = arr[i];
                }if (arr[i] < smallest_even) {
                    smallest_even = arr[i];
                }
            }else {
                countOdd++;
                if (arr[i] > largest_odd) largest_odd = arr[i];
            }
        }

        if(countEven==0 || countOdd==0)cout<<0<<endl;
        else {
            if(largest_odd>largest_even)cout<<countEven<<endl;
            else {

                sumEven -= largest_even;
                sumEven += largest_odd;
                if(sumEven>largest_even)cout<<countEven<<endl;
                else cout<<countEven+1<<endl;
            }
        }


    }
}

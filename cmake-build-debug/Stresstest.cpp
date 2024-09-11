#include <iostream>
using namespace std;

int main()
{
    int n,countEven=0,countOdd=0,getOdd=0,getEven=0;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
        if(arr[i]%2!=0 && countOdd<=2) {
            countOdd++;
            getOdd=i;
        }else if(arr[i]%2==0 && countEven<=2) {
            countEven++;
            getEven=i;
        }
    }if(countEven==1)cout<<getEven+1<<endl;
    else cout<<getOdd+1<<endl;
}


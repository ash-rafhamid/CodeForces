#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int>store;
    store.push_back(0);
    for(int i=1; i<=3*10e5; i++)store.push_back(store[i-1]^i);
    while (t--) {
        int a,b;
        cin>>a>>b;
        int ans = b^store[a-1];

        if(ans==0)cout<<a<<endl;
        else if(ans != a)cout<<a+1<<endl;
        else cout<<a+2<<endl;
    }
}

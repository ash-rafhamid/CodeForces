#include <iostream>
#include <vector>
using namespace std;


//Xoring Operation
int countDifferentBits(int a, int b) {
    int xorResult = a ^ b;

    int count = 0;
    while (xorResult != 0) {
        if (xorResult & 1) {
            count++;
        }
        xorResult >>= 1;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,m,k;
    cin>>n>>m>>k;
    vector<int>vec(m+1);

    for(int i=0; i<m+1; i++) {
        cin>>vec[i];
    }

        int count = 0;
    for(int i=0; i<m; i++) {
        int result = countDifferentBits(vec[i],vec[m]);
        if(result<=k)count++;
    }cout<<count<<endl;

}



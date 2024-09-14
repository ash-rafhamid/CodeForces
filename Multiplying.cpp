#include <bits/stdc++.h>
using namespace std;

map<string,int> scores;
vector<pair<string,int> > v;
int n,s,ma;
string name;

int main() {
    cin>>n;
    for (int i=0 ; i<n ; i++)
    {
        cin>>name>>s;
        if (scores.find(name) != scores.end())
        {
            scores[name]+=s;
        }
        else
        {
            scores[name]=s;
        }
        v.push_back(make_pair(name,scores[name]));
    }
    ma=INT_MIN;
    for (map<string,int>::iterator it = scores.begin() ; it != scores.end() ; it++)
    {
        ma=max(ma,it->second);
    }

    for (int i=0 ; i<n ; i++)
    {
        pair<string,int> p = v[i];
        if (scores[p.first] == ma && p.second>=ma)
        {
            cout<<p.first;
            return 0;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a;
    vector<int> b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        b.push_back(y);
    }
    cout<<endl;
    vector<int> v;
    v.insert(v. end(),a.begin(),a.end());
    v.insert(v.end(),b.begin(),b.end());
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto &i:v){
        cout<<i<<" ";
    }

}

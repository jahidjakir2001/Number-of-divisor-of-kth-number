#include<bits/stdc++.h>
using namespace std;
const int mx=1e7;
void number_of_divisor(int a,int k)
{
    set<int>s;
    vector<int>v;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            s.insert(i);
            if(a/i!=i){
                s.insert(a/i);
            }
        }
    }
    for(auto u:s){
        v.push_back(u);
    }
    if(s.size()<k){
        cout<<"Not finding divisor of kth number"<<endl;
    }
    else{
        cout<<"Finding kth divisor is = "<<v[k-1]<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<"Enter two number:";
        int a,k;
        cin>>a>>k;
        number_of_divisor(a,k);
    }
}

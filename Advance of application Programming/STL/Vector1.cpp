#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int b = 15;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<min(a,b);
    cout<<max(a,b);

    vector<int> v1;
    v1.push_back(90);
    v1.push_back(40);
    v1.push_back(100);
    v1.push_back(670);
    v1.push_back(60);

    cout << v1.size()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
    cout<<endl;
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());

    for(auto i:v1){
        cout<<i<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string s;
int k;
vector<int> a;
void input(){
    cin>>k>>s;
}

void solve(){
    a.assign(s.size(), 1);
    priority_queue<int> pq;
    ll result = 0;
    for(int i = 0; i< s.size(); i++){
        int j = i;
        while(j--){
            if(s[i]==s[j]) {
                a[i] = a[j]+1;
                a[j] = 0;
                break;
            }
        }
    }

    for(int i = 0; i< s.size(); i++) if(a[i]) pq.push(a[i]);
    
    while (k--)
    {   
        int x = pq.top(); pq.pop();
        x--;
        pq.push(x);
    }    

    while (!pq.empty()) 
    { 
        result += pq.top()*pq.top();
        pq.pop();
    }

    cout<<result<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}
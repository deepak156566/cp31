#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(), x.end()
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,p;
	    cin>>n>>p;
	    vector<int>cap;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        cap.pb(a);
	    }
	    vector<int>cost;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        cost.pb(a);
	    }
	    vector<pair<int,int>>cost_cap;
	    for(int i=0;i<n;i++){
	        cost_cap.pb({cost[i],cap[i]});
	    }
	    sort(all(cost_cap));
	    int total=1;
	    int i=0;
	    ll sum=p;
	    while(total<n&&i!=n){
	        if(cost_cap[i].first>=p)
	        break;
	        int left=n-total;
	        if(left<cost_cap[i].second){
	            total=n;
	            sum+=(cost_cap[i].first*1ll*left);
	        }
	        else{
	            total+=cost_cap[i].second;
	            sum+=(cost_cap[i].first*1ll*cost_cap[i].second);
	        }
	        i++;
	        
	    }
	    if(total!=n){
	        sum+=((n-total)*1ll*p);
	    }
	    cout<<sum<<endl;
	    
	}

}

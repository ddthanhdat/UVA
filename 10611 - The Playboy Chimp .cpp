#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
vector<ll> v;
int bs1(ll x){
	int left=0, right=v.size()-1;
	int pos=-1;
	
	while(left<=right){
	//	cout << left  <<endl;
		int mid=(left+right)/2;
		
		if(v[mid]<=x){
			pos=mid;
			left=mid+1;
		}
		else right=mid-1;
		
	}
	return pos;
}

vector<ll> v2;
int main(){
//	freopen("ip.txt","r",stdin);
	int N; cin >> N;
	ll tmp;
	for(int i=0;i<N;i++){
		cin >> tmp;
		v2.push_back(tmp);
	}
	sort(v2.begin(),v2.end());
	
	// xoa trung
	v.push_back(v2[0]);
	for(int i=1;i<v2.size();i++){
		if(v2[i]!=v[v.size()-1]) v.push_back(v2[i]);
	}
	
	
	// Q
	cin >> N;
	
	for(int i=0;i<N;i++){
		cin >> tmp;
		
		int pos=bs1(tmp);
		if(v[pos]==tmp) {
			if(pos-1<0) cout << "X ";
			else cout << v[pos-1] <<" ";
			if(pos+1>v.size()-1) cout << "X" << endl;
			else cout << v[pos+1] << endl;
		}
		
		else {	
		if(pos<0) cout << "X ";
		else cout << v[pos] <<" ";
		if(pos+1>v.size()-1) cout << "X" << endl;
		else cout << v[pos+1] << endl;
		}
	}
}

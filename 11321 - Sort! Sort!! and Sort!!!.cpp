note: 
1- sort the N numbers in ascending order of their modulo M value.
2- odd number and an even number (that is their modulo M value is the same) then the odd number will precede the even number.
3- two odd numbers (that is their modulo M value is the same) then the larger odd number will precede the smaller odd number.
4- two even numbers (that is their modulo M value is the same) then the smaller even number will precede the larger even number.
-- Giải thích--
1- Các số N sort theo giá trị Modulo(chia lấy dư) M value.
vd: 6 - 0 mod 3
    1 - 1
2- 1 số lẻ và 1 số chẵn(cùng mod M) lẻ đứng trước.
3- 2 số lẻ(cùng mod M) lẻ lớn hơn đứng trước.
4- 2 số chẵn(cùng mod M) chẵn nhở đứng trước.
Code:
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <map>
#define ll long long
using namespace std;
vector<ll> v; ll m;
bool cmp(ll a, ll b){
	if(a%m==b%m){
		if(a%2!=0 && b%2!=0) return a>b;
		if(a%2==0 && b%2==0) return a<b;
		else 
		{
			if(a%2!=0 && b%2==0) return 1;
			else return 0;
		}
	}
	else{
		return a%m<b%m;
	}
}
int main(){
	
//	freopen("ip.txt","r",stdin);
//	freopen("rs.txt","w",stdout);
	ll n;
	ll a;
	while(cin >> n>>m){
		if(!n && !m) {
			cout << "0 0" << endl;
			break;
		}
		for(ll i=0;i<n;i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end(),cmp);
		
		cout << n << " " << m << endl;
		for(ll i=0;i<v.size();i++){
			cout << v[i] << endl;
		}
		v.clear();
	}
	return 0;

}

#include <iostream>
#include <string.h>
using namespace std;
	
int main(){
	long long n;
	while(cin >> n){
		cout << n << " = ";
		if(n<0)	{
			cout << -1;
			n=-n;
		}
		long long i=2;
		while(n>1){
			if(n%i==0) {
				n=n/i;
				cout << " x " << i;
			}
			else i++;
			
			
		}
		
		
		
		
		
	}
	
	
}

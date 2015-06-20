#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <map>
#define ll long long
#define e 2.71828182845904523536
using namespace std;



int p, q, r, s, t, u;
double tinh(double x){
	return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

// bibarysearch
double binarysearch(double left, double right){
	double mid;
	for(int i=0;i<50;i++){
		mid=(left+right)/2;
		double tmp=tinh(mid);
		if(tmp==0) return mid;
		else if(tmp<0) right=mid;
		else if(tmp>0) left=mid;
	}
	return mid;
}



int main(){
//	freopen("ip.txt","r",stdin);
	while(cin >>p>> q>> r>> s>> t>>u){
		double rs=binarysearch(0,1);
	//	cout << (int)tinh(rs) << endl << endl;
		if(tinh(0)*tinh(1)>0) 
			cout << "No solution" << endl;
		else
			printf("%.4lf\n",rs);
		
	}
	
	
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>v={3,6,4,1,8,2,6};
	sort(v.begin(),v.end());
	//It needs the vector to be sorted
	//because it implements binary search to find the value.
	//lower_bound: Finds the first position where the value is not less than the given value (≤).
	//upper_bound: Finds the first position where the value is greater than the given value (>).
	// these always returns the location. ex: iterator or pointer

	//lower_bound:
	auto lb=lower_bound(v.begin(),v.end(),6);
        
    /upper_bound:
	auto ub=upper_bound(v.begin(),v.end(),6);

	cout<<(lb-v.begin())<<endl; //output:4
	cout<<(ub-v.begin());	    //output:6
}

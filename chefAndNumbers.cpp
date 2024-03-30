/*
Intution -observe that sum of s(n)+s(s(n)) for any number even for largest number in the given constraints is less than 100 so our number must lie maximum upto n-100.And we can simply apply for loop from n-100 to n.And get our answer.
*/
#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll s(ll x){

    ll sum=0;

    while(x>0){

        sum+=x%10;

        x=x/10;

    }return sum;

}



int main() {

	// your code goes here

	ll n,c=0;

	cin>>n;

	for(int i=n-100;i<=n;i++){

	    if(i+s(i)+s(s(i))==n){

	        c++;

	    }

	}cout<<c<<endl;



}

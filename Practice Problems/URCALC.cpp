#include <bits/stdc++.h>
using namespace std;

int main() {
	long double a, b;
	char c;
	cin>>a>>b>>c;
	
	switch(c) {
	    case '+':
	        cout<<a+b<<endl;
	        break;
	    case '-':
	        cout<<a-b<<endl;
	        break;
	    case '*':
	        cout<<a*b<<endl;
	        break;
	    case '/':
	        cout<<fixed<<a/b<<endl;
	        break;
	}
	
	return 0;
}

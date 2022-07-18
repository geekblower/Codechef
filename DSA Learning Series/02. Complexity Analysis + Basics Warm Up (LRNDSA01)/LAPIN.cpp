#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    string str, str1="", str2="";
	    cin>>str;
	    int size = str.length();
	    
	    // Creating first half
	    for(int i=0; i<size/2; i++)
	        str1 += str[i];
	    
	    // Creating second half (with or without middle element)
	    if(size&1) {
	        for(int i=size/2+1; i<size; i++)
	            str2 += str[i];
	    } else {
	        for(int i=size/2; i<size; i++)
	            str2 += str[i];
	    }
	    
	    // Sorting both strings to arrange the alphabets
	    sort(str1.begin(), str1.end());
	    sort(str2.begin(), str2.end());
	    
	    // Comparing the strings
	    if(str1 == str2)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	
	return 0;
}

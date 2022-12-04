#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag=1;
  string s;
  string t;
  cin>>s;
  cin>>t;
  for(int i=0;i<s.size();i++)
  {if(s[i]!=t[i]){
      cout<<i+1<<endl;
      flag=0;
      break;
  }
   flag=1;  
  }
    if(flag==1){cout<<s.size()+1<<endl;}
	return 0;
}
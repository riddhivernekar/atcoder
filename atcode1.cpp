#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,n;
  int sum=0;
  char a[n];
  cin>>t>>n;
  for(int i=0;i<t;i++)
  {
      for(int j=0;j<n;j++)
      {cin>>a[j];
          if(a[j]=='#'){sum++;}
      }
  }
  cout<<sum<<endl;
    //
	return 0;
}

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main() {
int n,mx=-1e10;
 cin>>n;
 vector<int>a(n),ans;
 for(int i=0;i<n;i++)
 {
 	cin>>a[i];
     mx=max(mx,a[i]);
     cout<<mx<<" ";
 }
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	int X,A,B,result;
	std::cin >> t;
	while(t--)
	 {
	  cin>>X>>A>>B;
	  result=((100-X)*B+A)*10;
	  std::cout << result << std::endl;   
	 }
	return 0;
}

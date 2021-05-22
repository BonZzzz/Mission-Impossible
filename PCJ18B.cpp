#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{int n,sum=0;
	 cin>>n;
	 for(int i=n;i>0;i-=2)
	  {
	    sum+=pow(i,2);
	   }
	   
	   std::cout << sum << std::endl;
	    
	}
	return 0;
}

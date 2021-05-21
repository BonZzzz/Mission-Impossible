#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{int N,X,max=0;
	 cin>>N>>X;
	 int s[N],r[N],arr[N];
	 
	 for(int i=0;i<N;i++)
	    cin>>s[i]>>r[i];  
	  
	  
	  
	  for(int i=0;i<N;i++)
	    {  if(s[i]<=X && r[i]>max) 
	         { max=r[i];
	           
	         }
	    }
	    
	    
	  std::cout << max << std::endl;
	}
	return 0;
}

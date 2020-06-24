#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	char a,b;
	cin>>a>>b;
	
	int ch;
	cin>>ch;
	
	int ar[n]={0};
	int br[n]={0};
	int x;
	for(int i=0;i<n*n;i++)
	{
		cin>>x;
		//min operation
		if(ch==0)
		{
			if(a=='R')
			{
			ar[i/n]=min(ar[i/n],x);	
			}
			else
			{
				ar[i%n]=min(ar[i%n],x);
			}
		}
		else   
		{
				if(a=='R')
			{
			ar[i/n]=max(ar[i/n],x);	
			}
			else
			{
				ar[i%n]=max(ar[i%n],x);
			}
		}
		
	}
	
	
	
	
	for(int i=0;i<n*n;i++)
	{
		cin>>x;
		//min operation
		if(ch==0)
		{
			if(b=='R')
			{
			br[i%n]=min(br[i%n],x);	
			}
			else
			{
				br[i/n]=min(br[i/n],x);
			}
		}
		else   
		{
				if(b=='R')
			{
			br[i%n]=max(br[i%n],x);	
			}
			else
			{
				br[i/n]=max(br[i/n],x);
			}
		}
		
	}
	
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ans+=(ar[i]*br[j]);
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

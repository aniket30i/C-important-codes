#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k=0,v1,v2,sum;
	
	int arr[100];
	
	cout<<"enter a even number more than 2 "<<endl;
	cin>>n;
	
	for(i=2;i<=n;i++)
	    {
	        int c=0;
	        for(j=1;j<=i;j++)
	        {
	            if(i%j==0)
	            {
	                c++;
	            }
	        }
	         
	       if(c==2)
	       arr[k++]=i;
	    }
	for(i=0;i<k;i++)
	{
		for(j=k-1;j>0;j--)
		{
			sum=arr[i]+arr[j];
			if(sum==n)
			{
				v1=arr[i];
				v2=arr[j];
				break;
			}
		}
	}
	
	cout<<"The pairs are : "<<v1<<" "<<v2<<endl;
	
	return 0;
}

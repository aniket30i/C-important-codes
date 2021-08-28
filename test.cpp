#include<iostream>
using namespace std;
int main()
{
  int n,m,i,k=0,fam=0;
  
  //cout<<"Enter the number of soldiers";
  cin>>n>>m;
  int sol[n+1];
  
  //cout<<"Enter the soldiers pairs";
  
  for(i=0;i<m;i++)
  {
      cin>>sol[k++]>>sol[k];
      k++;
  }
  for(i=0;i<(n+1);i=i+2)
  {
  	
      if(sol[i]==sol[i+2] || sol[i+1]==sol[i+3] || sol[i+1]==sol[i+2])
      {
        fam++;
        i=i+2;
        
      }
        else if(sol[i]!=sol[i+2] && sol[i+1]!=sol[i+3] && sol[i+1]!=sol[i+2])
        {
            fam++;
            i=i+1;
            
        }
  }
  cout<<fam;
  
  return 0;
}

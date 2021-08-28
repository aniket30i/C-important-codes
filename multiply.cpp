#include<iostream>
using namespace std;

int main()
{
  int T,M,N,i=0,j;
  long sol;
  int store[1000];

  cin>>T;

  if(T<=1000)
  {
    while(T!=0)
    {
      cin>>M>>N;

      sol=M*N;
      store[i]=sol;
      i++;
      T--;
    }
  }
  else
  	cout<<"Out of range";
  std::cout.flush();
  for(j=0;j<T-1;j++)
  {
    cout<<store[j]<<endl;
}
}


#include<stdlib.h>
#include<iostream>
#include<cstring>
#include<String.h>
using namespace std;

int main()
{
  char str[1000];
  int T, N,r=0,i;

  cout << "Enter the number of plates"<<endl;
  cin >> N;

  char reclast[N];
  char recfirst[N];
  
  int flag=0;
  
  for(i=0;i<N;i++)
  {
    
  cout<<"enter the strings : ";
  cin>>str;
  int l;
  l=strlen(str);
  
  reclast[r++]=str[l-1];

  cout<<"This is the last :"<<reclast[r-1]<<endl;
  if(i>0)
  {
    recfirst[i-1]=str[0]; /// increment missed like an ass////////
    cout<<"This is the first :"<<recfirst[r-1]<<endl;
  }

  cout<<" val of i now : "<<i<<endl;
  }

	
		cout<<"LAST AND FIRST : "<<reclast[0]<<endl;
    cout<<"FIRST :" <<recfirst[r-1]<<endl;
    int k=r-1;
    cout<<" this is r-1: "<<k<<endl;
	
  /*
	if(flag==1)
	cout<<"Ordering is possible."<<endl;
	else
	cout<<"The door cannot be opened."<<endl; */
  }
  


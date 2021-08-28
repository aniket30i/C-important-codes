#include<iostream>
using namespace std;

int main()
{
	char name[100];
	char j;
	
	cout<<"input name";
	cin>>name;
	
	int i, ascii_fetch,new_ascii;
	
	int length=strlen(name);
	
	for(i=0;i<length;i++)
	{
		ascii_fetch=name[i];
		
		char x=ascii_fetch;
		new_ascii=ascii_fetch*2;
		
		if(new_ascii>122)
		{
			new_ascii=new_ascii-96;
		}
		
		name[i]=new_ascii;
	}
	cout<<" = "<<name;
	
	
}

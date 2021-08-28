#include<iostream>
#include<string>
using namespace std;
int subs(string input, string output[])
{
    if(input.empty())
    {
        return 1;
        output[0]="";
    }
    string smallString=input.substr(1);
    int smallStringsize=subs(smallString,output);
	int i;
    for(i=0;i<smallStringsize;i++)
    {
        output[i+smallStringsize]=input[0]+input[i];
    }
    output[i+smallStringsize]='\0';
    return 2*smallStringsize;

}
int main()
{
    string input;
    cin>>input;

    string* output=new string[1000];
    int count=subs(input,output);

    for(int i=0;i<count;i++)
    {
        cout<<output[i]<<endl;
    }
}

#include<iostream>
using namespace std;
bool realsearch(int a[], int min,int max,int s)
{
    if(min>max)
    return false;

    int mid=(min+max)/2;

    if(a[mid]== s)
        return true;
    if(a[mid]<s)
        return realsearch(a,mid+1,max,s);
    else
    {
        return realsearch(a,min,mid-1,s);
    }

}
bool binsearch(int a[],int s)
{
    int len=sizeof(a[0]);

    return realsearch(a, 0, len,s);

}

int main()
{

    int list []= { 2, 3,11,12,34,36,56,76,87,99};

    int s;

    cout<<"Enter the value to searcg in the array? "<<endl;
    cin>>s;

    if(binsearch(list,s)==true)
        cout<<"Value is present";
        else
        {
            cout<<"Value not present";
        }
        
    return 0;
    
}
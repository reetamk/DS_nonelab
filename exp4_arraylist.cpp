#include <iostream>
using namespace std;
const int maxsize=10;
int a[maxsize];
int n;
void create()//function to create aray
{   cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void del()//function to delete
{
    cout<<"Enter the position to remove"<<endl;
    int pos; //enter position
    cin>>pos;
    if(pos>=n)
    {
        cout<<"INVALID POSITION"<<endl;
    }
    else
    {
        for(int i=pos+1;i<n;i++)
        {
            a[i-1]=a[i];
            
        }n--;
    }
    
}
void insert()//function to insert
{ 
    cout<<"Enter the position to insert"<<endl;
    int pos,data;
    cin>>pos;//enter position
    if(pos>=n)
    {
        cout<<"INVALID POSITION"<<endl;
    }
    else
    {cout<<"Enter the data"<<endl;
        cin>>data;//enter the element
        for(int i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
            
            
        }a[pos]=data;
        n++;
    }
    
    
}

int main()
{
    cout<<"ARRAY LIST"<<endl;
    create();
    del();
    insert();
    cout<<"Array"<<endl;
    for(int i=0;i<n;i++)
    {   
        cout<<a[i]<<" ";
    }

    return 0;
}

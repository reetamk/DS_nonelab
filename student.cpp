#include<iostream>
using namespace std;
int main()
{
  struct student  
  {
    int roll;  //declaring datatypes
    char name[30];
    int age;
    int marks;
  };
  
  
  struct student p1 = {1,"Reetam"};//initializing data
  
  cout<<p1.roll<<"\n"<<p1.name<<"\n"<<p1.age<<"\n"<<p1.marks<<"\n"<<endl; //printing data

  
  
  
  return 0;
}

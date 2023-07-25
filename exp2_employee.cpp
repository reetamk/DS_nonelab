#include <iostream>
using namespace std;
struct Employee{
    char name[50];
    int age;
    float salary;
};
void getdetail(Employee *);
int main(void){
    Employee p;
    getdetail(&p);
    return 0;
}
void getdetail(Employee *ptr)
{
    cout << "Enter Full name: ";
    cin>>ptr->name;
    cout << "Enter age: ";
    cin >> ptr->age;
    cout << "Enter salary: ";
    cin >> ptr->salary;
}

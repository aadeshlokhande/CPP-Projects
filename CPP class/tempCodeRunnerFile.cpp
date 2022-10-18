// constuctor
#include<iostream>
using namespace std;
class Abc
{
    public:
        string Name;
        int Age,Mobile;
        void getdata(string name, int age, int mobile)
        {
            Name = name;
            Age = age;
            Mobile = mobile;
        }

        void printData()
        {
            cout<<"name = "<<Name<<endl;
            cout<<"age = "<<Age<<endl;
            cout<<"mobile = "<<Mobile<<endl;
        }
};

int main()
{
    Abc ob1;
    ob1.getdata("pragati",25, 23462348);
    ob1.printData();
}
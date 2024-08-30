//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implemention of Classes and Objects to Define Method inside Class

#include<iostream>
using namespace std;

class Student               
{
    public:
    void myMethod()
    {
        cout<<"I am studying in 2nd year";
    }
};

int main()
{
    Student s1;
    s1.myMethod();
}


/*Output:
I am studying in 2nd year*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
public:
    void set_age(int age)
    {
        this->age=age;
    }
    void set_first_name(string name)
    {
        first_name=name;
    }
    void set_last_name(string name)
    {
        last_name=name;
    }
    void set_standard(int stnd)
    {
        standard=stnd;
    }
    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }

    string to_strings()
    {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main()
{
    int age,standard;
    string first_name,last_name;
    cin>>age;
    cin>>first_name;
    cin>>last_name;
    cin>>standard;
    Student h;
    h.set_age(age);
    h.set_first_name(first_name);
    h.set_last_name(last_name);
    h.set_standard(standard);
    cout<<h.get_age()<<endl;
    cout<<h.get_last_name()<<", "<<h.get_first_name()<<endl;
    cout<<h.get_standard()<<endl<<endl;
    cout<<h.to_strings()<<endl;

}


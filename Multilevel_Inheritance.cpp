  #include<bits/stdc++.h>
 using namespace std;
 class Equilateral{
     public:
     void a()
     {
         cout<<"I am an equilateral triangle"<<endl;
     }

 };
 class Isosceles:public Equilateral{
     public:
     void b()
     {
         cout<<"I am an isosceles triangle"<<endl;
     }
 };
 class Triangle: public Isosceles{
     public:
     void c(){
         cout<<"I am an triangle"<<endl;
     }
 };


 int main()
 {
     Triangle x;
     x.a();
     x.b();
     x.c();
 }

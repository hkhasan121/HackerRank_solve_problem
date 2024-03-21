 #include<bits/stdc++.h>
 using namespace std;
 class Rectangle{
     public:
     int width;
     int height;
     void display()
     {
         cout<<width*height;
     }

 };

 class RectangleArea:public Rectangle
 {
     public:
     void read_input(int a,int b)
     {
         width=a;
         height=b;
     }
     void display()
     {
         cout<<width*height;
     }

 };

 int main()
 {
     int x,y;
     cin>>x>>y;
     cout<<x<<" "<<y<<endl;
     RectangleArea area;
     area.read_input(10,5);
     area.display();
 }

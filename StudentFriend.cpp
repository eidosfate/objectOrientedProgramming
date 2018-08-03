#include <iostream>
#include <conio.h>

using namespace std;
class abc;
class xyz
{ int a ;
  public:
   void get();
   void disp();
  friend void swap(xyz&, abc&);
};

class abc
{ int d;
  public:
    void get();
    void disp();
  friend void swap(xyz&, abc&);
};

void abc::get()
{
  cout<<"Enter Value:"; cin>>d;

}

void abc::disp()
{ cout<<"Value ="<<d<<endl;
}

void xyz::get()
{
  cout<<"Enter Value:"; cin>>a;
}

void xyz::disp()
{ cout<<"Value ="<<a<<endl;
}

int swap(xyz x,abc b)
{ int t;
  t=x.a;
  x.a=b.d;
  b.d=t;
}

int main()
{
  xyz x;
  abc b;
  x.get();
  b.get();
  x.disp();
  b.disp();
  swap(x,b);
  x.disp();
  b.disp();
  getch();
  return 0;
}

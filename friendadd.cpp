#include <iostream>
using namespace std;

class B;
class A {
    private:
      int numA;
    public:
      void get();
      void disp();
      // friend function declaration
      friend int add(A, B);
};

class B {
    private:
       int numB;
    public:
      void get();
      void disp();
       // friend function declaration
       friend int add(A , B);
};


void A::get()
{
  cout<<"Enter Value:"; cin>>numA;

}

void A::disp()
{ cout<<"Value ="<<numA;
}

void B::get()
{
  cout<<"Enter Value:";cin>>numB;
}

void B::disp()
{ cout<<"Value ="<<numB;
}

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int add(A objectA, B objectB)
{
   return (objectA.numA + objectB.numB);
}

int main()
{
    A objectA;
    B objectB;
    objectA.get();
    objectB.get();
    cout<<"Sum: "<< add(objectA, objectB);
    return 0;
}

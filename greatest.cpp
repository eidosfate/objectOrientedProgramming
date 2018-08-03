#include <iostream>
using namespace std;

class C;
class B;
class A {
    private:
      int numA;
    public:
      void get();
      void disp();
      // friend function declaration
      friend int greatest(A, B, C);
};

class B {
    private:
       int numB;
    public:
      void get();
      void disp();
       // friend function declaration
       friend int greatest(A , B, C);
};

class C{
    private:
       int numC;
    public:
      void get();
      void disp();
       // friend function declaration
       friend int greatest(A , B, C);
};


void A::get()
{
  cout<<"\nEnter Value of A:\n"; cin>>numA;


}
void A::disp()
{ cout<<"Value of A="<<numA<<endl;
}

void C::get()
{
  cout<<"Enter Value of C:\n"; cin>>numC;
}
void C::disp()
{ cout<<"Value of C="<<numC<<endl;
}

void B::get()
{
  cout<<"Enter Value of B:\n";cin>>numB;
}

void B::disp()
{
   cout<<"Value of B="<<numB<<endl;
}

// Function add() is the friend function of classes A and B
// that accesses the member variables numA and numB
int greatest(A objectA, B objectB, C objectC)
{
  int greatest=0;
	if(objectA.numA>objectB.numB && objectA.numA>objectC.numC)
		greatest=objectA.numA;
	else if(objectB.numB>objectA.numA && objectB.numB>objectC.numC)
		greatest=objectB.numB;
	else
		greatest=objectC.numC;
	return greatest;
}

int main()
{
    A objectA;
    B objectB;
    C objectC;
    objectA.get();
    objectB.get();
    objectC.get();
    objectA.disp();
    objectB.disp();
    objectC.disp();
    cout<<"\n\nGreatest: "<< greatest(objectA, objectB, objectC)<<endl;
    system("PAUSE");
    return 0;
}

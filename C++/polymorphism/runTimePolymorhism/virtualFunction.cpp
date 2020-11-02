#include<iostream>
using namespace std;
class A{
protected:
        int var;
        int x;
        int y;
public:
        virtual void setVal(int f,int g,int q){
            x=f;
            y=g;
        }

        virtual void getVal(){};
};
class B: public A{
  public:
        void setVal(int a,int b){
          x=a;
          y=b;
        }
         void getVal(){
            cout<<"The Sum of the Variables is : "<<x+y<<endl;
        }

};
class C: public A{
int z;
  public:
        void setVal(int a,int b,int c){
           x=a;
           y=b;
           z=c;
        }
         void getVal(){
            cout<<"The Product of the Variables is : "<<x*y*z<<endl;
        }

};
int main()
{
  A *base;
  B derrived;
  base = &derrived;
  base->setVal(523,234,0);
  base->getVal();
  
  A *base2;
  C derrived2;
  base2 = &derrived2;
  base2->setVal(12,23,45);
  base2->getVal();
  return 0;
}
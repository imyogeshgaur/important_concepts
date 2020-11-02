#include<iostream>
using namespace std;
class A{
protected:
        int var;
        int x;
        int y;
public:
        void setVal(int v){
          var=v;
        }
        void getVal(){
            cout<<"The Value of the Variable is : "<<var;
        }
};
class B: public A{
  public:
        void setVal(int a,int b){
          x=a;
          y=b;
        }
         void getVal(){
            cout<<"The Sum of the Variables is : "<<x+y;
        }

};
int main()
{
  B b;
  b.setVal(13,423);
  b.getVal();
return 0;
}
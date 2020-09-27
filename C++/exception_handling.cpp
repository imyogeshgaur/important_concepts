#include<iostream>
using namespace std;
int main()
{
  int a,b;
  try
  {
      cout<<"Enter First Number";
      cin>>a;
      cout<<"Enter the Second Number";
      cin>>b;
      cout<<"Output is : "<<float(a/b);
  }
  catch(exception)
  {
      cout<<"You are caught with exception ";
  }
  return 0;
}
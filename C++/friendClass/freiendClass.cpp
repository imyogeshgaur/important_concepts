#include <iostream>
using namespace std;
class Calculate;

class FriendClass
{
public:
    int addNumbers(Calculate);
    int substractNumbers(Calculate);
    int multiplyNumbers(Calculate);
    float divideNumbers(Calculate);
};
class Calculate
{
    int a, b;
    friend int FriendClass::addNumbers(Calculate);
    friend int FriendClass::substractNumbers(Calculate);
    friend int FriendClass::multiplyNumbers(Calculate);
    friend float FriendClass::divideNumbers(Calculate);


public:
    void getValue(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void printValue(int result)
    {
        cout << result<<endl;
    }
};
int FriendClass::addNumbers(Calculate object1)
{
    return object1.a + object1.b;
}
int FriendClass::substractNumbers(Calculate object1)
{
    return object1.a - object1.b;
}
int FriendClass::multiplyNumbers(Calculate object1)
{
    return object1.a * object1.b;
}
float FriendClass::divideNumbers(Calculate object1)
{
    return object1.a / object1.b;
}
int main()
{
    Calculate c1,c2,c3,c4;
    c1.getValue(1312, 1232);
    c2.getValue(1312, 1232);
    c3.getValue(1312, 1232);
    c4.getValue(1312, 1232);
    FriendClass fc;
    int res1 = fc.addNumbers(c1);
    c1.printValue(res1);
    int res2 = fc.substractNumbers(c2);
    c2.printValue(res2);
    int res3 = fc.multiplyNumbers(c3);
    c3.printValue(res3);
    float res4 = fc.divideNumbers(c4);
    c4.printValue(res4);
    return 0;
}

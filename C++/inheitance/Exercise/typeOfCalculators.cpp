#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
public:
    int addNumbers(int n1, int n2)
    {
        return n1 + n2;
    }
    int substractNumbers(int n1, int n2)
    {
        if (n1 > n2)
            return n1 - n2;
        else
            return n2 - n1;
    }
    int multiplyNumbers(int n1, int n2)
    {
        return n1 * n2;
    }
    double divideNumbers(double n1, double n2)
    {
        if (n1 > n2)
            return n2 / n1;
        else
            return n1 / n2;
    }
};
class ScientificCalculator : virtual public SimpleCalculator
{
public:
    double sineCalculator(double n)
    {
        return sin(n);
    }
    double cosineCalculator(double n)
    {
        return cos(n);
    }
    double tangentCalculator(double n)
    {
        return tan(n);
    }
    double logCalculator(double n)
    {
        return log(n);
    }
};
class HybridCalculator : virtual public SimpleCalculator, public ScientificCalculator
{
public:
    void getVal(int ch, int x, int y)
    {
        switch (ch)
        {
        case 1:
            cout << "The addition of the Numbers is " << addNumbers(x, y);
            break;
        case 2:
            cout << "The Substraction of the Numbers is " << substractNumbers(x, y);
            break;
        case 3:
            cout << "The Multiplication of the Numbers is " << multiplyNumbers(x, y);
            break;
        case 4:
            cout << "The Division of the Numbers is " << divideNumbers(x, y);
            break;
        default:
            cout << "Wrong Operation for Simple Calculator !!!!";
            break;
        }
    }
    void getVal(int ch, double a)
    {

        switch (ch)
        {
        case 1:
            cout << "The Sine of the Numbers is " << sineCalculator(a);
            break;
        case 2:
            cout << "The Cosine of the Numbers is " << cosineCalculator(a);
            break;
        case 3:
            cout << "The Tangent of the Numbers is " << tangentCalculator(a);
            break;
        case 4:
            cout << "The Log of the Numbers is " << logCalculator(a);
            break;
        default:
            cout << "Wrong Operation for Scientific Calculator !!!!";
            break;
        }
    }
};
int main()
{
    HybridCalculator hc;
    int ch1, ch2, num1, num2;
    float num3;
    cout << "Welcome to Our Calculator !!!" << endl;
    cout << "-----------------------------" << endl;
    cout << "Press 1 for Simple and 2 for Scientific Calculator !!!" << endl;
    cin >> ch1;
    if (ch1 == 1)
    {
        cout << "Press 1 For Addition !!!" << endl;
        cout << "Press 2 For Substraction !!!!" << endl;
        cout << "Press 3 For Multiplication !!!!" << endl;
        cout << "Press 4 For division !!!!" << endl;
        cin >> ch2;
        cout << "Enter First Number : " << endl;
        cin >> num1;
        cout << "Enter Second Number : " << endl;
        cin >> num2;
        hc.getVal(ch2, num1, num2);
    }
    else
    {
        cout << "Press 1 For Sine Calculation !!!" << endl;
        cout << "Press 2 For Cosine Calculation !!!" << endl;
        cout << "Press 3 For Tangent Calculation !!!" << endl;
        cout << "Press 4 For Log Calculation !!!" << endl;
        cin >> ch2;
        cout << "Enter the Number/ angle : " << endl;
        cin >> num3;
        hc.getVal(ch2, num3);
    }
    return 0;
}
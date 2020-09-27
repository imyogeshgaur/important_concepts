#include<iostream>
using namespace std;
enum random{Apple,Orange,Banana,Grapes,Litichi,Mango};
int main()
{
    random FavFruit;
    FavFruit = Mango;
    cout<<"Your Favourite fruit is at "<<FavFruit+1<<" position";
    return 0;
}
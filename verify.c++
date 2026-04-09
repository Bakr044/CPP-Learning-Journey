#include <iostream>
using namespace  std;

int main()
{
    int age;
    int points;


    cout << "enter your age" << endl;
    cin >> age ; "\n" ;
    cout << "enter your points" << endl;
    cin >> points ; "\n" ;


    cout << (age >= 18) && (points >= 500); 
}
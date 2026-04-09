#include <iostream>
using namespace  std;

int main()
{
    int age;
    int points;


    cout << "enter your age" << endl;
    cin >> age ;
    cout << "enter your points" << endl;
    cin >> points ;


    cout << boolalpha << (age >= 18) && (points >= 500); 
}

/*
Sample Output:
Enter your age: 20
Enter your points: 600
Result: true
*/
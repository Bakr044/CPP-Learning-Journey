#include <iostream>
using namespace std;

int main()
{
        cout << "Number Guessing" << endl ;

    int The_num;
        cout << "Enter your guess: " << endl ;
        cin >> The_num ; // 5

    if(The_num <= 5 && The_num > 0)
    {
        cout << "congratulation your Guess is right" << endl ;
    }

    else {
        cout << "Wrong guess, try again" << endl ;
    }


}

/*
Sample Output:
Enter your guess: 4
if it between 1-5
Result: congratulation your Guess is right
Enter your guess: 7
Result: Wrong guess, try again
*/
#include <iostream>
using namespace std;

int main()
{
    int answers[0];
    int points = 0;

    int nums[3][7]
    {
        {6, 10, 7, 6, 6, 11, 1},
        {5, 1, 1, 1, 2, 4, 21},
        {11, 9, 8, 8, 12, 20}

    };

    for (int i = 0; i < 3; i++) {
        cout << "Question " << i + 1 << ": Look at these numbers:\n";
        for (int j = 0; j < 7; j++) {
            cout << nums[i][j] << (j < 6 ? " | " : "");
        }
        
        cout << "\nWhich number is repeated? ";
        cin >> answers[i];

        
        int count = 0;
        for (int j = 0; j < 7; j++) {
            if (nums[i][j] == answers[i]) {
                count++;
            }
        }

       
        if (count > 1) {
            cout << "Correct! This number appeared " << count << " times.\n\n";
            points++;
        } else {
            cout << "Wrong! This number is not repeated.\n\n";
        }
    }

    cout << "Final Score: " << points << " / 3" << endl;
    return 0;
}


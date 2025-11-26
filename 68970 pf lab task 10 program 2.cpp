#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
 {
    srand(time(0));            
    int secret = rand() % 20 + 1;  
    int guess;
     cout << "I have selected a number between 1 and 20.\n";
     do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secret)
            cout << "Too high! Try again.\n";
        else if (guess < secret)
            cout << "Too low! Try again.\n";

    } while (guess != secret);
    cout << "Congratulations! You guessed the correct number: " << secret << endl;
     return 0;
}


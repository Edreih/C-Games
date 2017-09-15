// Guess My Number 2.0
// The computer will guess your number!

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	cout << "\tWelcome to 'Guess My Number'\n\n";

    int myNumber;
	while(true){
		cout << "Pick a number between 1 and 50 for the computer to guess... ";
		cin >> myNumber;

		if(myNumber >= 1 && myNumber <= 50){
			break;
		}
		cout << "The number was not between 1 and 50... Try again.\n\n";
	}

    srand(static_cast<unsigned int>(time(0)));  //seed random number generator
	int computerNumber = rand() % 50 + 1;  // random number between 1 and 50
	int maximum = 50;
	int minimum = 0;
	int tries = 0;

    while(computerNumber != myNumber){
	if(computerNumber < myNumber) {
            minimum = computerNumber;
            ++computerNumber;
        }
        else{
             maximum = computerNumber;
             --computerNumber;
        }
        cout << "\nThe computer Guesses: " << computerNumber << endl;
		++tries;
    }
        cout <<"\nThe computer guessed your number in only " << tries << " tries!\n\n";
    return 0;
}

// Animal Guessing Game
// A game where you guess an animal by a given description

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {ANIMAL, HINT, NUM_FIELDS};
    const int NUM_ANIMALS = 25;
    const string WORDS[NUM_ANIMALS][NUM_FIELDS] =
    {
        {"giraffe", "I've got a long neck, what animal am I?"},
        {"cat", "I've got 9 lives, what animal am I?"},
        {"dog", "I am considered mans best friend, what animal am I?"},
        {"horse", "I can gallop, what animal am I?"},
        {"snake", "Slytherin is my preferred house at Hogwarts. What am I?"},
        {"elephant", "I use my trunk to hydrate myself, what animal am I?"},
        {"kangaroo", "I carry my babies in a pouch, what animal am I?"},
        {"koala", "I love eucalyptus leaves, what animal am I?"},
        {"lion", "I'm the king of the jungle, what animal am I?"},
        {"monkey", "Bananas and swinging from trees are\n some of my favorite things. What animal am I?"},
        {"turtle", "Slow and steady wins the race. What animal am I?"},
        {"bear", "I love to hibernate. What animal am I?"},
        {"deer", "I've got antlers! What animal am I?"},
        {"rooster", "I love waking people up in the morning. What animal am I?"},
        {"shark", "I'm a big fierce fish in the sea. What am I?"},
        {"octopus", "I've got suction cups on my 8 hands! What am I?"},
        {"owl", "HOOT HOOT. I love the night. What animal am I?"},
        {"gecko", "Save 15% or more on car insurance when you guess who I am!"},
        {"frog", "I was just a wee tadpole yesterday. What am I?"},
        {"platypus", "Scientists had a hard time classifying me. What am I?"},
        {"jellyfish", "I sting if you touch me. What am I?"},
        {"rabbit", "Somebunny loves you. What animal am I?"},
        {"alligator", "See you later _______. What animal am I?"},
        {"crocodile", "In a while _________. What animal am I?"},
        {"squirrel", "I like to bury acorns and climb trees. What animal am I?"}
    };


    cout << "Welcome to Guess That Animal!\n\n";
    cout << "Guess the animal based on the hint given.\n";
    cout << "You have a maximum of 5 guesses until its GAME OVER! \n";
    cout << "Enter 'quit' to quit the game.\n\n";

    string guess;
    int NUM_GUESSES = 0;
    char playAgain = 'y';

    while((guess != "quit") && (playAgain == 'y') && (NUM_GUESSES != 5))
    {

    srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_ANIMALS);
    string theWord = WORDS[choice][ANIMAL];  // animal to guess
    string theHint = WORDS[choice][HINT];  // hint for animal
    cout << "\n\nThe hint is: " << theHint << "\n";
    cout << "\n\nYour guess: ";
    cin >> guess;

        while((guess != theWord) && (NUM_GUESSES < 5))
		{
        cout << "Sorry, that's not it.\n";
        NUM_GUESSES++;
        cout << "Number of guesses used so far: " << NUM_GUESSES << " out of 5.";
        cout << "\n\nYour guess: ";
        cin >> guess;

		}
        if(guess == theWord)
        {
        cout << "\nThat's it!  You guessed it!\n";
        cout << "Would you like to play again? Type y or n:  ";
        cin >> playAgain;
            if(playAgain == 'y')
            {
                NUM_GUESSES = 0;
            }
            else
            {
                cout << "Thanks for playing!\n";
                break;
            }
        }
        else if(NUM_GUESSES == 5)
        {
            cout << "\nGame Over. Thanks for playing!\n";
            cout << "The animal was:  " << theWord;
            cout << "\n\nWould you like to play again? Type y or n:  ";
            cin >> playAgain;
                if(playAgain == 'y')
                {
                    NUM_GUESSES = 0;
                }
                else
                {
                    cout << "Thanks for playing!\n";
                    break;
                }
        }

    }

    system("pause");
    return 0;
}

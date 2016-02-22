#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
  int correctNum;
  int guess;
  srand (time(NULL));
  correctNum = rand() % 100 + 1;
  cout << "Let's play a game. I'll pick a number and you have to guess it. ";

  do {
    cout << "Guess the number (1 to 100): ";
    cin >> guess; 
    if (correctNum<guess) cout << "The correct number is lower. ";
    else if (correctNum>guess) cout << "The correct number is higher. ";
  } while (correctNum!=guess);

  cout << "Congratulations! You got it. The correct number was " << correctNum;
  
  
  return 0;
}

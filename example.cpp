 #include <iostream>

 using namespace std;

 int main()
 {
  
   int randNum = rand() % 101;
   cout << randNum << endl;
   bool running = true;
   int inputNum = 0;
   cout << "Guess an integer between 0 and 100: " << endl;
   while (running) {
     int input = 0;
     cin >> input;
     cout << "You entered: " << input << endl;
     if (input < randNum && input > -1) {
       cout << "Your number is too small, try again: " << endl;
       running = true;
       inputNum++;
     }
     else if (input > randNum && input < 101) {
       cout << "Your number is too big, try again: " << endl;
       running =  true;
       inputNum++;
     }
     else if (input == randNum) {
       inputNum++;
       cout << "You guessed the number!" << endl;
       cout << "Number of guesses: " << inputNum << endl;
       cout << "Play again? (y/n)" << endl;
       char input2 = 'y';
       cin >> input2;
       if (input2 = 'y') {
 	running = true;
        randNum = rand() % 101;
 	cout << randNum << endl;
 	inputNum = 0;
       }
       else if (input2 = 'n') {
	running = false;
       }
     }
     else {
       cout << "Your number isn't an integer between the range of 0 and 100. " << endl;
       running = true;
     }
   }
     return 0;
 }

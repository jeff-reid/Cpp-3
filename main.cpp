#include <iostream>

using namespace std;

int main() {

    char letterArray[7];
    char letterNumbers;
    int digits, num;
    int numArray[7];

    cout << "'#' to stop" << '\n';
    cout << "Enter a telephone number expressed in letters: " << endl;

    while (letterNumbers != '#') {

        for (int i = 0; i < 7; i++) { //take the first 7 letters
            cin >> letterNumbers;
            if (letterNumbers == '#') //check for 'stop'
                break;
            letterArray[i] = toupper(letterNumbers);
        }

        if (letterNumbers == '#')
            break;

        for (int j = 0, k = 0; j < 7; j++, k++) {
            num = static_cast<int>(letterArray[j]) - static_cast<int>('A'); //cast then calculate
            digits = (num / 3) +2;

            if (((num / 3 == 6) || (num / 3 == 7)) //assign digit values
                && (num % 3 == 0))
                digits -= 1;

            if (digits > 9)
                digits = 9;

            numArray[k] = digits;
        }

        for (int l = 0; l < 3; l++) { //display '-' after first 3 digits
            cout << numArray[l];
        }
        cout << '-';
        for (int i = 3; i < 7; i++) {
            cout << numArray[i];
        }

        cout << endl;

        cout << "'#' to stop" << '\n';
        cout << "Enter a telephone number expressed in letters: " << endl;

    }

    cout << endl;

}
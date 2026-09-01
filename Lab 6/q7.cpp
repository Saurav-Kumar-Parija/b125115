//Message Inspector
#include <iostream>
using namespace std;

int main() {
    char sentence[200];
    cout << "Enter a sentence: ";
    //.getline is used so that full sentence is captured even after pressing space bar
    cin.getline(sentence, 200);

    char *ptr = sentence;

    int uppercase = 0;
    int lowercase = 0;
    int spaces = 0;

    while (*ptr != '\0') 
    {

        if (*ptr >= 'A' && *ptr <= 'Z') 
        {
            uppercase++;
        }
        else if (*ptr >= 'a' && *ptr <= 'z') 
        {
            lowercase++;
        }
        else if (*ptr == ' ') 
        {
            spaces++;
        }

        ptr++;
    }

    cout << "\nUppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}
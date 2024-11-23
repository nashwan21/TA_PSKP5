#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string input;
bool benar;
int count = 1;

bool isValidString(const string& str) {
    for(char ch : str){
        if (!isalpha(ch) && !isspace(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    while(!benar && count <= 3){
        cout << "Enter a string: ";
        getline(cin, input);

        if(isValidString(input)){
            benar = true;
            cout << "The string is valid." << endl;
        }else{
            count += 1;
            if(count == 4)
            cout << "The string is invalid." << endl;
        }
    }

    return 0;
}

// George Strauch
// turns a character string to all uppercase
// 04/10/2018

/* gets string from user
 * converts to char array
 * passes array into function that forces all to uppercase
 * prints new array
 * deletes array
 * */


#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//converts array to uppercase
void toUpperCase(char *chrptr, int length) {

    for (int i = 0; i < length; ++i) {
        chrptr[i] = (char)toupper(chrptr[i]);
    }
}

int main() {

    string strInput;
    cin >> strInput;

    char chrAry[strInput.length()];
    strcpy(chrAry, strInput.c_str());
    toUpperCase(chrAry, (int)strInput.length());

    cout << chrAry << endl;

    delete  chrAry;

    return 0;
}
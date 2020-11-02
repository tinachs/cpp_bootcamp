/*
Implement the decryption function of Caeser Cipher with custom length key and decrypt the following – the
application should ask for a key between (0-26), and then the cipher text, and shall print the decryption.

Key = 7,  Cipher = OLSSV
Key = 19, Cipher = VKRIMHZKTIAR
*/


#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

int main(){

    int key;
    cout << "Please enter the key value between 0-26: " << endl;
    cin >> key;

    char message[100];
    cout << "Please enter encrypted message " << endl;
    cin >> message;

    char DecryptedMessage[100];
    for(int i = 0; i < 100 && message[i] != '\0' ; i++){
        DecryptedMessage[i] = message[i]-key;

    }

    cout << "This is your decrypted message: " << DecryptedMessage << endl;

}


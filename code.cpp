#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// Function to calculate the shift value based on time and key
int calculateShift(int hour, int minute, int key) {
    return (hour + minute + key) % 26;
}

// Function to encrypt the message
string encrypt(string message, int key) {
    // Fetch current time
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hour = ltm->tm_hour;
    int minute = ltm->tm_min;

    // Calculate shift
    int shift = calculateShift(hour, minute, key);
    string encrypted = "";

    // Perform encryption
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            encrypted += (c - base + shift) % 26 + base;
        } else {
            encrypted += c; // Non-alphabetic characters remain unchanged
        }
    }
    cout << "Encryption Time: " << hour << ":" << minute << endl; // Display encryption time
    return encrypted;
}

// Function to decrypt the message
string decrypt(string encryptedMessage, int key, int hour, int minute) {
    // Calculate shift
    int shift = calculateShift(hour, minute, key);
    string decrypted = "";

    // Perform decryption
    for (char c : encryptedMessage) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            decrypted += (c - base - shift + 26) % 26 + base;
        } else {
            decrypted += c; // Non-alphabetic characters remain unchanged
        }
    }
    return decrypted;
}

int main() {
    int choice;

    cout << "Welcome to Temporal Shift Cipher Program!" << endl;

    while (true) { // For multiple operations
        cout << "\nChoose an option:" << endl;
        cout << "1. Encrypt a message" << endl;
        cout << "2. Decrypt a message" << endl;
        cout << "3. Exit program" << endl;
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            // Encryption process
            string message;
            int key;

            cout << "Enter the message to encrypt: ";
            getline(cin, message);
            cout << "Enter the numeric key: ";
            cin >> key;

            string encryptedMessage = encrypt(message, key);
            cout << "Encrypted Message: " << encryptedMessage << endl;

        } else if (choice == 2) {
            // Decryption process
            string encryptedMessage;
            int key, hour, minute;

            cout << "Enter the encrypted message: ";
            cin.ignore();
            getline(cin, encryptedMessage);
            cout << "Enter the numeric key: ";
            cin >> key;
            cout << "Enter the encryption time (hour and minute): ";
            cin >> hour >> minute;

            string decryptedMessage = decrypt(encryptedMessage, key, hour, minute);
            cout << "Decrypted Message: " << decryptedMessage << endl;

        } else if (choice == 3) {
            // Exit program
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    return 0;
}

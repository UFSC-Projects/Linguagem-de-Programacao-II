#include "cipher.hpp"

int main() {

    size_t key;

    cout << "----------------------------------" << endl;
    cout << "Encryption Program"         << endl << endl;

    cout << "Enter your access key: ";
    cin >> key;
    Cipher cipher(key);

    for(;;) {

        char op;
        string text;
        string textEncrypted;
        string textDecrypted;
        string path;

        cout << "----------------------------------" << endl;
        cout << "Encryption Program - key: " << key  << endl << endl;
        cout << "1. Encrypt Text"                    << endl;
        cout << "2. Decrypt Text"                    << endl;
        cout << "3. Login with a new access key"     << endl;
        cout <<                                         endl;
        cout << "0. Exit"                            << endl;
        cout << "----------------------------------" << endl;

        cin >> op;


        switch (op)
        {
        case '1':
            cout << "----------------------------------" << endl;
            cout << "Encryption Program"         << endl << endl;

            cout << "Enter text to be encrypted or name of the file to be encrypted: ";
            cin.ignore();
            getline(cin, text);

            cout << text << endl;
            if (cipher.ReadFile(text) != " ") {
                string text_file = cipher.ReadFile(text);
                textEncrypted = cipher.EncryptText(text_file);
                cipher.SaveFileText(textEncrypted, "encryptedtext.txt");
                cout << "Text file encrypted successfully." << endl << endl;
                break;
            } 

            textEncrypted = cipher.EncryptText(text);
            cipher.SaveFileText(textEncrypted, "encryptedtext.txt");
            cout << "Text encrypted successfully." << endl << endl;
            break;

        case '2':
            cout << "----------------------------------" << endl;
            cout << "Encryption Program"         << endl << endl;
            cout << "Enter the name of the file to be decrypted: ";
            cin >> path;
            textEncrypted = cipher.ReadFile(path);
            textDecrypted = cipher.DecryptText(textEncrypted);
            cout << "Text Encrypted: " << textEncrypted << endl;
            cout << "Text Decrypted: " << textDecrypted << endl;
            cipher.SaveFileText(textDecrypted, "decryptedtext.txt");
            break;

        case '3':
            cout << "----------------------------------" << endl;
            cout << "Encryption Program"         << endl << endl;
            cout << "Enter the new access key: ";
            cin >> key;
            cipher.RegenerateTable(key);
            break;
        case '0':


            return 0;
        default:
            break;
        }
    }
}
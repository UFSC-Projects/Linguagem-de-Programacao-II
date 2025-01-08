// Name: Igor fiedler de Bastos And Vitor Pacheco

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Model Functions
bool insertString(vector<string> &listWords, string word);
bool printIndexAndString(const vector<string> &listWords);
bool searchString(const vector<string> &listWords, string search);
bool searchSubstring(const vector<string> &listWords, string substring);
bool removeByIndex(vector<string> &listWords, size_t i);
bool removeBySubstring(vector<string> &listWords, string substring);
bool saveListWords(const vector<string> &listWords);
bool initializeListwords(vector<string> &listWords);

// View Functions
void menuView();

int main()
{
    vector<string> ListWords;

    // function to initialize vector by external file
    initializeListwords(ListWords);

    char op;
    string newWord;
    string search;
    string substring;
    size_t index;
    bool find;
    bool removeSucess;

    for (;;)
    {
        menuView();
        cin >> op;

        switch (op)
        {
        case '1':
            cout << "Type a word: ";
            cin >> newWord;
            insertString(ListWords, newWord);
            break;

        case '2':
            cout << "==== List Word ====" << endl << endl;
            printIndexAndString(ListWords);
            break;

        case '3':
            cout << "Enter with a word to search: ";
            cin >> search;
            cout << endl;
            find = searchString(ListWords, search);
            if (find == false)
            {
                cout << "Not word found." << endl;
            }
            break;

        case '4':
            cout << "Enter with a substring to search: ";
            cin >> substring;
            cout << endl;
            find = searchSubstring(ListWords, substring);
            if (find == false)
            {
                cout << "Not substring found." << endl;
            }
            break;

        case '5':
            cout << "Enter with an index to remove: ";
            cin >> index;
            cout << endl;
            removeSucess = removeByIndex(ListWords, index);
            if (!removeSucess)
            {
                cout << "Error, index out of range." << endl;
            }
            else
            {
                cout << "word at index '" << index << "' successfully removed.";
            }
            break;

        case '6':
            cout << "Enter with a substring to remove: ";
            cin >> substring;
            cout << endl;
            removeSucess = removeBySubstring(ListWords, substring);
            if (!removeSucess)
            {
                cout << "No words with substring '" << substring << "' found.";
            }
            else
            {
                cout << "all words with the substring '" << substring << "' were successfully removed.";
            }
            break;

        case '0':
            // Function to save list words in an external file
            saveListWords(ListWords);
            return 0;

        default:
            break;
        }
    }
}

// Model functions
bool insertString(vector<string> &listWords, string word)
{
    listWords.push_back(word);
    return true;
}

bool printIndexAndString(const vector<string> &listWords)
{
    for (size_t i = 0; i < listWords.size(); i++)
    {
        cout << "Index: " << i << " -> " << listWords.at(i) << endl;
    }
    return true;
}

bool searchString(const vector<string> &listWords, string search)
{
    bool find = false;
    for (size_t i = 0; i < listWords.size(); i++)
    {
        if (listWords.at(i) == search)
        {
            cout << "word " << search << " was found in the position " << i << endl;
            find = true;
        }
    }
    return find;
}

bool searchSubstring(const vector<string> &listWords, string substring)
{
    bool find = false;
    for (size_t i = 0; i < listWords.size(); i++)
    {
        size_t pos = listWords.at(i).find(substring);
        if (pos < listWords.at(i).size())
        {
            cout << "Substring " << substring << " found at pos: " << i << "  -> " << listWords.at(i) << endl;
            find = true;
        }
    }
    return find;
}

bool removeByIndex(vector<string> &listWords, size_t i)
{
    if (i > listWords.size())
    {
        return false;
    }
    listWords.erase(listWords.begin() + i);
    return true;
}

bool removeBySubstring(vector<string> &listWords, string substring)
{
    bool hasfound = false;
    size_t i = 0;
    while (true)
    {
        // Mudamos a verificação para o inicio do loop corrigindo assim o bug
        if (i >= listWords.size())
            break;
        string word = listWords.at(i);
        size_t pos = word.find(substring);
        if (pos < word.size())
        {
            listWords.erase(listWords.begin() + i);
            hasfound = true;
        }
        else
        {
            i++;
            // Verificação da linha 156 estava aqui ocasionando o bug
        }
    }

    return hasfound;
}

bool saveListWords(const vector<string> &listwords)
{

    ofstream file("listWords.txt");

    if (file.is_open())
    {

        for (size_t i = 0; i < listwords.size(); i++)
        {
            file << listwords.at(i) << endl;
        }
    }
    else
    {
        return false;
    }

    file.close();
    return true;
}

bool initializeListwords(vector<string> &listWords)
{

    ifstream file("listWords.txt");

    if (file.is_open())
    {

        string word;

        while (!file.eof())
        {
            getline(file, word);

            if (word != "")
            {
                listWords.push_back(word);
            }
        }
    }

    file.close();
    return true;
}

// View Functions
void menuView()
{
    cout << endl
         << endl
         << "--------------------------------------------" << endl
         << "UFSC String Store V.0" << endl
         << endl
         << "1. Insert string" << endl
         << "2. Print index and string" << endl
         << "3. Search string" << endl
         << "4. Search substring" << endl
         << "5. Remove by index" << endl
         << "6. Remove by substring" << endl
         << endl
         << "0. Quit" << endl
         << "--------------------------------------------" << endl
         << endl;
}

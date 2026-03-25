#include <iostream>
#include <cstring> 
#include <string>   

using namespace std;

int main() {
    
    cout << "--- Part 1: Dynamic Array Test ---" << endl;
    int maxSize = 100;
    char* word = new char[maxSize]; 
    
    cout << "Enter a word: ";
    cin.getline(word, maxSize); 
    int len1 = strlen(word);
    bool isPalindrome1 = true;
    for (int i = 0; i < len1 / 2; i++) 
    {
        if (word[i] != word[len1 - 1 - i]) 
        {
            isPalindrome1 = false; 
            break;
        }
    }
    
    if (isPalindrome1) 
    {
        cout << "Result: It is a palindrome!\n" << endl;
    } 
    else 
    {
        cout << "Result: It is NOT a palindrome.\n" << endl;
    }
       
    delete [] word; 
    
    cout << "--- Part 2: String Library Test ---" << endl;
    
    string str; 
    
    cout << "Enter a string: ";
    getline(cin, str); 
    
    int len2 = str.length(); 
    bool isPalindrome2 = true;
    
    for (int i = 0; i < len2 / 2; i++) 
    {
        if (str[i] != str[len2 - 1 - i]) 
        {
            isPalindrome2 = false;
            break;
        }
    }
    
    if (isPalindrome2)
    {
        cout << "Result: It is a palindrome!" << endl;
    } 
    else 
    {
        cout << "Result: It is NOT a palindrome." << endl;
    }

    return 0;
}
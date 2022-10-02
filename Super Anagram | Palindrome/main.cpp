//Name: Abdullah Awan
//Email: l217713@lhr.nu.edu.pk

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void super_anagram(string word1, string word2) {
    if (word1.size() == word2.size()) {     //Check If The Size OF Word1 Is Equal To Size Of Word2
        int flag = 0;      //Integar For Check
        for (int i = 0; i < word1.size(); i++) {    // Initializing i from 0 to Size of String
            for (int j = 0; j <= i; j++) {      // Initializing j from 0 to Equal to i
                if (word1[i] == word2[j]) {     //Check If Word1 i Index In Word2 
                    flag = 1;       //If i Index In Word1 Is In THe Word2 Then Flag will be 1
                }
            }
        }
        if (flag == 0) {        //Check If Flag After Passing Previous Loop
            cout << "No " << " ";   //If Flag Is Equal To 0 Then Print No
        }
        else {
            cout << "Yes" << " ";   //Else Flag Is Equal To 0 Then Print No
        }

    }
    else {
        cout << "No" << " ";    //If The Size OF Word1 Is Not Equal To Size Of Word2
    }
}

//Function Palindrome
void palindrome(string word) {
    int flag = 0; //Integar For Check
    int i = 0;
    int j = word.size();    //Initializing With the Size of Word
    while (i < word.size() / 2) {    //Loop Will Fun Until i is Less Than The Size of Word/2
        if (word[i] != word[j]) {    //Check If Word i Index Is Not Equal To Word J Index
            flag++;         //If Confition Is True Then Increment In Flag
        }
        if (flag > 1) {     //Check If Flag Is Greator Than 1
            break;          //If The Condition Is True Then Break From Loop
        }
        i++;        //Increment In i
        j--;        //Decrement In j
    }
    if (flag == 1) {    //Check If Flag Is Equal 1
        cout << "Yes" << " ";   //If Condition Is True Then Print Yes
        flag = 0;       //Assigning Flag To 0
    }
    else {
        cout << "No" << " ";    //If Condition Is False Then Print Yes
        flag = 0;       //Assigning Flag To 0
    }
}

void split(string str, char del) {
    string word1 = ""; //String To Store Word From String (str)
    string word2 = ""; //String To Store Word From String (str)
    int space = 0;
    for (int i = 0; i < str.size(); i++) {      //Initializing i from 0 to Size of String 
        if (space == 0) {           //Check The Space is equal to 0
            if (str[i] != del) {    //Check The Index of String is not equal to del || The del = ' ';
                word1 += str[i];     //Storing Index Value of String str To Word1
            }
            if (str[i] == del) {     //Check The Index of String is equal to del || The del = ' ';
                space += 1;         //Add 1 To Integar Space
            }
        }
        else if (space == 1) {     //Check The Space is equal to 0
            if (str[i] != del) {   //Check The Index of String is not equal to del || The del = ' ';
                word2 += str[i];   // Storing Index Value of String str To Word2
            }
        }
        else {
            i -= 1;
            palindrome(word1);      //calling Palindrome Function for Word1
            palindrome(word2);      //calling Palindrome Function for Word2
            super_anagram(word1, word2);        //calling Super_anagram Function for Words
            space = 0;         //Assigning the Space Value To 0 Because We Are Going To Use It Again In Split Function
            word1 = "";        //Restoring The Word1 String To Empty
            word2 = "";        //Restoring The Word2 String To Empty
        }
    }
    palindrome(word1);      //calling Palindrome Function for Word1
    palindrome(word2);      //calling Palindrome Function for Word2
    super_anagram(word1, word2);        //calling Super_anagram Function for Words
    cout << endl;
}

int main() {
    char del = ' ';
    int lines;
    string str, str1, str2, str3, str4, str5;
    cout << "Enter Number of Lines You Want To Enter: ";
    cin >> lines;
    if (lines == 1) {
        cout << "Enter String: " << endl;
        getline(cin, str);
        getline(cin, str1); //User To Enter string (str)
        split(str1, del); //Calling Split Function for string (str1)
    }
    if (lines == 2) {
        cout << "Enter String: " << endl;
        getline(cin, str);
        getline(cin, str1); //User To Enter string (str)
        getline(cin, str2); //User To Enter string (str)
        split(str1, del); //Calling Split Function for string (str1)
        split(str2, del); //Calling Split Function for string (str2)

    }
    if (lines == 3) {
        cout << "Enter String: " << endl;
        getline(cin, str);
        getline(cin, str1); //User To Enter string (str)
        getline(cin, str2); //User To Enter string (str)
        getline(cin, str3); //User To Enter string (str)
        split(str1, del); //Calling Split Function for string (str1)
        split(str2, del); //Calling Split Function for string (str2)
        split(str3, del); //Calling Split Function for string (str3)
    }
    if (lines == 4) {
        cout << "Enter String: " << endl;
        getline(cin, str);
        getline(cin, str1); //User To Enter string (str)
        getline(cin, str2); //User To Enter string (str)
        getline(cin, str3); //User To Enter string (str)
        getline(cin, str4); //User To Enter string (str)
        split(str1, del); //Calling Split Function for string (str1)
        split(str2, del); //Calling Split Function for string (str2)
        split(str3, del); //Calling Split Function for string (str3)
        split(str4, del); //Calling Split Function for string (str4)
    }
    if (lines == 5) {
        cout << "Enter String: " << endl;
        getline(cin, str);
        getline(cin, str1); //User To Enter string (str)
        getline(cin, str2); //User To Enter string (str)
        getline(cin, str3); //User To Enter string (str)
        getline(cin, str4); //User To Enter string (str)
        getline(cin, str5); //User To Enter string (str)
        split(str1, del); //Calling Split Function for string (str1)
        split(str2, del); //Calling Split Function for string (str2)
        split(str3, del); //Calling Split Function for string (str3)
        split(str4, del); //Calling Split Function for string (str4)
        split(str5, del); //Calling Split Function for string (str4)
    }
    return 0;
}

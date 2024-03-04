/*
Write a C++ program to accept a password and throw an exception if the password has less than 
6 characters or contain a digit or contain any special character or  
contain any capital letter.
*/



#include <iostream>
#include <string>
 
using namespace std;

bool hasDigit(const string& password) 
{
    for (char c : password) 
    {
        if (isdigit(c)) 
        {
            return true;
        }
    }
    return false;
}

bool hasSpecialCharacter(const  string& password) 
{
    for (char c : password)
    {
        if (!isalnum(c)) 
        {
            return true;
        }
    }
    return false;
}

bool hasCapitalLetter(const  string& password) 
{
    for (char c : password) 
    {
        if (isupper(c)) 
        {
            return true;
        }
    }
    return false;
}

void validatePassword(const  string& password) 
{
    if (password.length() < 6 || !hasDigit(password) || 
    !hasSpecialCharacter(password) || !hasCapitalLetter(password)) 
    {
        throw  invalid_argument("Password must be at least 6 characters long and contain \n at least one digit, one special character, and one capital letter.");
    }
}

int main() 
{
    string password;
    cout << "Enter password: ";
    cin >> password;

    try 
    {
        validatePassword(password);
        cout << "Password is valid." << endl;
    } 
    catch (const invalid_argument& e) 
    {
         cout << "Invalid password: \n" <<endl<<e.what() <<endl;
    }

    return 0;
}

 
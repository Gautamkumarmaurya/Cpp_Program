/*
Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.
*/

#include <iostream>
#include <string>
using namespace std;

void validateNickname(const  string& nickname) 
{
    if (nickname.length() > 8) 
    {
        throw  invalid_argument("Nickname must not exceed 8 characters.");
    }

    for (char c : nickname) 
    {
        if (isdigit(c) || ispunct(c) || isspace(c)) 
        {
            throw  invalid_argument("Nickname must not contain digits, special symbols, or spaces.");
        }
    }
}

int main() 
{
     string nickname;
     cout << "Enter nickname: ";
     cin >> nickname;

    try 
    {
        validateNickname(nickname);
         cout << "Nickname is valid." <<endl;
    } 
    catch (const  invalid_argument& e) 
    {
         cerr << "Invalid nickname: " << e.what() <<endl;
    }

    return 0;
}

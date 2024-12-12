// program for creating a new initial based on adding 1 to the code value of both initials

#include <iostream>
using namespace std; 

int main()
{
    
    //initializing variables
    
    char first;
    char second;
    int num1;
    int num2;
    char chars1;
    char chars2;
    
    //get intputs
    
    cout << "Enter your first initial: ";
    cin >> first;
    cout << "Enter your last initial: ";
    cin >> second;
    cout << endl;
    
    //convert char-num
    
    num1 = static_cast <int> (first);
    num2 = static_cast <int> (second);
    
    //convert num-chars along with adding for new value
    
    chars1 = static_cast <char> (first + 1);
    chars2 = static_cast <char> (second + 1);
    
    //outputting new code and corresponding initials
    
    cout << first << " has code " << num1 << endl;
    cout << num1 << " plus one is " << num1 + 1 << " which is the character " << chars1 << endl;
    cout << endl << second << " has code " << num2 << endl;
    cout << num2 << " plus one is " << num2 + 1 << " which is the character " << chars2 << endl;
    return 0;
}

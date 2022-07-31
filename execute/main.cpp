#include <iostream>
#include <string>
#include "../TypeofIntent.h"

using namespace std; 

int main()
{
    string strInput;
    cout << "Enter a pharse" << endl; 
    getline(cin, strInput);                     // Read the string 
    CIntentType intent(strInput);               // Passing the string to the object 
    cout << intent.getType() << endl;           // Fetcing the Intent
  
    return 0;
}
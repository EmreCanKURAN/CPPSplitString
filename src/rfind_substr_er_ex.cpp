#include <iostream>
#include <string>

using namespace std;
int main ()
{
//example string
string str = "1,2,3,4,5";

string delimiter = ",";

size_t found = str.rfind(delimiter);
//print all tokens except last one 
while (found != string::npos)
{
//create token with substr, which starts from the found position + 1
    string token = str.substr(found + delimiter.length(), str.length() - 1);
//erase the rest and create a substring from the found position to end of the string
    str.erase(found, str.length() - found);
    cout << token << '\n';
    found = str.rfind(delimiter);
}
//print the last one
cout << str << '\n';
return 0;
}

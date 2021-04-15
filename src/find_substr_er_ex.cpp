#include <iostream>
#include <string>

using namespace std;
int main ()
{
//example string
string str = "1,2,3,4,5";

string delimiter = ",";

size_t found = str.find(delimiter);
//print all tokens except last one 
while (found != string::npos)
{
//create a substring from the found position to end of the string
    string token = str.substr(0, found);
    str = str.erase(0, found + delimiter.length());
    cout << token << '\n';
    found = str.find(delimiter);
}
//print the last one
cout << str << '\n';
return 0;
}
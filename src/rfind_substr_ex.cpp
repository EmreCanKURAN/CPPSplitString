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
//create a substring from the found position to end of the string
    string token = str.substr(found + delimiter.length(), str.length() - 1);
    str = str.substr(0,found);
    cout << token << '\n';
    found = str.rfind(delimiter);
}
//print the last one
cout << str << '\n';
return 0;
}
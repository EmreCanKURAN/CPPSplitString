#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main ()
{
//example string
string str = "1:2s:3:4:5:6";
//delimiter
char delimiter = ':';
//create stringstream object
stringstream ss(str);
//temp string
string temp;
int i = 0;
vector<string> tokens;
//tokenize and add
while (getline(ss, temp, delimiter))
    tokens.push_back(temp);
//print
vector<string>::iterator it;
for (it = tokens.begin(); it < tokens.end(); it++)
    cout << *it << endl;
return 0;
}
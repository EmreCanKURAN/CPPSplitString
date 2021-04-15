#include <iostream>
#include <string>
#include<sstream>
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
while (getline(ss, temp, delimiter)) {
//tokenize
    cout << temp << endl;
}
return 0;
}
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
string arr[6];
int i = 0;
//tokenize and add
while (getline(ss, temp, delimiter)){
    arr[i] = temp;
    i++;
}
//print
for(int i = 0; i < 6; i++)
    cout << arr[i] << endl;
return 0;
}
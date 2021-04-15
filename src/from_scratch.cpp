#include <iostream>
#include <string>

using namespace std;
int main ()
{
//example string
string str = "1.2s.3.4.5.6";

string delimiter = ".";


int count = 0;
string token, ex ="";
for (int i = 0; i < str.length(); i++) {
    if(str[i] != delimiter[count]){
        if(count > 0 && count < delimiter.length())
            token += ex;
            ex = "";
        token += str[i];
        count = 0;
    }
    if(str[i] == delimiter[count]){
        count++;
        ex += str[i];
    }
    if(count == delimiter.length()){
        cout<<token<<endl;
        token = "";
        ex = "";
        count = 0;
    }
    if(i == str.length()-1 && count != delimiter.length()){
        token += ex;
        cout<<token;
    }
}
return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
//define the string
	string cppStrToSplit = "Split,this,string.";
//convert it to classical c string(char. array) and duplicate the str
//using strdup
	char * cStrToSplit = strdup(cppStrToSplit.c_str());
	char * token;
	cout<<"Splitted string:"<<endl;
//tokenize using ',' character
	token = strtok (cStrToSplit,",");
	while (token != NULL)
  {
//printing
		string abc(token);
		cout<<abc<<endl;
//calling with NULL pointer
		token = strtok (NULL, ",");
  }
	return 0;
}

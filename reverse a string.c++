#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str="Hello"; 
    int i;
    cout<<"String in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
    return 0;
}

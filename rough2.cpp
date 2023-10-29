#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str="race a car";  //initializing a string
    string temp = ""; //initializing a temporary string
    cout<<"initial string is: "<<str<<endl;

    
    for (int i = 0; i < str.size(); ++i) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'  )|| (str[i] >= '0' && str[i] <= '9'  )) //initializing condition  
        {
            temp = temp + str[i];//passing characters that match condition to temp string from initialized string
        }
    }
    str = temp;//initializing temp as new string 


     string P = str;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
    cout << P<<endl;
 
    // If S is equal to P
    if (str == P)
    {
        // Return "Yes"
        cout <<"True"<<endl;
    }
    // Otherwise
    else
    {
        // return "No"
        cout << "False"<<endl;
    }


    cout << "modified String is: " << str <<endl;//getting output
    return 0;
}
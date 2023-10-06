// Character Exploration: Create a program that takes a text input 
// from the user and prints out the first, second, and last characters 
// of the input. Example str1 = "saddleback college", str1[0] is s, 
// str1[1] is a, str1[17] is e
#include<iostream> 
using namespace std; 
int main() { 
    string s; 
    getline(cin, s);
    int x = s.length(); 
    cout << s[0] << " " << s[1] << " " << s[x-1] << endl;
    //alternative: 
    //cout << s[0] << " " << s[1] << " " << s[s.length()-1] << endl;
}

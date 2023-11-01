// Write a program that asks the user for their email address and extracts 
// the domain name from it. For example if the input is myemail@saddleback.edu, 
// the output should be saddleback.edu. 
#include<iostream> 
using namespace std; 
int main() { 
    string em, domain = "";
    getline(cin, em); 

    int cutOfPosition = 0; 
    for(int i = 0; i < em.length(); i++) { 
        if (em[i] == '@') {
            cutOfPosition = i + 1; 
            break;  
        }
    }
    for (int i = cutOfPosition; i < em.length(); i++) { 
        domain += em[i]; 
    }

    // Alternative Solution 
    // bool shouldWeStart = false;
    // for(int i = 0; i < em.length(); i++) { 
    //     if (em[i] == '@') { 
    //         shouldWeStart = true;
    //         continue;        // we could do i++ instead
    //     }
    //     if (shouldWeStart) { // it means shouldWeStart == true
    //         domain += em[i];
    //     }
    // }

    cout << domain << endl; 
}
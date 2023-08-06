#include<bits/stdc++.h>
using namespace std;

string getPassword(int letters,int numbers,int symbols) {
    int n = letters + numbers + symbols, pos;  // n stores password length
    string ans;                                // final password string
    
    while(n>0) {
        pos = rand()%95+32; // generate random number from ascii 32 to 126
                            // check for letters, numbers, and symbols.
        if((pos>='a' && pos<='z') || (pos>='A' && pos<='Z')) {
            if(letters) {   // keeps track of number of letters
                ans+=pos;
                letters--;  
                n--;
            }
        }
        else if(pos>='0' && pos<='9') {
            if(numbers) {   // keeps track of number of letters
                ans+=pos;
                numbers--;
                n--;
            }
        }
        else {
            if(symbols) {   // keeps track of number of letters
                ans+=pos;
                symbols--;
                n--;
            }
        }
    }
    return ans;
}

int main() {
    srand(time(0));

    int letters,numbers,symbols;
    cout << "How many letters do you want in your password? ";
    cin >> letters;
    cout << "How many numbers do you want in your password? ";
    cin >> numbers;
    cout << "How many symbols do you want in your password? ";
    cin >> symbols;
    cout << "This is your password as per your requirements:\n" << getPassword(letters,numbers,symbols) << "\n";
    return 0;
}

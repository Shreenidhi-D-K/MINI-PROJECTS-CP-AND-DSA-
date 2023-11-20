#include<bits/stdc++.h>
using namespace std;
map<char,string>TextToMorse;
map<string,char>MorseToText;

void doTextToMorse() {
    string input,output;
    
    cout << "Enter text in one line:\n";
    cin.ignore();
    
    getline(cin,input);
    for(char i:input) {
        if(i==' ') output+=' ';
        else if(i>='0' && i<='9') output+=TextToMorse[i];
        else {
            if(i<='Z') i+='a'-'A';
            if(TextToMorse.find(i)==TextToMorse.end()) {
                output="Invalid text";
                break;
            }
            output+=TextToMorse[i];
        }
        output+=' ';
    }
    cout << "Output: " << output << "\n";
}

void doMorseToText() {
    string input,output,c;

    cout << "Enter Morse in one line:\n";
    cin.ignore();
  
    getline(cin,input);
    for(char i:input) {
        if(i==' ') {
            output+=MorseToText[c];
            c="";
        } else {
            c+=i;
        } 
    }
    if(c.size()>0) output+=MorseToText[c];
    if(output.size()==0) output = "Invalid Morse";
    cout << "Output: " << output << "\n";
}
int main() {


    TextToMorse['a']= ".-";
    TextToMorse['b']= "-...";
    TextToMorse['c']= "-.-.";
    TextToMorse['d']= "-..";
    TextToMorse['e']= ".";
    TextToMorse['f']= "..-.";
    TextToMorse['g']= "--.";
    TextToMorse['h']= "....";
    TextToMorse['i']= "..";
    TextToMorse['j']= ".---";
    TextToMorse['k']= "-.-";
    TextToMorse['l']= ".-..";
    TextToMorse['m']= "--";
    TextToMorse['n']= "-.";
    TextToMorse['o']= "---";
    TextToMorse['p']= ".--.";
    TextToMorse['q']= "--.-";
    TextToMorse['r']= ".-.";
    TextToMorse['s']= "...";
    TextToMorse['t']= "-";
    TextToMorse['u']= "..-";
    TextToMorse['v']= "...-";
    TextToMorse['w']= ".--";
    TextToMorse['x']= "-..-";
    TextToMorse['y']= "-.--";
    TextToMorse['z']= "--..";
    TextToMorse['1']= ".----";
    TextToMorse['2']= "..---";
    TextToMorse['3']= "...--";
    TextToMorse['4']= "....-";
    TextToMorse['5']= ".....";
    TextToMorse['6']= "-....";
    TextToMorse['7']= "--...";
    TextToMorse['8']= "---..";
    TextToMorse['9']= "----.";
    TextToMorse['0']= "-----";


    MorseToText[".-"] = 'a';
    MorseToText["-..."] = 'b'; 
    MorseToText["-.-."] = 'c' ;   
    MorseToText["-.."] = 'd' ;  
    MorseToText["."] = 'e' ;
    MorseToText["..-."] = 'f';    
    MorseToText["--."] = 'g'  ; 
    MorseToText["...."] = 'h';    
    MorseToText[".."] = 'i'  ;
    MorseToText[".---"] = 'j' ;   
    MorseToText["-.-"] = 'k' ;  
    MorseToText[".-.."] = 'l'  ;  
    MorseToText["--"] = 'm' ; 
    MorseToText["-."] = 'n' ; 
    MorseToText["---"] = 'o';   
    MorseToText[".--."] = 'p';    
    MorseToText["--.-"] = 'q';    
    MorseToText[".-."] = 'r'   ;
    MorseToText["..."] = 's'   ;
    MorseToText["-"] = 't' ;
    MorseToText["..-"] = 'u'   ;
    MorseToText["...-"] = 'v' ;   
    MorseToText[".--"] = 'w'   ;
    MorseToText["-..-"] = 'x'  ;  
    MorseToText["-.--"] = 'y'  ;  
    MorseToText["--.."] = 'z' ;   
    MorseToText[".----"] = '1';
    MorseToText["..---"] = '2';
    MorseToText["...--"] = '3';
    MorseToText["....-"] = '4';
    MorseToText["....."] = '5';
    MorseToText["-...."] = '6';
    MorseToText["--..."] = '7';
    MorseToText["---.."] = '8';
    MorseToText["----."] = '9';
    MorseToText["-----"] = '0';

    int c;
    cout << "Enter 1 for Text to Morse Converter\n";
    cout << "Enter 2 for Morse to Text Converter\n";
    cout << "Enter 3 to exit\n";
    cin >> c;
    switch(c) {
        case 1: doTextToMorse();
                break;
        case 2: doMorseToText();
                break;
        case 3: cout << "Program terminated\n";
                break;
    }
}

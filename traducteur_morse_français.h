#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

map<string, char>dicoFrancais{
    {".-",'A'},
    {".",'E'},
    {"...",'S'},
    {"..",'I'},
    {"-.",'N'},
    {"-",'T'},
    {".-.",'R'},
    {".-..",'L'},
    {"..-",'U'},
    {"---",'O'},
    {"-..",'D'}, 
    {"-.-.",'C'},
    {".--.",'P'},
    {"--",'M'},
    {"...-",'V'},
    {"--.",'G'},
    {"..-.",'F'},
    {"-...",'B'},
    {"--.-",'Q'},
    {"....",'H'}, 
    {"-..-",'X'},
    {".---",'J'},
    {"-.--",'Y'},
    {"--..",'Z'},
    {"-.-",'K'},
    {".--",'W'},
    {" ",' '}
    };

string traducteur_francais(string morse){
    string lettre_morse;
    string francais;
    int i=0;
    int longueur=morse.size();
    while (i<longueur){
        char caractere=morse[i];
        i+=1;
        if (caractere != '&'){
            lettre_morse+=caractere;
        }
        else {
            char lettre_francais=dicoFrancais[lettre_morse];
            francais+=lettre_francais;
            lettre_morse="";
        }
    }
    return francais;
}

#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

map<char, string>dicoMorse{
    {'A', ".-"},
    {'E', "."},
    {'S', "..."},
    {'I', ".."},
    {'N', "-."},
    {'T', "-"},
    {'R', ".-."},
    {'L', ".-.."},
    {'U', "..-"},
    {'O', "---"},
    {'D', "-.."}, 
    {'C', "-.-."},
    {'P', ".--."},
    {'M', "--"},
    {'V', "...-"},
    {'G', "--."},
    {'F', "..-."},
    {'B', "-..."},
    {'Q', "--.-"},
    {'H', "...."}, 
    {'X', "-..-"},
    {'J', ".---"},
    {'Y', "-.--"},
    {'Z', "--.."},
    {'K', "-.-"},
    {'W', ".--"},
    {' '," "}
    };

string traducteur_morse(string texte){
    string morse;
    int taille=texte.size();
    for (int i=0;i<taille;i++){
        char caractere=texte[i];
        morse+=dicoMorse[caractere];
    }
    return morse;
}







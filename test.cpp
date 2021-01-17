#include "traducteur_français_morse.h"
#include "traducteur_morse_français.h"
int main(){
    int i;
    cout<<"Si  vous voulez écire en français tapez 1, si vous voulez écrire en morse tapez 2"<<endl;
    cin>>i;
    if (i==1){
        cout<<"Veuillez entrer votre texte en français"<<endl;
        string texte;
        cin.ignore();
        getline(cin,texte);
        string tra=traducteur_morse(texte);
        cout<<tra<<endl;
    }
    else{
        if (i==2){
            cout<<"Veuillez entrer votre texte en morse (mettre le symbole & après  chaque lettre morse)"<<endl;
            string texte;
            cin.ignore();
            getline(cin,texte);
            string tra=traducteur_francais(texte);
            cout<<tra<<endl;

        }
    }
    return 0;
}

           

//to compile with use the flag -std=c++11

#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main () {
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;

    char letrasVogaisP[] = {'a','e','i','o','u'};
    char letrasVogaisM[] = {'A','E','I','O','U'};
    char letrasConsoantesP[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    char letrasConsoantesM[] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};

    if(std::find(std::begin(letrasVogaisP),std::end(letrasVogaisP),letra) != std::end(letrasVogaisP) || std::find(std::begin(letrasVogaisM),std::end(letrasVogaisM) , letra) != std::end(letrasVogaisM)){

        cout << "a letra '" << letra << "' eh uma vogal" << endl;

    }else if(std::find(std::begin(letrasConsoantesP),std::end(letrasConsoantesP),letra) != std::end(letrasConsoantesP) || std::find(std::begin(letrasConsoantesM) , std::end(letrasConsoantesM) , letra) != std::end(letrasConsoantesM)){

        cout << "a letra '" << letra << "' eh uma consoante" << endl;

    }else{

        cout << "valor invalido" << endl;

    }

    system("pause");
    return 0;
}
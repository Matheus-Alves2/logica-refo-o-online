#include <iostream>
using namespace std;

int main()
{  system("cls");

  cout << "Iniciando o programa do gui \n";

    string nome = "";
    string resposta = "não";
     
    cout << "Voce gostaria de informar o seu nome? sim/não";
    cin >> resposta;
    if (resposta == "sim")
    {
        cout << "Qual e o seu nome";
      cin >> nome; << endl;
        cout << "Bem vindo, " << nome;
    }
    

  cout << "Fim do programa!!" << endl;  
    return 0;
}

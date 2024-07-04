#include <iostream>
using namespace std;
/*perguntar para um jogador e a sua idade. Exibir qual e a sua categoria no esporte
da sua seguinte forma*/ 

// infantil - 3 a 11 anos
// juvenil - 12 a 17 anos
// adulto - 18 a 30 anos
// master - aci,a de 35
int main()
{
    int idade = 8;

    if (idade >=3 && idade <= 11)
    {
        cout << "Voce esta na categoria infantil" << endl;
    }
    else if (idade >= 12 && idade  <= 17)
    {
        cout << "Voce esta na categoria juvenil" << endl;
    }
    else if (idade >= 18 && idade  <= 34)
    {
        cout << "Voce esta na categoria adulto" << endl;
    }
    else if (idade >= 35)
    {
        cout << "Voce esta na categoria master" << endl;
    }
    else
    {
        cout << "Voce nao idade suficiente para fazer este esporte" << endl;
    }
    
    
    
    





    return 0;
}

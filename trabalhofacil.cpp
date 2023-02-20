#include <iostream>
using namespace std;
int main()
{   int i, idade, olhos, cabelos, qtdIP=0, somaId =0, qtdId=0, qtdAzul=0, qtdRuivo=0;
    float peso, altura;
   
   for (i=1; i<=6 ; i++)
   {
       cout << "Idade..: ";
       cin >> idade;
       cout << "Peso..: ";
       cin >> peso;
       cout << "Altura..: " ;
       cin >> altura;
       cout << "Cor dos Olhos: \n1-Azul \n2-Preto \n3-Verde \n4-Castanho \nOpção..: ";
       cin >> olhos;
       cout << "Cor dos Cabelos: \n1-Preto \n2-Castanho \n3-Loiro \n4-Ruivo \nOpção..: ";
       cin >> cabelos;
       cout << "---------------------------------------------------------------\n";
       //calculando a quantidade de pessoas com idade > 50 e peso < 60
       if (idade > 50 && peso < 60)
       {
           qtdIP++;  // qtdIP = qtdIP +1;
       }
       
       // Calculando a média de idade das pessoas com altura < 1.50
       if (altura < 1.50)
       {
           somaId = somaId + idade;
           qtdId++;
       }
       // Calculando a porcentagem de pessoas com olhos azuis
       if (olhos == 1)
       {
           qtdAzul++;
       }
       
       // Calculando aquantidade de pessoas Ruivas sem olhos azuis
       if (cabelos == 4 && olhos != 1)  //!= é o operador diferente
       {
           qtdRuivo++;
       }
       
       
       
   } // fim for
    // Resultados
    cout << "\n-------------RESULTADO----------------";
    cout << "\nQuantidade de pessoas com idade > 50 e peso < 60..: " << qtdIP;
    // precisamos verificar se qtdId é maior que zero porque não existe divisão por zero
    if (qtdId >0)
    {
        cout << "\nMédia de idade das pessoas com altura < 1.50 ..: " << somaId/qtdId << " anos.";
    
    }
    else
    { 
        cout << "\nNão temos nenhuma pessoa abaixo de 1.50 de altura.";
    }
    
    cout<< "\nPorcentagem de pessoas com olhos azuis..: " << qtdAzul * 100 /(i-1) << "%";
    cout << "\nQuantidade de pessoas Ruivas sem olhos azuis..: " << qtdRuivo;
    return 0;
}

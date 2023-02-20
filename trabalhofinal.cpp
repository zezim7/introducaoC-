/*Em uma pesquisa com N pessoas (o usuário deverá informar no início quantas pessoas participaram da pesquisa) sobre o COVID foram levantados os seguintes dados:
- Idade da pessoa
- Sexo da pessoa (1- Masculino 2- Feminino)
- Teve sintomas do CODIV? (1- Sim 2-Não)
- Se sim, por quantos dias a pessoa teve sintoma?
- Se sim, precisou procurar ajuda médica (1- Emergência, 2- Consulta Médica, 3- Não)
- Realizou algum teste de covid? (1- Sim 2- Não)
- Se sim, qual foi o resultado? (1- Positivo 2- Negativo)

Ao final deseja saber:
- A quantidade de pessoas assintomáticas (O exame deu positivo, mas não teve sintomas).
- Qual o percentual de pessoas com mais de 65 anos que procuraram um atendimento de Emergência.
- A média de duração (dias) dos sintomas do coronavírus entre todos os entrevistados da pesquisa.
- A quantidade de pessoas que tiveram sintomas e não precisaram procurar ajuda médica.
- A média de idade das mulheres que tiverem sintomas e o teste deu negativo.
*/
#include <iostream>

using namespace std;

int main()
{
    
    int quantidadeAssintomaticas = 0;
    int maisDeSessentaCincoEmergencia = 0;
    int somaDuracaoSintomas = 0;
    int quantidadeSintomaticasSemAjuda = 0;
    int somaMulheresSintomasNegativo = 0;
    
    float percentualMaisSessentaCincoEmergencia;
    float mediaDuracaoSintomas;
    float mediaIdadeMulheresSintomasNegativo;
    
    int size;
    cout << "Quantidade de participantes..: ";
    cin >> size;
    
    int idade = -1;
    int sexo = -1;
    
    int sintomatica = -1;
    int diasSintomas = -1;
    int ajudaMedica = -1;
    
    int testada = -1;
    int resultadoTeste = -1;
    
    for(int i = 0; i < size; i++) {
        idade = -1;
        sexo = -1;
        
        sintomatica = -1;
        diasSintomas = -1;
        ajudaMedica = -1;
        
        testada = -1;
        resultadoTeste = -1;
        
        cout << "\n" << "Idade..: ";
        cin >> idade;
        cout << "Sexo (1- Masculino, 2- Feminino)..: ";
        cin >> sexo;
        
        cout << "Teve sintomas de covid? (1- Sim, 2- Não)..: ";
        cin >> sintomatica;
        if(sintomatica == 1) {
            cout << "Por quantos dias teve sintomas?..: ";
            cin >> diasSintomas;
            cout << "Precisou de ajuda médica? (1- Emergência, 2- Consulta Médica, 3- Não)..: ";
            cin >> ajudaMedica;
        }
        
        cout << "Realizou algum teste de covid? (1- Sim, 2- Não)..: ";
        cin >> testada;
        if(testada == 1) {
            cout << "Qual foi o resultado do teste de covid? (1- Positivo, 2- Negativo)..: ";
            cin >> resultadoTeste;
        }
        
        // Processamento de estatistica
        if(resultadoTeste == 1 && sintomatica == 2) {
            quantidadeAssintomaticas += 1;
        }
        if(idade > 65 && ajudaMedica == 1) {
            maisDeSessentaCincoEmergencia += 1;
        }
        if(diasSintomas != -1) {
            somaDuracaoSintomas += diasSintomas;
        }
        if(sintomatica == 1 && ajudaMedica == 3){
            quantidadeSintomaticasSemAjuda += 1;
        }
        if(sexo == 2 && sintomatica == 1 && resultadoTeste == 2) {
            somaMulheresSintomasNegativo += idade;
        }
        
    }
    
    percentualMaisSessentaCincoEmergencia = maisDeSessentaCincoEmergencia;
    percentualMaisSessentaCincoEmergencia = percentualMaisSessentaCincoEmergencia*100/10;
    mediaDuracaoSintomas = somaDuracaoSintomas;
    mediaDuracaoSintomas = mediaDuracaoSintomas/size;
    mediaIdadeMulheresSintomasNegativo = somaMulheresSintomasNegativo;
    mediaIdadeMulheresSintomasNegativo = mediaIdadeMulheresSintomasNegativo/size;
    
    cout << "\n" << "Quantidade de pessoas assintomáticas..: " << quantidadeAssintomaticas << "\n";
    cout << "Percentual de pessoas com mais de 65 anos que procuraram atendimento de Emergência..: " << percentualMaisSessentaCincoEmergencia << "%" << "\n";
    cout << "Média de duração (dias) dos sintomas..: " << mediaDuracaoSintomas << " dias" << "\n";
    cout << "Quantidade de pessoas que tiveram sintomas e não precisaram de ajuda médica..: " << quantidadeSintomaticasSemAjuda << "\n";
    cout << "Média de idade das mulheres que tiveram sintomas e o teste deu negativo..: " << mediaIdadeMulheresSintomasNegativo << "\n";

    return 0;
}

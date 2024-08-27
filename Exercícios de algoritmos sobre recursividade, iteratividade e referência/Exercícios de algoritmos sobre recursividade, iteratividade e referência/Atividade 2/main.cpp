// 1- Criar uma função que receba: 1.1 - Total de minutos passados ao longo do dia ; 1.2 - dois parâmetros que devem ser preenchidos com o valor da hora e do minuto corrente.
// 2- Fazer um programa que leia do teclado quantos minutos se passaram desde a meia - noite e imprima no formato de horas e minutos.



#include <iostream>


using namespace  std;

    void minutosPassadosNoDia(int totalDeMinutos, int &valorHora,  int &minutoCorrente ) {

            valorHora = totalDeMinutos / 60;
            totalDeMinutos -= valorHora * 60;
            minutoCorrente = totalDeMinutos;

    }


    void imprimirMinutos(int valorHora, int minutoCorrente) {

        cout << "Horas: " <<  valorHora  << " Minutos: " <<  minutoCorrente  << endl;

    }

int main()
{
    int totalDeMinutos = 0, valorHora = 0, minutoCorrente = 0;


        cout << "Quantos minutos se passaram desde a meia - noite?: " << endl;
        cin >> totalDeMinutos;

        if (totalDeMinutos > 0 && totalDeMinutos < 1441) {

            minutosPassadosNoDia(totalDeMinutos, valorHora, minutoCorrente);
            imprimirMinutos(valorHora, minutoCorrente);

        }else {
            cout << "Erro, passou de 1 dia!" << endl;
        }

    return 0;
}

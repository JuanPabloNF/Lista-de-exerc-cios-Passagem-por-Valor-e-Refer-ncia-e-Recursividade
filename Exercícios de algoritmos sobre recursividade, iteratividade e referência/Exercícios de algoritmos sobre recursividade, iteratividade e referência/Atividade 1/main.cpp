#include <iostream>

 using namespace std;


//Efetua o calculo da conversão em idade - dias para anos.
void conversorIdade(int &idade, int &ano, int &mes, int &dia) {

     ano = idade / 365;
     idade -= ano * 365; // essa linha subtrai o número de anos pelos dias correspondentes.

     mes = idade / 30;
     idade -= mes * 30;

     dia = idade;

 }

//Imprimir o resultado na tela.
 void imprimirIdade(int ano, int mes, int dia) {

 cout << "Idade: " << ano << " anos " << mes << " meses " << dia << " dias " << endl;


}


int main()
 {

  int idadeDias = 0, ano = 0, mes = 0, dia = 0;


    cout << "Digite sua idade em dias: " << endl;
    cin >> idadeDias;

      conversorIdade(idadeDias, ano, mes, dia);

      imprimirIdade(ano, mes, dia);




     return 0;
 }

// 1- Fazer uma função que retorna por parâmeto o tempo de duração expressa em segundos;
// 2 - Retornar também por parâmetro esse tempo em horas e minutos.


#include <iostream>

   using namespace std;

    void duraçãoEmSegundos(int &segundos, int horas, int minutos) {

        segundos = minutos * 60;
        segundos = horas * 3600;

    }

    void imprimirResultado(int horas, int minutos, int segundos) {

        cout << " Horas: " << horas << " Minutos: " << minutos << " Segundos: " << segundos << endl;

    }


int main()
{
        int segundos = 0, horas = 0, minutos = 0;

        cout << "Quantas horas se passaram?: " << endl;
        cin >> horas;
        cout << "Quantas minutos se passaram?: " << endl;
        cin >> minutos;


        duraçãoEmSegundos(segundos, horas, minutos);
        imprimirResultado(segundos, horas, minutos);


    return 0;
}

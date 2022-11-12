/*
exercício do dia 1

1. Codifique um programa para criar novos tipos de dados conforme descrito abaixo:
• Hor´ario: composto de hora, minutos e segundos.
• Data: composto de dia, mˆes e ano.
• Compromisso: composto de uma data, hor´ario e texto que descreve o compromisso.*/

#include <iostream>
using namespace std;

struct data;
{
    int dia, mes, ano;
}d;


struct horario
{
    int hora, minutos, segundos;
};

void print(struct compromisso c){

cout << "\t---Compromisso---" << endl;
cout << "Data: " << c.data.dia << "/" << c.data.mes << "/" << c.data.ano;
}
struct compromisso
{
    struct data d;
    struct horario;
    cout << "\vcompromisso\nData: " << d.dia << "/" << d.mes << "/" << d.ano;
    
};


int main(){


    return 0;
}
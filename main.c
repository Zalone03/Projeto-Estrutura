#include <stdio.h>
#include <stdlib.h>

struct DataHora {
    int dia, mes, ano;
    int hora, minuto, segundo;
};

struct Compromisso {
    struct DataHora datahora;
    char descricao[50];
};

struct Compromisso lerCompromisso() {
    struct Compromisso setCompromisso;

    printf("Descreva seu compromisso(ex: Reuniao com o CTO): \n");
    scanf(" %[^\n]", &setCompromisso.descricao);

    printf("Digite a Data do compromisso(dia mes ano)(ex: 13 10 2006): \n");
    scanf("%d %d %d", &setCompromisso.datahora.dia, &setCompromisso.datahora.mes, &setCompromisso.datahora.ano);

    printf("Digite o Horario do compromisso(hora minuto segundo)(ex: 13 50 30): \n");
    scanf("%d %d %d", &setCompromisso.datahora.hora, &setCompromisso.datahora.minuto, &setCompromisso.datahora.segundo);

    return setCompromisso;
};

void imprimirCompromisso(struct Compromisso setCompromisso){
    printf("Descricao do Compromisso: %s \n", setCompromisso.descricao );
    printf("Data, %d/%d/%d \n", setCompromisso.datahora.dia, setCompromisso.datahora.mes, setCompromisso.datahora.ano);
    printf("Horario: %d:%d:%d \n\n", setCompromisso.datahora.hora, setCompromisso.datahora.minuto, setCompromisso.datahora.segundo);
};

int main(){
    struct Compromisso setCompromisso;

    setCompromisso = lerCompromisso();
    imprimirCompromisso(setCompromisso);

    printf("Novo Compromisso \n\n");

    setCompromisso = lerCompromisso();
    imprimirCompromisso(setCompromisso);

}

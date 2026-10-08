#include <stdio.h>
#include <stdlib.h>

// ----- Atividade 1 --------------------------------------------------------------- //

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
    scanf(" %[^\n]", setCompromisso.descricao);

    printf("Digite a Data do compromisso(dia mes ano)(ex: 13 10 2006): \n");
    scanf("%d %d %d", &setCompromisso.datahora.dia, &setCompromisso.datahora.mes, &setCompromisso.datahora.ano);

    printf("Digite o Horario do compromisso(hora minuto segundo)(ex: 13 50 30): \n");
    scanf("%d %d %d", &setCompromisso.datahora.hora, &setCompromisso.datahora.minuto, &setCompromisso.datahora.segundo);

    return setCompromisso;
}

void imprimirCompromisso(struct Compromisso setCompromisso){
    printf("Descricao do Compromisso: %s \n", setCompromisso.descricao );
    printf("Data, %d/%d/%d \n", setCompromisso.datahora.dia, setCompromisso.datahora.mes, setCompromisso.datahora.ano);
    printf("Horario: %d:%d:%d \n\n", setCompromisso.datahora.hora, setCompromisso.datahora.minuto, setCompromisso.datahora.segundo);
}

void atividade1() {
    struct Compromisso setCompromisso;

    setCompromisso = lerCompromisso();
    imprimirCompromisso(setCompromisso);

    printf("Novo Compromisso \n\n");

    setCompromisso = lerCompromisso();
    imprimirCompromisso(setCompromisso);
}

// ----- Atividade 2 --------------------------------------------------------------- //

struct Pessoa {
    char nome[50];
    int idade;
    int cep;
};

struct Pessoa lerPessoa() {
    struct Pessoa setPessoa;

    printf("=== Cadastro de Pessoa ===\n\n");

    printf("Digite o nome da pessoa: ");
    scanf(" %[^\n]", &setPessoa.nome); 

    printf("\nDigite a idade da pessoa: ");
    scanf("%d", &setPessoa.idade);

    printf("\nDigite o CEP da pessoa: ");
    scanf("%d", &setPessoa.cep);

    return setPessoa;
}

void ImprimirPessoa(struct Pessoa setPessoa) {
    printf("\n\n=== Pessoa Cadastrada ===\n\n");

    printf("Nome da pessoa: %s\n", setPessoa.nome);
    printf("Idade da pessoa: %d\n", setPessoa.idade);
    printf("CEP da pessoa: %d\n", setPessoa.cep);
} 


void atividade2() {
    struct Pessoa listaDePessoas[3];
    int totalPessoas = 0;
    
    for (int i = 0; i < 3; i++) {
        listaDePessoas[i] = lerPessoa();
        totalPessoas++;
    }
    
    for (int i = 0; i < totalPessoas; i++) {
        ImprimirPessoa(listaDePessoas[i]);
    }
}

// ----- Atividade 3 --------------------------------------------------------------- //

struct aluno {
    char nome[50];
    int matricula;
    char curso;
};

struct aluno lerAluno() {
    struct aluno setAluno;

    printf("=== Informe o Aluno ===\n\n");

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", &setAluno.nome); 

    printf("Digite a idade do aluno: ");
    scanf("%d", &setAluno.idade); 

    printf("Digite o curso do aluno: ");
    scanf(" %[^\n]", &setAluno.curso); 
}

void ImprimirAluno(struct aluno setAluno) {

    printf("\n\n=== Aluno ===\n\n");

    printf("Nome do aluno: %s\n", setAluno.nome);
    printf("Idade do aluno: %d\n", setAluno.idade);
    printf("Curso do aluno: %d\n", setAluno.curso);

}


void atividade3() {

    struct aluno listaDeAlunos[3];
    int totalAlunos = 0;
    
    for (int i = 0; i < 3; i++) {
        listaDeAlunos[i] = lerPessoa();
        totalAlunos++;
    }
    
    for (int i = 0; i < totalAlunos; i++) {
        ImprimirPessoa(listaDeAlunos[i]);
    }
}

// ----- Atividade 4 --------------------------------------------------------------- //

struct Aluno2 {
    int matricula;
    char nome[50];
    int nota1, nota2, nota3;
};

struct Aluno2 lerAluno2() {
    struct Aluno2 setAluno;

    printf("=== Informe o Aluno ===\n\n");

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", &setAluno.nome); 

    printf("Digite a idade do aluno: ");
    scanf("%d", &setAluno.idade); 

    printf("Digite a nota do aluno na prova 1: ");
    scanf(" %d", &setAluno.nota1); 

    printf("Digite a nota do aluno na prova 2: ");
    scanf(" %d", &setAluno.nota2); 

    printf("Digite a nota do aluno na prova 3: ");
    scanf(" %d", &setAluno.nota3); 
}

struct Pessoa ImprimirAluno2() {
    struct Pessoa setAluno2;

    int nota = (setAluno.nota1 + setAluno.nota2 + setAluno.nota3) / 3;

    printf("\n=============== \nMatricula: %d \nAluno: %s \nMedia: %n \n===============\n", setAluno.matricula, setAluno.nome, nota)
    if (nota > 5) {
        printf("APROVADO \n===============\n")
    }else {
        printf("REPROVADO \n===============\n")
    }

    return setAluno2;
}

void atividade4() {
    struct  Aluno2 listaDeAlunos2[5];
    int totalAlunos2 = 0;

    struct Aluno2 alunoatual;

    int manota = -1;
    int menota = 11;


    for (int i = 0; i < 5; i++) {
        listaDeAlunos2[i] = lerAluno2();
        totalAlunos2++;
    }
    for (int i = 0; i < totalAlunos2; i++) {
        ImprimirAluno2(listaDeAlunos2[i])

        alunoatual = ImprimirAluno2()

        if (alunoatual.nota > manota){
            manota = alunoatual.nota;
        }if (alunoatual.nota < menota){
            menota = alunoatual.nota;
        }
    }

    printf("\n=============== \nMaior nota: %d \nMenor nota: %d \n===============\n", manota, menota)
}

// ----- Seletor ------------------------------------------------------------------- //

void seletorDeAtividade() {
    int atividade;

    do {
        printf("\n=== Qual atividade voce deseja ver? ===\n");
        printf("Escolha de 1 a 22 (0 fecha): ");
        scanf("%d", &atividade);

        switch (atividade) {
            case 0:
                printf("Encerrando o programa...\n");
                break;
            case 1:
                atividade1();
                break;
            case 2:
                atividade2();
                break;
            case 3:
                atividade3();
                break;
            case 3:
                atividade4();
                break;            
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }   
    } while (atividade != 0);
}

int main(){
    seletorDeAtividade();
    return 0;
}

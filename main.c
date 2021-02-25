/* LINHAGEM DE APRENDIZAGEM BASICA LINGUAGEM C

Evolução ao longo de +2500 linhas de código

Autor: José Cutileiro
Bibliografia: Linguagem C Luís Damas

Nota: Este documento não tem como objetivo uma clarificação da teoria
abordada, contudo muitos exercicios estão adequadamente explicados.
O objetivo deste documento é ver a evolução do desenvolvimento de código em C ao longo
da leitura do livro da bibliografia.
Para uma melhor clarificaçao de cada tópico é aconselhável ver os próximos programas
»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»»
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*PARTE 1 Iniciar Variaveis/printf/puts*/
/*
int main()
{
    int i;
    char frase;
    float pi;
    double que_e_isto;

    frase = "O manel tinha uma quinta, ia ia o";
    puts(frase);
    puts("Total\t=\t100%\nIVA\t=\t17%\nIRS\t=\t15%\n--------------------------\nLiq\t=\t68%");
}
*/

/*PARTE 2 -> %d e escrita de inteiros
main()
{
    int num=11;
    num = 10;
    printf("O primeir o numero é -> %d\n O seguinte é %d",num,num+1);

}
*/
/*PARTE 3 -> LEITURA DE INTREIROS
main()
{
    int num;
    int num1;
    int num2;


    printf("Introduzir dois numeros -> ");
    scanf("%d%d",&num1,&num2);
    printf("O resultado de %d + %d é %d\n",num1,num2,num1+num2);

    printf("Introduzir um numero -> ");
    scanf("%d",&num);
    printf("O numero introduzido foi %d",num);


}

*/

/*PARTE 4 -> unsigned e signed + short and long int
main()
{

    short int numero_pequeno;
    long int numero_grande;
    unsigned int numeros_so_positivos;
    signed int numeros_pos_e_negativos;

    numero_pequeno = -32769;
    numero_grande = -32769;
    printf("%d\n",numero_pequeno);
    printf("%d\n\a",numero_grande);


    printf("O tamanho de int em Bytes é -> %d\n",sizeof(int));
    printf("O tamanho de float em Bytes é -> %d\n",sizeof(float));
    printf("O tamanho de double em Bytes é -> %d\n",sizeof(double));
    printf("O tamanho de char em Bytes é -> %d\n",sizeof(char));


}
*/

/* PARTE 5 -> float and double types

main()
{
    float raio,pi = 3.1415927;
    double area;

    printf("Digite o raio do seu circulo: ");
    scanf("%f",&raio);
    area = raio * raio * pi;
    printf("A area e:%f\n(relembre que o seu circulo tinha raio de %f",area,raio);

}
*/

/* EXERCICIO -> TONELADAS PARA KILOS

main()
{
    float toneladas,kilos;

    printf("Digite um numero de toneladas: ");
    scanf("%f",&toneladas);
    kilos = toneladas * 1000;
    printf("%f toneladas corresponde a %f kilos",toneladas,kilos);
}
*/


/* EXERCICIO -> TONELADAS PARA KILOS NOTACAO CIENTIFICA

main()
{
    float toneladas,kilos,gramas;

    printf("Digite um numero de toneladas: ");
    scanf("%e",&toneladas);
    kilos = toneladas * 1000;
    gramas = kilos * 1000;
    printf("%e toneladas\n corresponde a %e kilos\n e a %e gramas",toneladas,kilos,gramas);

}

*/

/* EXERCICIO -> UMA OUTRA FORMA DE ESCREVER 'HELLO WORLD'

main()
{
    char pr = 'W',pro = 'H';w
    printf("%cello %corld",pro,pr);

}

*/

/* EXERCICIO -> LEITURA DE UM CARACTER E ESCRITA DO MESMO

main()
{
    char l1,l2,l3;
    printf("Digite três caracteteres -> ");
    l1 = getchar();
    l2 = getchar();
    l3 = getchar();
    printf("Minifrase %c%c%c",l1,l2,l3);

}

*/

/* EXERCICIO -> LEITURA DE UM CARACTER E ESCRITA DO MESMO -> SCANF

main()
{
    char letra1,letra2;

    printf("Digite aqui um caracter: ");
    scanf("%c",&letra1);
    printf("Digite aqui outro caracter: ");
    scanf(" %c",&letra2);
    printf("Primeiro char: '%c'\nSegundo char: '%c'",letra1,letra2);


}
*/

/* EXERCICIO -> CASTING ENTRE INT E CHAR SEGUNDO ASCII  (NUM -> LETRA)

main()
{
    int num;
    printf("Intruduza um numer o: ");
    scanf("%d",&num);
    printf("O numero intruduzido foi %d\n que corresponde a %c em ASCII",num, (char) num);


}

*/

/* EXERCICIO -> CASTING ENTRE INT E CHAR SEGUNDO ASCII (LETRA -> NUM)

main()
{
    char letra;
    printf("Intruzir uma letra: ");
    letra = getchar();
    printf("A letra intruduzida foi %c que corresponde a %d em ASCII",letra,(int) letra);

}

*/

/* EXERCICIO -> CASTING INDIRETO (NUM -> LETRA)

main()
{
    char letra;
    printf("Introduzir letra: ");
    letra = getchar();
    printf(" Letra intruzida %c somando 1 fica %c que representa o numero %d",letra,(char) ((int) letra)+ 1, ((int) letra) +1 );

}
*/

/* EXERCICIO -> Dois dig e operacoes tradicionais

main()
{
    int dig1, dig2;
    printf("Digite dois inteiros: ");
    scanf("%d%d",&dig1,&dig2);
    printf("Soma: %d + %d = %d\n",dig1,dig2,dig1+dig2);
    printf("Subtração: %d - %d = %d\n",dig1,dig2,dig1-dig2);
    printf("Multiplicação: %d * %d = %d\n",dig1,dig2,dig1*dig2);
    printf("Divisão inteira: %d // %d = %d\n",dig1,dig2,dig1/dig2);
    printf("Resto: %d %% %d = %d\n",dig1,dig2,dig1%dig2);


}
*/

/* EXERCICIO -> SEGUNDOS para HORAS COMPLETAS
main()
{
    int segundos,horas,minutos;
    printf("Digite um numero de segundos: ");
    scanf("%d",&segundos);
    horas = segundos/3600;
    segundos = segundos%3600;
    minutos = segundos/60;
    segundos = segundos%60;
    printf("%d : %d : %d",horas,minutos,segundos);

}
*/
/* EXERCICIO -> PARTE INTEIRA E DECIMAL
main()
{
    int parte_inteira;
    float num_real,parte_decimal;
    printf("Insira um numero real: ");
    scanf("%f",&num_real);
    parte_inteira = (int) num_real;
    parte_decimal = num_real - parte_inteira;
    printf("Numero inserida: %f \nParte inteira: %d\nParte decimal: %f",num_real,parte_inteira,parte_decimal);

}
*/
/* EXERCICIO -> ESCRITA DE DATA
main()
{
    int ano,dia,mes;
    printf("Digite uma data com o seguinte formato: aaaa-mm-dd \n-> ");
    scanf("%d-%d-%d",&ano,&mes,&dia);
    printf("%d/%d/%d",ano,mes,dia);

}
*/

/* EXERCICIO -> ARVORE BONITA

main()
{
    printf("   *   \n");
    printf("  ***   \n");
    printf(" ***** \n");
    printf("  /|\\    ");

}
*/


/* EXERCICIO -> TESTAR IF & ELSE

main()
{

    int num;
    printf("Digigite um numero: ");
    scanf("%d",&num);
    if (num > 0)
        printf("O seu numero é positivo");
    else
        printf("O seu numero é negativo");

}

*/

/* EXERCICIO SALARIO E DESCONTOS
main()
{
    float salario,desconto,bonus,valor_final;
    printf("Digite aqui o seu salário: ");
    scanf("%f",&salario);
    desconto = 0.23*salario;
    valor_final = salario - desconto;
    if (valor_final < 1000)
    {
        bonus = 0.11*salario;
        valor_final += bonus;
    }
    printf("Salario: %.2f\nDesconto: %.2f\nBonus: %.2f\nSalario Liquido: %.2f",salario,desconto,bonus,valor_final);


}
*/

/* EXERCICIO IF-ELSE

main()
{
    int num;
    printf("Digite um numero de 1 a 4: ");
    scanf("%d",&num);
    if (num == 1)
        printf("Numero escolhido foi 1\n");
    else
        if (num == 2)
            printf("Numero escolhido foi 2\n");
        else
            if (num == 3)
                printf("Numero escolhido foi 3\n");
            else

}

 */

 /* EXERCICIO -> AND OR NOT
 main()
 {
     if (5>0 && 1 == 1)
        printf("Primeira é VERDADEIRA\n");
     if (0 == 1 && 5 > 0)
        printf("Sefunda é VERDADEIRA");
     if (! 0 != 1)
        printf("TERCEIRA É VERDADEIRA");


 }
 */

 /* EXERCICIO -> HORAS para SEGUNDOS

 main()
 {

     int horas,segundos;

     printf("Digite um numero de horas: ");

     scanf("%d",&horas);

     segundos = horas * 3600;

     printf("%d horas tem %d segundos.",horas,segundos);

 }

 */

 /* EXERCICIO -> CONVERSOR SEMI AUTOMATICO

 main()
 {
     float horas; long res; char escolhida; printf("Digite um numero de horas: "); scanf("%f",&horas); printf("Conversão escolhida [m/s/d]: ");


     scanf(" %c",&escolhida);



     switch (escolhida)
     {
         case 'm': res = horas * 60L;break;
         case 's': res = horas * 3600L;break;
         default: res = horas * 3600 * 10L;

     }

     printf("%f horas corresponde a %ld %c",horas,res,escolhida );

 }

 */

 /* EXERCICIO -> OTIMIZAR SEM BREAK

 main()
 {
     int horas;long res;char escolhida; printf("Digite um numero de horas: ");scanf("%d",&horas);printf("Escolha a representação [m/s/d]: ");scanf(" %c",&escolhida);res = horas; switch (escolhida) {case 'd': res = res * 10; case 's': res = horas * 60; case 'm': res = res * 60;} printf("%d horas equivale a %ld %c",horas,res,escolhida);
 }
*/

/* EXERCICIO -> O ANO É BISSEXTO ?

main()
{
   int ano;

   printf("Digite um ano em estudo: ");
   scanf("%d",&ano);
   if ((ano%4 == 0 && ano%100 != 0) || ano%400 == 0)
       printf("O ano é indeed bissexto");

   else
        printf("O numero nao é bissexto");

}

*/

/* INTRUDUCAO WHILE
main()
{
    int num;
    num = 1;
    while (num <= 10)
        {
        printf("%d \n",num);
        num = num +1;
        }

}

*/

/* TABUADA DE UM NUMERO INTEIRO QUALQUER(nota:Tabuada ate x10)
main()
{
    int num,i,res;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    i = 1;
    while (i <= 10)
    {
        res = num*i;
        printf("%d x %d = %d\n",num,i,res);
        i++;
    }

}
*/


/* Intruducao ciclo FOR (nota: é muito diferente que em python)
main()

{
    int i;
    for (i=1;i<=10;i++)
        printf("%d",i);


}
*/

/* FATORIAL COM CICLO FOR

main()
{
    int num,i,res;

    printf("Iremos calcular n!, digite um valor de n: ");
    scanf("%d",&num);


    for (i=1 , res = 1;i<=num;i++)
    {
        res = res*i;
    }

    printf("%d",res);


}
*/

/* TABUADAS CORRIDAS

main()
{
    int num,i,res;
    char continuar;
    continuar = 's';
    while (continuar == 's')
    {
        printf("Digite um numero aqui\n-> ");
        scanf("%d",&num);
        for (i=1;i<= 10;i++)
        {
            res = i * num;
            printf("%d x %d = %d\n",num,i,res);

        }

        printf("Deseja continuar [s/n] ?\n-> ");
        scanf(" %c",&continuar);


    }

}
*/


/* EXERCICIO -> CICLOS ENCADEADOS

main()
{
    int i,it;

    while (i<=10)
    {
        for (it = 1;it<=i;it++)
        {
            printf("%d",it);
        }
    printf("\n");
    i++;
    }



}


*/


/* TESTAR OPERADORES

main()
{
    int i = 4;
    printf("%d",i++ + ++i);

}

*/


/* NOTA: Atribuição composta

x += 1 <-> x = x + 1 <->  x++   (semelhante a -= e --)
y *= 2+3 <-> y = y * (2+3)      (semelhante a  /=    )
r %= 2  <->  r = r % 2
*/

/*EXERCICIOS CAPITULO 4*/

/* TABELA COMPLETA ASCII
main()
{
    int i;

    while (i <= 255)
    {
        printf("ASCCI: %d ---> %c\n",i,(char) i);
        i++;
    }


}

*/

/* SEQUENCIAS SIMULTANEAS

main()
{
    int i,inserido;
    printf("Insira um numero de modo a criar uma sequência\n--> ");
    scanf("%d",&inserido);
    fflush(stdin);

    for (i=1;inserido != 0;inserido--,i++)
        printf("%d         %d\n",i,inserido);

}

*/


/* BASE MATRIZES

main()
{
    int i,copia,terceiro;
    char inserido;

    printf("Insira um inteiro\n-> ");
    scanf("%d",&i);
    fflush(stdin);
    printf("Insira um carater\n-> ");
    scanf("%c",&inserido);
    fflush(stdin);
    for ( terceiro = i; i > 0;i--)
    {
        copia = terceiro;
        for ( ; copia > 0; copia--)
        {
            printf("%c",inserido);
        }
        printf("\n");
    }

}

*/


/* EXERCICIO ESPECIFICO

main()

{
    int i;
    printf("Introduzir um numero\n-> ");
    scanf("%d",&i);
    fflush(stdin);
    while ( i%10 != 0)
    {
        if (i%3 != 0)
        {
            printf("%d",i);
            putchar('\n');
        }

        i++;

    }



}


*/


/* ARVORES DE NATAL PERSONALIZADA COM SMILES

main()
{

    int i,ramos,compara,smile=1;
    printf("Insira a altura da arvore de natal\n-> ");
    scanf("%d",&i);
    fflush(stdin);

    for (ramos = 1 ;ramos <=i;ramos++)
    {
        for (compara = 1;compara <=ramos;compara++)
        {

        printf("%c",(char) smile);

        }
        putchar('\n');

    }


}
*/

/* TESTAR CONDIÇOES COM O WHILE

main()
{
    int inserido=-1;
    while (inserido > 100 || inserido < 1)
    {


        printf("Digite um numero: ");
        scanf("%d",&inserido);
        fflush(stdin);

    }

}

*/


/*WORKING WITH CHAR


main()
{

    int i,ramos,compara;
    char ch;
    printf("Insira a altura da arvore de natal\n-> ");
    scanf("%d",&i);
    fflush(stdin);
    ch = 'A';
    for (ramos = 1 ;ramos <=i;ramos++)
    {
        for (compara = 1;compara <=ramos;compara++)
        {

        printf("%c",ch);

        }
        ch = (char) ((int) ch + 1);
        putchar('\n');

    }


}
*/

/* CAPIITULO 5 --> FUNCOES E PROCEDIMENTOS */

/* EXEMPLO --> SIMPLIFICAR O CODIGO EXPONENCILMENTE-> NOTA: A FUNCAO MAIN CORRE O CODIGO PRINCIPAL
escr_20()
{
    int i;
    for (i=1;i<=20;i++)
    {
        printf("*");
    }
    putchar('\n');

}


main()
{
    int fiv;
    escr_20();
    printf("NUMEROS ENTRE 1 E 5\n");
    escr_20();
    for (fiv=1;fiv<=5;fiv++)
        {
            printf("%d\n",fiv);
        }
    escr_20();
}
*/

/* PARAMETROS NAS FUNCOES

linha(int num)         <----- DECLARAR PARAMETRO
{
    int i;
    for (i=1;i<=num;i++)
    {
        printf("*");
    }
    putchar('\n');

}


main()
{
    linha(30);
    linha(40);
    linha(50);
    linha(30);

}
*/

/* MAIR QUE 1 PARAMETRO

linha(int num,char ch)
{
    int i;
    for (i=1;i<=num;i++)
    {
        printf("%c",ch);

    }
    putchar('\n');

}

main()
{
    linha(4,'A');
    linha(3,'*');

}
*/

/* INSTRUCAO RETURN


dobro(int numero)
{
    return numero * 2;

}

soma(int n1,int n2)
{

    return n1 + n2;

}


main()
{
    int res;

    res = dobro(soma(2,8));
    printf("%d",res);
    return res;


}
*/

/* EXERCICIO -> QUAL O MAIOR DE 2 INTEIROS?

int maior_dois_int(int n1,int n2)
{

    if (n1 >= n2)
    {
        return n1;
    }
    return n2;

}

main()
{
    int res;

    res  = maior_dois_int(42,8);
    printf("%d",res);

}

*/

/* NOTA: SEMPRE QUE NO CABEÇALHO DA FUNCAO NAO SE COLOCAR
O TIPO DO RESULTADO DA FUNCAO ELE É SUBSTITUIDO POR INT
SO ALTERA O RESULTADO DA FUNCAO E NAO O PROCEDIMENTO */


/* MAIUSCULA PARA MINUSCULA

char upper(char let)
{
    return (char) (((int) let) + ((int) 'A') - ((int) 'a'));
}


main()
{
    char let;
    printf("Digite uma minuscula\n-> ");
    scanf("%c",&let);
    let =  upper(let);
    printf("MAIUSCULA-> %c",let);

}

*/

/* FUNCAO POTENCIA

float potencia(float x,int n)
{
    int i;
    float res;
    for (i=1,res=1 ; i<=n ; i++)
    {
        res *= x;
    }

    return res;
}

main()
{
    int n;
    float x,res;
    printf("DIGITE UM X: ");
    scanf("%f",&x);
    printf("DIITE UM N: ");
    scanf("%d",&n);

    res = potencia(x,n);
    printf("RESULTADO: %f",res);


}

*/

/* VALOR ABSOLUTO
int abs(int x)
{
    if (x >= 0)
    {
        return x;
    }
    return -x;
}

main()
{
    int teste = -4;
    teste = abs(teste);
    printf("abs --> %d",teste);

}
*/

/* TEM BUG MAS NAO SEI A SOLUCAO

float pot(float x,int n)
{
    int i;
    float res=1;
    while (i<n)
    {
        res = res*x;
        i++;
    }
    return res;

}


float VAL(float x,int n,float t)
{
    int i=1;
    float res=0;
    while (i<=n)
    {
        res += (x)/(pot(1+t,i));
        printf("%f",res);
        i++;
    }
    printf("%f",res);
    putchar('\n');
    return res;
}


main()
{


    float res;
    res = VAL(1,3,1);
    printf("%f\n",res);
}

*/


/* CONVERSAO HORAS MINUTOS SEGUNDOs

int num(int n_horas,char tipo_conv)
{
    int res = 1;
    switch (tipo_conv)
    {
        case 's': res = res*60;
        case 'm':res = res*60;
        default: return res*n_horas;

    }

}

main()
{

    int res;

    res = num(3,'s');
    printf("%d",res);

}

*/


/* CAPITULO 6 -> INTRUDuçÃO ARRAYS

main()
{

    float salario[13],res;
    int mes;

    for (mes=1;mes <=12;mes++)
        {
        printf("Digite o salário do %d º mes:",mes);
        scanf("%f",&salario[mes]);
        fflush(stdin);
        res += salario[mes];
        }
    for (mes=1;mes<=12;mes++)
    {
        printf("SALARIO DO %d º mes: %f\n",mes,salario[mes]);

    }


    printf("TOTAL: %f",res);

}

*/

/* TESTANDO VETORES

colocar_uns(int vetor[],int tama)
{
    int i;
    for (i=0;i<tama;i++)
    {
        vetor[i] = 1;
    }
}

main()
{

    int v[10];
    colocar_uns(v,10);
    printf("%d",v[1]);
}

*/

/* DEFINIR CONSTANTES

#define DUZIA 12

 OU

const int duzia = 12;

*/


/* EXERCICIO

mostrar_tab(char v[][3])    NOTA: v[][3] = v[3][3]
{
    int i,i2;
    printf("\n-----------------------\n");
    for (i=0;i<3;i++)

        {
            for (i2=0;i2<3;i2++)
                {
                    printf(" [%c] ",v[i][i2]);
                }
            printf("\n-----------------------\n");
        }
}

main()
{
    char tab[3][3] = {{'X',' ','O'},{' ','X',' '},{' ',' ','O'}};
    mostrar_tab(tab);

}
*/


/* DEVOLVER VETOR

int alterar(int v[])
{
    int i;
    for (i=0;i<4;i++)
    {
        v[i] = i+20;
    }
    return v;
}

main()
{
    int v[] = {0,0,0,0};
    v[4] = alterar(v);
    printf("%d",v[3]);

}

*/




/* EXERCICIO

main()
{

    float v[10];
    int i;

    for (i=0;i<10;i++)
    {
        v[i] = i*(10-i);
    }
    for (i=0;i<10;i++)
    {
        printf("%f\n",v[i]);
    }

}
*/

/* WORKING IN RANDOMIC FUNCTIONS*/


/* #1 RANDOMIZE -> Make the random numbers diferent from each time you use the funtion
note: you need to include <time.h>

void randomize()
{
    srand(time(NULL));
}

int randint_0_to_max(int max)
{
    randomize();
    return rand()%max;
}

float random_max(int max)
{
    randomize();
    return rand()%max;
}

int randint_min_to_max(int min,int max)
{
    int v[2],i;
    if (min<0)
            v[0] = -rand()%(-min);
    else
            v[0] = rand()%min;

    if (max<0)
            v[1] = -rand()%(-max);
    else
            v[1] = rand()%max;
    i = rand()%2;

    return v[i];

}
*/
/* TESTING RANDOMIC FUNCTIONS
main()
{
    float i;
    while (1)
    {
 i = random_max(100);
       printf("%f\n",i);
    }



}

*/

/* EXERCICIOS CAPITULO - VECTORES*/


/* MAIOR ELEMENTO DE UM VETOR
float max(float v[],int n)
{
    int i;
    float maior;
    maior = v[0];
    for (i=1;i<n;i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }

    }

    return maior;
}

main()
{
    float v[4] = {2.23,9.343,7.434,3.443};
    float maior;

    maior = max(v,4);

    printf("MAIOR: %f",maior);



}
*/

/*

mostra_tab(char v[3][3])
{
    int i,i2;
    printf("----------\n");
    for (i = 0;i<3;i++)
    {
        for (i2 = 0;i2<3;i2++)
        {
            printf("[%c]",v[i][i2]);
        }
        printf("\n----------\n");
    }


}

main()
{
    char v[3][3] = {{'X','X','X'},{'O','O','O'},{' ',' ',' '}};
    mostra_tab(v);
}

*/

/* CAPITULO DE STRINGS */

/* GETS(STRING)

main()
{
    char nome_completo[100];

    printf("Digite o seu nome completo \n ---> ");
    gets(nome_completo);

    printf("O seu nome completo:\n -> %s",nome_completo);

}
*/

/* SCANF("%s",string) nota: sem &

main()
{
    char nome[15],apelido[15];

    printf("Digite o seu nome e apelido: ");
    scanf("%s",nome);
    scanf(" %s",apelido);
    printf("O seu nome é %s %s",nome,apelido);

}
*/

/* FUNCOES DE MANIPULACAO DE STRINGS */

int len(char s[])
{
    int res;

    for (res = 0;s[res]!='\0';res++)
        continue;
    return res;
}
/*
int vazio(char s[])
{
    return len(s) == 0;

}


void copia(char origem[],char chegada[])
{
    int i = 0;
    while (i<len(origem))
    {
        chegada[i] = origem[i];
        i++;
    }



}

main()
{
    char or[30] = "Olá o meu nome é Zé e adoro viajar";
    char ch[20];

    copia(or,ch);
    printf("%s",ch);
}

*/

/* FUNCAO CUSTOMIZADA -> CONCATENAR STRINGS

void concatenar_str(char s1[],char s2[],char acumulador[])
{
     int i,i2;

     for (i=0;i<len(s1);i++)
        acumulador[i] = s1[i];
     for (i-1,i2=0;i2<len(s2);i2++)
        acumulador[i+i2] = s2[i2];
}

main()
{
    char nome[] = "OOJWIFJWIF wfwfiji";
    char apelido[] = "Cewfewjg wfw ww";
    char res[100];

    concatenar_str(nome,apelido,res);

    printf("RESPOSTA: %s",res);

}

*/
/* IVERTER STRINGS
void inverter(char s[])
{
    int i,len_var;
    char aux;

    for (i=0,len_var = len(s)-1;i<len_var;i++,len_var--)
    {
        aux = s[i];
        s[i] = s[len_var];
        s[len_var] = aux;
    }
}


main()
{
    char teste[20] = "CONTRARIO DE 1 e 2";
    inverter(teste);

    printf("%s",teste);


}
*/


/* SISTEMA PRIMITIVO DE PASSWORDS
int control(char name[])
{
    int i;
    char n[] = "SAIR";

    for (i=0;i<len(name);i++)
        {
            if (n[i] != name[i])
            return 0;
            }
    return 1;
}


main()
{
    char introduzido[100];

    while (1)
    {
        printf("Introduza a password: ");
        gets(introduzido);
        if (control(introduzido) == 1)
            break;

    }
}
*/

/* ESPACAMENTO ENTRE LETRAS

void coloca_espaco(char pt[])
{
    char nova[400];
    int i,i2;
    for (i=0,i2=0;i<len(pt);i++,i2++)
    {
        nova[i2] = pt[i];
        i2++;
        nova[i2] = ' ';

    }
    for (i=0;i<len(nova);i++)
        pt[i] = nova[i];

}

main()
{
    char nome[400] = " EFEITO |||||||||||| BONITO |||||||||||";
    int i=0;
    coloca_espaco(nome);
    while (i<70){
        printf("%s",nome);
        i++;
    }
}
*/

/* A NEW INCLUDE <string.h>

OPERATIONS:
-> strlen
-> strcpy
-> strcat
-> strchr

   [...]

PARA MAIS INFORMAÇÔES VER BIBLIOGRAFIA (página 252)

#include <string.h>

main()
{
    char s1[] = "OLA O MEU NOME";
    char s2[] = "E ZE";
    char s3[100];

    strcat(s1,s2);

    printf("\n \n \n%s",s1);


}
*/


/* FUNCAO CENSURAR

char censurar(char s[],char censura)
{
    int i;

    for (i=0;i<len(s);i++)
    {
        if (s[i] != ' ')
            s[i] = censura;
    }

}


main()
{
    char pal[] = "OLA ESTOU A TESTAR A CENSURA";
    censurar(pal,'*');
    printf("\n\n%s",pal);

}
*/


/* NOTA: funco toupper() -> colocar caracter escolhido em maiuscula
EXEMPLO DE UTILIZACAO

(é necessário fazer include <ctype.h>)
#include <ctype.h>

char upperstring(char s[])
{
    int i;
    for (i=0;i<len(s);i++)
        s[i] = toupper(s[i]);

    return s;
}

main()
{
 char plod[] = "esta tudo em minusculas mas no ecra vai aparecer em maiusculas... esquesito?";
 upperstring(plod);
 printf("%s",plod);


}
*/
/* EXERCICIO CONTAR LETRAS
int conta_letras(char s[])
{
    int i,res=0;

    for (i=0;i<len(s);i++)
    {
        if ((s[i]>'A' && s[i]<'z')||(s[i] == 'z' || s[i] == 'A'))
            res ++;

    }
    return res;

}
main()
{
    char teste[] = "123 testez testeA+é 123";
    int res;

    res = conta_letras(teste);
    printf("%d",res);


}
*/
/*
tornar_vazia(char s[])
{
    s[0] = '\0';
}

main()
{
    char tes[] = "VOU DESAPARECER ASSIM QUE CORRAS O PROGRAMA";
    tornar_vazia(tes);
    printf("%s",tes);

}
*/
/*
int ultima_aparicao(char s[],char c)
{
    int i;
    for (i = len(s)-1; i>-1;i--)
    {
        if (s[i] == c)
            return i;
    }
    return -1;
}
main()
{
    char tes[] = "Tenho aqui uma frase de testeT";
    int res;
    res = ultima_aparicao(tes,'y');
    printf("%d",res);

}
*/

/* COLOCAR UM CARACTER NUMA POSICAO PAR
char codificar(char s[],char codigo)
{
    int i;

    for (i=0;i<len(s);i++)
        if (i%2 == 0)
        s[i] = codigo;

    return s;


}

main()
{
    char fra[] = "Esta frase irá ser codificada, será que perderá o significado? Espero que sim";
    codificar(fra,'#');
    printf("%s",fra);


}
*/

/* FUNCAO IN ( built in em python) + repeticoes)

int in(char car,char s[])
{
    int res,i;


    for (i=0;i<len(s);i++)
        if (s[i] == car)
            return 1;
    return 0;


}

char repeticoes(char s[])
{
    char em_estudo;
    int i;

    for (i=0;i<len(s);i++)
    {
        em_estudo = s[i];
        s[i] = ' ';
        if (in(em_estudo,s))
        {
            s[i] = em_estudo;
        }
    }

    return s;
}

main()
{
    char fra[] = "TESTANDO";
    repeticoes(fra);
    printf("%s",fra);


}
*/
/*
char prox_ascii(char s[])
{
    int i;
    char aux;

    for (i=0;i<len(s);i++)
    {
        aux = s[i];
        aux = (char) ( (int) aux + 1);
        s[i] = aux;
    }

    return s;
}

main()
{
    char test[] = "Passar para o ->  Ascii (e facil ver em numeros 12345678910111213";
    prox_ascii(test);
    printf("%s",test);
}
*/
/*
duplicar_str(char s[])
{
    int i;
    int l = len(s);
    for (i=0;i<l;i++)
        s[i+l] = s[i];
    s[i+l] = '\0';
    return s;

}

void main()
{
char tes[100] = "AGORA SIM FAZ SENTIDO";
duplicar_str(tes);
printf("%s",tes);
}
*/


/* CAPITULO 8 -> POINTERS */

/*Testar o local da variavel
main()
{
    int joao = 392;
    printf("A variael joao esta guardade em %d",&joao);


}

ou seja &joao representa o endereço da variavel
*/

/* Como é possível verificar o uso de pointers faz com que o return de vetores seja util
duplicar_elementos(int v[])
{
    int i;

    for (i=0;i<len(v);i++)
    {
        v[i] = v[i] * 2;
    }
    return v;
}
main()
{

    int *res,v[] = {10,2,3,4,5,6,7};
    res = duplicar_elementos(v);
    printf("%d",*res);

}
*/

/* TRABALHANDO COM POINTERS
str_work(char s[])
{
    char *ptr = s;

    while (*ptr != '\0')
        putchar(*ptr++);
    putchar('\n');
    *ptr--;
    while (ptr >= s)
        putchar(*ptr--);


}

main()
{
    char tt[100] = "Irei estar invertida agora -> <-";
    str_work(tt);

}
*/
/* Implementrar len com utilzacao de pointers
newlen(char v[])
{
    char *ptr = v;
    while (*ptr != '\0')
        ptr++;
    return ptr-v;
}

main()
{
    char tt[] = "tenho 7";
    int i;

    i = newlen(tt);
    printf("%d",i);

}
*/
/* EXERCICIOS POINTERS */

/*
char ex1(char *ptr,char ch)
{

    for (;*ptr!='\0';ptr++)
        if (*ptr == ch)
            return ptr;
    return NULL;
}

main()
{
    char tt[] = "Ver endereço em que aparece a primeira";
    char rro[] = "Segundo teste de aparicao ZZ";
    int endereco;

    endereco = ex1(rro,'Z');
    printf("Endereço de aparição: %d",endereco);


}
*/

/*
#define numero_str 4
main()
{
    char v_str[numero_str][50] = {"ZECA","MIGUEL","BOLICAO","MARACUJA"};
    char (*ptr)[50] = v_str;
    char *p;

    while (ptr-v_str < numero_str)
    {
        p = *ptr;
        while (*p)
            putchar (*p++);
        putchar('\n');
        ptr++;
    }

}
*/
/*
char *ultima_apari(char *s,char ch)
{
    char res = NULL;

    for ( ;*s != '\0';s++)
        if (*s == ch)
            res = s;

    return res;
}
char *res(char *str,char ch)
{
    int i;
    char *ptr = NULL;
    for ( i=0;str[i] != '\0';i++)
        if (str[i] == ch)
            ptr = &str[i];
    return ptr;

}

main()
{
    char tt[] = "Olá o meu nome é bringleea";
    int resposta;

    resposta = res(tt,'e');

    printf("RESPOSTA: %d",resposta);
}
*/
/*
char *primeira_vogal(char *s)
{
    int i;
    for  (i=0;s[i] != '\0';i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            return &s[i];
    return NULL;


}

main()
{
    char fra[] = "abc da  brincadeira";
    int i;

    i = primeira_vogal(fra);

    printf("Endereço da primeira vogal: %d",i);

}
*/







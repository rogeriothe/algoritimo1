Algoritmo "Questao_07"
// Disciplina  :  Algoritimo e Programa��o I 
// Aluno: Rog�rio de Lima Sousa 
Var
num: vetor [1..50] de real
cont: inteiro
x,y: real
Inicio
cont <- 1
repita
    escreval("Digite o ", cont, "� numero:")
    leia(num[cont])
    x <- num[cont] / 2
    y <- num[cont] ^ (1/3)
    escreval("A metade de ", num[cont], " � ", x)
    escreval("A raiz cubica de ", num[cont], " � ", y)
    cont <- cont + 1
ate cont > 50

Fimalgoritmo
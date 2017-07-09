Algoritmo "Questao_07"
// Disciplina  :  Algoritimo e Programação I 
// Aluno: Rogério de Lima Sousa 
Var
num: vetor [1..50] de real
cont: inteiro
x,y: real
Inicio
cont <- 1
repita
    escreval("Digite o ", cont, "º numero:")
    leia(num[cont])
    x <- num[cont] / 2
    y <- num[cont] ^ (1/3)
    escreval("A metade de ", num[cont], " é ", x)
    escreval("A raiz cubica de ", num[cont], " é ", y)
    cont <- cont + 1
ate cont > 50

Fimalgoritmo
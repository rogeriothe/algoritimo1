Algoritmo "Questao_07"
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
Var
   num, cont, temp, total: inteiro
Inicio
   escreval("Digite a quantidade de numeros:")
   leia(num)

   cont <- 1
   temp <- 0
   total <- 0

   enquanto cont <= num faca
      escreval("Digite o ", cont,"� numero:")
      leia(temp)
      total <- total + temp
      cont <- cont + 1
   fimenquanto

   escreval("O total: ", total)

Fimalgoritmo
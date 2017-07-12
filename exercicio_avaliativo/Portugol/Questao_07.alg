Algoritmo "Questao_07"
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
Var
   num, cont, temp, total: inteiro
Inicio
   escreval("Digite a quantidade de numeros:")
   leia(num)

   cont <- 1
   temp <- 0
   total <- 0

   enquanto cont <= num faca
      escreval("Digite o ", cont,"º numero:")
      leia(temp)
      total <- total + temp
      cont <- cont + 1
   fimenquanto
   
   escreval("O total: ", total)

Fimalgoritmo
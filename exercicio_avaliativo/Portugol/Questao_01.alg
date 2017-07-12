algoritmo "Questao_01"
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
var
   sal_minimo, salario, qtd: real
inicio
   escreval("Digite o valor do salario minimo atual:")
   leia(sal_minimo)
	escreval("Digite o valor de seu salario:")
	leia(salario)
	qtd <- salario / sal_minimo
	escreva("Numero de salarios minimos: ", qtd)
fimalgoritmo




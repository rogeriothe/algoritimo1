Algoritmo "Questao_09"
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
Var
   cont, total: inteiro
   sal, desc: real

Funcao calcula(salario: real): real
var desconto: real
inicio
   desconto <- 0
   se salario <= 600.00 entao
      desconto <- 0
   senao
      se ((salario > 600.00) e (salario <= 1200.00)) entao
         desconto <- salario * 0.2
      senao
         se (salario > 1200.00)e(salario <= 2000.00) entao
            desconto <- salario * 0.25
         senao
            se (salario > 2000.00) entao
               desconto <- salario * 0.3
            fimse
         fimse
      fimse
   fimse
   retorne desconto
fimfuncao
Inicio
   escreva("Digite a quantidade de funcionarios: ")
   leia(total)

   enquanto cont < total faca
      escreva("Digite o salario do", cont + 1 ,"� funcionario: ")
      leia(sal)
      desc <- calcula(sal)
      escreval("O desconto �: ", desc)
      cont <- cont + 1
   fimenquanto
Fimalgoritmo
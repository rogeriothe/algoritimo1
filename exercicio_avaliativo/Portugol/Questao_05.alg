Algoritmo "Questao_05"
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
Var
   salario, desconto: real
Inicio
   escreval("Digite seu salario:")
   leia(salario)

   se salario <= 600.00 entao
      escreval("Isento de desconto")
   senao
      se ((salario > 600.00)e(salario <= 1200.00)) entao
         desconto <- salario * 0.2
         escreval("Desconto:", desconto)
      senao
         se (salario > 1200.00)e(salario <= 2000.00) entao
            desconto <- salario * 0.25
            escreval("Desconto: ", desconto)
         senao
            se (salario > 2000.00) entao
               desconto <- salario * 0.3
               escreval("Desconto: ", desconto)
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo
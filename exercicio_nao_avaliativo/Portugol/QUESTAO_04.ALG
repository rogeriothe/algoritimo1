Algoritmo "Questao_04"
Var
   salario, valor_emprestimo, num_parcelas: Real
Inicio
   escreval("Qual o valor do salario?")
   leia(salario)
   escreval("Qual o valor do emprestimo?")
   leia(valor_emprestimo)
   escreval("Qual a quantidade de parcelas?")
   leia(num_parcelas)
   se (valor_emprestimo / num_parcelas) > (salario * 0.3) entao
      escreval("Emprestimo não aprovado")
   senao
      escreval("Emprestimo aprovado")
   fimse

Fimalgoritmo

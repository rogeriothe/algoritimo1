Algoritmo "Questao_06"
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
Var
   valor_compra, valor_venda: Real


Inicio
   escreval("Digite o valor de compra:")
   leia(valor_compra)
   se valor_compra < 20.00 entao
      valor_venda <- valor_compra * 1.45
      escreva("Valor de venda: ", valor_venda)
   senao
      valor_venda <- valor_compra * 1.30
      escreva("Valor de venda: ", valor_venda)
   fimse
Fimalgoritmo
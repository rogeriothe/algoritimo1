Algoritmo "Questao_02"
// Disciplina  :  Algoritimo e Programa��o I
// Aluno: Rog�rio de Lima Sousa
Var
   data, dia, mes, ano : inteiro
Inicio
      escreval("Digite uma data no formato ddmmaa")
      leia(data)
      dia <-  data \ 10000
      mes <-  (data \ 100) - (dia * 100)
      ano <-  (data - (dia * 10000)) - (mes * 100)
      escreval("O dia �: ", dia)
      escreval("O m�s �:", mes)
      escreval("O ano �:", ano)
Fimalgoritmo
Algoritmo "Questao_06"
// Disciplina  :  Algoritimo e Programação I 
// Aluno: Rogério de Lima Sousa 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 08/07/2017
Var
// Seção de Declarações das variáveis 
   a, b, c: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("Digite o valor do primeiro numero")
   leia(a)
   escreval("Digite o valor do segundo numero")
   leia(b)
   escreval("Digite o valor do terceiro numero")
   leia(c)
   se a < b entao
      se  b < c entao
          escreval(a,b,c)
      senao
           se a < c entao
              escreval(a,c,b)
           senao
               escreval(c,a,b)
           fimse
      fimse
   senao
        se b < c entao
           se a < c entao
              escreval(b,a,c)
           senao
               escreval(b, c,a)
           fimse
        senao
             escreval(c,b,a)
        fimse
   fimse
   
Fimalgoritmo
Algoritmo "Questao_01"
// Disciplina  : [Algoritimo e Progrma��o I]
// Autor(a)    : Rog�rio
Var
//vm: velocidade m�dia
//tg: tempo gasto
//dp: distancia percorrida
//qg: quantidade de gasolina gasta
   vm, tg, dp, qg: Real

Inicio
      Escreval("Qual a velocidade media em km/h?")
      Leia(vm)
      Escreval("Qual o tempo gasto em horas?")
      Leia(tg)
      dp <- vm * tg
      qg <- dp / 12
      Escreval("A dist�ncia percorrida �:", dp)
      Escreval("Litros de gasolina necess�rio:", qg)
Fimalgoritmo
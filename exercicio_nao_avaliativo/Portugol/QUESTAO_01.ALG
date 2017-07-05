Algoritmo "Questao_01"
// Disciplina  : [Algoritimo e Progrmação I]
// Autor(a)    : Rogério
Var
//vm: velocidade média
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
      Escreval("A distância percorrida é:", dp)
      Escreval("Litros de gasolina necessário:", qg)
Fimalgoritmo
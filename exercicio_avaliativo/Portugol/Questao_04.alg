Algoritmo "Questao_04"
// Disciplina :  Algoritimos e Programação I
// Professor : Arlino Henrique Magalhães de Araújo
// Aluno : Rogério de Lima Sousa
// Disponível no repositório do aluno:
// https://github.com/rogeriothe/algoritimo1/tree/master/exercicio_avaliativo
Var
   peso, altura, imc: Real
Inicio
   escreval("Digite seu peso em Kilos:")
   leia(peso)

   escreval("Digite sua altura em Metros:")
   leia(altura)

   imc <- peso / (altura * altura)

   escreval(imc)

   se imc < 20 entao
      escreval("Abaixo do peso")
   senao
      se (imc >= 20) e (imc < 25) entao
         escreval("Seu peso esta normal")
      senao
         se (imc >= 25) e (imc < 30) entao
            escreval("Voce esta com excesso de peso")
         senao
            se (imc >= 30) e (imc < 35) entao
               escreval("Voce esta com obesidade")
            senao
               se imc > 35 entao
                  escreval("Voce esta com obesidade morbida")
               fimse
            fimse
         fimse
      fimse
   fimse

Fimalgoritmo
Algoritmo "Questao_10"
// Disciplina :  Algoritimos e Programa��o I
// Professor : Arlino Henrique Magalh�es de Ara�jo
// Aluno : Rog�rio de Lima Sousa
// Dispon�vel no reposit�rio do aluno:
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
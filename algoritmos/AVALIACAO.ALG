Algoritmo "Avaliacao"
Var
   A1,A2,A3,media:real
Inicio
     Escreva("Digite a nota da prova 1")
     Leia(A1)
     Escreval("Digite a nota da prova 2")
     Leia(A2)
     Escreval("Digite a nota da prova 3")
     Leia(A3)
     A1 <- (A1 * 2)/10
     A2 <- (A2 * 3)/10
     A3 <- (A3 * 5)/10
     media <- (A1 + A2 + A3)/2
     Escreval("A média das notas é: ", media)

Fimalgoritmo
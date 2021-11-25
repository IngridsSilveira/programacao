Algoritmo "salario_inss"
Var
nome,sal_bruto,desconto,sal_liquido:real
Inicio
     Escreva("Digite o nome do funcinário")
     Leia(nome)
     Escreval("Digite o seu salario")
     Leia(sal_bruto)
     desconto <- (9 * sal_bruto)/100
     sal_liquido <- sal_bruto - desconto
     Escreva("O seu salario é: ", sal_liquido)

Fimalgoritmo
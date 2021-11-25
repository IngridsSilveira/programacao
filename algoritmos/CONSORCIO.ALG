Algoritmo "Consorcio"
Var
      total_prestacoes,quantidade_paga,valor_prestacoes,total_pago,saldo_devedor: real
Inicio
     Escreva("Qual é o total de prestações?")
     Leia(total_prestacoes)
     Escreval("Qual foi o valor pago pelo devedor?")
     Leia(quantidade_paga)
     Escreval("Qual é o valor atual?")
     Leia(valor_prestacoes)
     total_pago <- valor_prestacoes * quantidade_paga
     Escreval("O total que você pagou das suas prestações é: ", total_pago)
     saldo_devedor <- (valor_prestacoes * total_prestacoes) - total_pago
     Escreva("O seu saldo devedor é: ", saldo_devedor)
     FimAlgoritmo
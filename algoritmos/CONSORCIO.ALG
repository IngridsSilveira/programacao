Algoritmo "Consorcio"
Var
      total_prestacoes,quantidade_paga,valor_prestacoes,total_pago,saldo_devedor: real
Inicio
     Escreva("Qual � o total de presta��es?")
     Leia(total_prestacoes)
     Escreval("Qual foi o valor pago pelo devedor?")
     Leia(quantidade_paga)
     Escreval("Qual � o valor atual?")
     Leia(valor_prestacoes)
     total_pago <- valor_prestacoes * quantidade_paga
     Escreval("O total que voc� pagou das suas presta��es �: ", total_pago)
     saldo_devedor <- (valor_prestacoes * total_prestacoes) - total_pago
     Escreva("O seu saldo devedor �: ", saldo_devedor)
     FimAlgoritmo
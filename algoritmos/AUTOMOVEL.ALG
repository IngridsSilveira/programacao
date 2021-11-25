Algoritmo "automovel"
Var
cust_fabrica, percentual, impostos, preco_final:real

Inicio
      cust_fabrica <- 800
      percentual <-(25 * cust_fabrica)/100
      impostos <-(45 * cust_fabrica)/100
      preco_final <- cust_fabrica + percentual + impostos
      Escreva("O preço final é: ", preco_final)
Fimalgoritmo
Algoritmo "prestacao_atraso"
Var
 valor_prestacao,taxa_juros,dias_atraso,prestacao:real
Inicio
    Escreva("Qual é o valor da prestação?")
    Leia(valor_prestacao)
    Escreval("Quanto é a taxa de juros imposta pelo banco?")
    Leia(taxa_juros)
    Escreval("Quantos dias foram atrasados?")
    Leia(dias_atraso)
    prestacao <- valor_prestacao +(valor_prestacao * (taxa_juros/100) * dias_atraso)
    Escreval("O total da sua prestação é: ", prestacao)
Fimalgoritmo
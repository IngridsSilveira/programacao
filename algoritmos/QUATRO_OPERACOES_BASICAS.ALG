Algoritmo "Quatro_operacoes_basicas"
Var
   NUM_A, NUM_B, SOMA, SUBTRACAO, MULTIPLICACAO, DIVISAO: real
Inicio
NUM_A <- 0
NUM_B <- 0
SOMA <- 0
SUBTRACAO <- 0
MULTIPLICACAO <- 0
DIVISAO <- 0
    Escreva("Programa que executa as quatros operações básicas")
    Escreval("Informe o primeiro número")
    Leia(NUM_A)
    Escreval("Informe o segundo número")
    Leia(NUM_B)
    SOMA <- NUM_A + NUM_B
    SUBTRACAO <- NUM_A - NUM_B
    MULTIPLICACAO <- NUM_A * NUM_B
    DIVISAO <- NUM_A / NUM_B
    Escreval("A soma dos números é: ", SOMA)
    Escreval("A subtração dos números é: ", SUBTRACAO)
    Escreval("A multiplicação entre os dois números é: ", MULTIPLICACAO)
    Escreval("A divisão entre os dois números é: ", DIVISAO)
Fimalgoritmo
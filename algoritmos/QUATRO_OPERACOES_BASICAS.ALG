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
    Escreva("Programa que executa as quatros opera��es b�sicas")
    Escreval("Informe o primeiro n�mero")
    Leia(NUM_A)
    Escreval("Informe o segundo n�mero")
    Leia(NUM_B)
    SOMA <- NUM_A + NUM_B
    SUBTRACAO <- NUM_A - NUM_B
    MULTIPLICACAO <- NUM_A * NUM_B
    DIVISAO <- NUM_A / NUM_B
    Escreval("A soma dos n�meros �: ", SOMA)
    Escreval("A subtra��o dos n�meros �: ", SUBTRACAO)
    Escreval("A multiplica��o entre os dois n�meros �: ", MULTIPLICACAO)
    Escreval("A divis�o entre os dois n�meros �: ", DIVISAO)
Fimalgoritmo
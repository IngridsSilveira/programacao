Algoritmo "Saque_dinheir_caixa_eletronico"
Var
    VALOR_SAQUE, SALDO: real
    SENHA, NUM_AGENCIA, NUM_CONTA: inteiro
Inicio
SENHA <- 0
NUM_CONTA <- 0
VALOR_SAQUE <- 0
SALDO <- 0

          Escreva("Seja bem-vindos!!")
          Escreval("Informe o n�mero da sua ag�ncia")
          Leia(NUM_AGENCIA)
          Escreval("Informe o n�mero da sua conta")
          Leia(NUM_CONTA)
          Escreval("Informe sua senha")
          Leia(SENHA)
// ap�s ler os dados, o sistema dever� trazer do banco de dados o valor do saldo do usu�rio na vari�vel SALDO
          Escreval("Informe o valor do saque")
          Leia(VALOR_SAQUE)
          Escreval("Informe o valor do seu saldo")
          Leia(SALDO)
       SE SALDO >= VALOR_SAQUE ENTAO
          SALDO <- SALDO - VALOR_SAQUE
          Escreval("Saque efetuado com sucesso. Seu saldo atual � R$: ", SALDO)
// ap�s apresentar o novo saldo o sistema deve fazer a contagem das notas e disponibilizar a quantia sacada ao usu�rio
          SENAO
             Escreval("Saldo Insuficiente. N�o ser� poss�vel realizar a opera��o")
       FimSe
Fimalgoritmo
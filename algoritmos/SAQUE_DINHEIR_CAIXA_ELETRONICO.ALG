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
          Escreval("Informe o número da sua agência")
          Leia(NUM_AGENCIA)
          Escreval("Informe o número da sua conta")
          Leia(NUM_CONTA)
          Escreval("Informe sua senha")
          Leia(SENHA)
// após ler os dados, o sistema deverá trazer do banco de dados o valor do saldo do usuário na variável SALDO
          Escreval("Informe o valor do saque")
          Leia(VALOR_SAQUE)
          Escreval("Informe o valor do seu saldo")
          Leia(SALDO)
       SE SALDO >= VALOR_SAQUE ENTAO
          SALDO <- SALDO - VALOR_SAQUE
          Escreval("Saque efetuado com sucesso. Seu saldo atual é R$: ", SALDO)
// após apresentar o novo saldo o sistema deve fazer a contagem das notas e disponibilizar a quantia sacada ao usuário
          SENAO
             Escreval("Saldo Insuficiente. Não será possível realizar a operação")
       FimSe
Fimalgoritmo
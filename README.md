# Atividade Avaliativa – Laboratório de Programação

# Sistema de Gerenciamento de Estacionamento Rotativo

## Aluno

- Nome: Lyan Marcell Costa Lima
- Matrícula: 2022030538
- Curso: BICT UFMA

---

# 1. Análise do Problema

Um estacionamento rotativo funciona controlando o tempo que um veículo permanece estacionado e cobrando um valor proporcional ao período utilizado.

O sistema precisa:

- Receber a placa do veículo
- Identificar o tipo do veículo
- Receber o tempo de permanência
- Calcular o valor da estadia
- Aplicar desconto quando necessário
- Aplicar multa quando necessário
- Exibir todas as informações ao usuário

O programa foi desenvolvido utilizando:

- Variáveis
- Entrada e saída de dados
- Operadores matemáticos
- Estruturas condicionais
- switch-case

Sem utilizar laços de repetição e sem funções além da função principal.

---

# 2. Definição das Variáveis

| Variável | Tipo | Finalidade |
|---|---|---|
| placa | char[] | Armazenar a placa do veículo |
| tipo | int | Armazenar o tipo do veículo |
| horas | float | Armazenar o tempo de permanência |
| valorHora | float | Guardar o valor da hora do veículo |
| valorBase | float | Guardar o valor calculado antes das regras |
| desconto | float | Guardar o valor do desconto |
| multa | float | Guardar o valor da multa |
| valorFinal | float | Guardar o valor total a pagar |
| tipoTexto | char[] | Guardar o nome do veículo em texto |

---

# 3. Regras de Negócio

## Tipos de veículos

1 - Carro  
2 - Moto  
3 - Caminhonete

## Valores por hora

- Carro → R$ 5,00/h
- Moto → R$ 3,00/h
- Caminhonete → R$ 8,00/h

## Regras adicionais

- Até 1 hora → cobrança do valor mínimo
- Acima de 5 horas → desconto de 10%
- Acima de 10 horas → multa adicional de R$ 20,00

### Observação

O enunciado cita “valor mínimo até 1 hora”, porém não informa um valor fixo.  
Assim, foi considerado o valor normal da hora do veículo.

---

# 4. Fluxograma do Processamento

```text
INÍCIO

↓
Receber placa

↓
Receber tipo do veículo

↓
SWITCH(tipo)
    Carro → valorHora = 5
    Moto → valorHora = 3
    Caminhonete → valorHora = 8
FIM SWITCH

↓
Receber horas

↓
Calcular valorBase

↓
IF horas > 5
    aplicar desconto
END IF

↓
IF horas > 10
    aplicar multa
END IF

↓
Calcular valorFinal

↓
Exibir resultados

↓
FIM
```

---

# Explicação da Lógica

O programa começa recebendo os dados do veículo.

Depois utiliza o switch-case para identificar o tipo do veículo e definir o valor da hora.

Em seguida calcula o valor base multiplicando o valor da hora pela quantidade de horas.

Depois verifica:

- Se o veículo ficou mais de 5 horas, recebe desconto de 10%
- Se ficou mais de 10 horas, recebe multa de R$ 20

Por fim o sistema calcula o valor final e exibe todas as informações.

---

# Como Compilar

```bash
gcc main.c -o estacionamento
```

# Como Executar

```bash
./estacionamento
```

---

# Exemplo de Entrada

```text
Digite a placa: ABC1234
Digite o tipo do veículo:
1-Carro
2-Moto
3-Caminhonete
1
Digite o tempo de permanência: 6
```

# Exemplo de Saída

```text
Placa: ABC1234
Tipo: Carro
Tempo: 6.0 horas
Valor Base: R$ 30.00
Desconto: R$ 3.00
Multa: R$ 0.00
Valor Final: R$ 27.00
```

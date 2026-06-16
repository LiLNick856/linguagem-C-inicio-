# linguagem-C-inicio-
Este repositório serve para pessoas que querem saber mais sobre a linguagem C. Aqui temos os primeiros passos da linguagem.

# Primeiros Passos na Programação: Aprendendo C++

Se você está querendo começar no mundo da programação, este repositório é o lugar perfeito! Aqui estão reunidos pequenos projetos práticos e fáceis de entender, desenvolvidos para consolidar os conceitos fundamentais da lógica de programação e da sintaxe do **C++**. 

Cada arquivo aborda um pilar essencial, como entrada e saída de dados, estruturas de decisão (`if/else`, `switch-case`) e laços de repetição (`for`).

---

## 📁 Descrição dos Projetos (Por Número)

### 1. Entrada e Saída de Dados (`1.dados in.cpp`)
* **O que faz:** É o clássico ponto de partida. Ele interage com o usuário solicitando que um número seja digitado e, logo em seguida, exibe exatamente o número que foi informado.
* **Conceito chave:** Introdução ao fluxo de dados em C++ utilizando a biblioteca `<iostream>`, com `cin` (entrada) e `cout` (saída).

### 2. Validador do Dia da Semana (`2.dia da semana.cpp`)
* **O que faz:** Recebe um número de 1 a 7 e diz a qual dia da semana ele corresponde (ex: 1 para Domingo, 2 para Segunda-feira, etc.). Se o usuário digitar algo fora desse intervalo, ele avisa que o dia é inválido.
* **Conceito chave:** Estrutura de controle de fluxo dinâmica usando o `switch-case` e tratamento de exceções básicas com o `default`.

### 3. Anatomia de um Loop (`3.Loop.cpp`)
* **O que faz:** Gera a tabuada do número 5, mas seu grande diferencial são os comentários didáticos explicativos no próprio código. Ele funciona como uma aula prática sobre o escopo de um laço de repetição.
* **Conceito chave:** O uso correto das chaves `{ }` para delimitar o bloco que deve ser repetido e o posicionamento do comando `printf`.

### 4. Analisador Numérico (`4.Numero.cpp`)
* **O que faz:** Avalia qualquer número real (com ponto flutuante) digitado pelo usuário e diz se ele é **positivo**, **negativo** ou igual a **zero**.
* **Conceito chave:** Condicionais encadeadas (`if`, `else if`), manipulação de tipos de dados `float` e formatação de casas decimais na exibição de dados.

### 5. Tabuada Automatizada (`5.TABUADA.cpp`)
* **O que faz:** Uma versão limpa e direta da tabuada do número 5, focada puramente na execução e performance do laço de repetição sem textos adicionais.
* **Conceito chave:** Automatização de cálculos matemáticos simples usando a estrutura de repetição `for`.

### 6. Jogo da Forca (`6.Forca.cpp`)
* **O que faz:** Um jogo interativo de adivinhação de palavras para o terminal. O usuário define uma palavra secreta e o jogador tenta adivinhá-la letra por letra, contando com um sistema de até 10 vidas e uma máscara visual que oculta as letras não descobertas.
* **Conceito chave:** Manipulação e varredura de vetores de caracteres (*strings*), controle de estados e laços condicionais encadeados (`while` e `if`).

### 7. Sistema de Caixa (`7.Sistema de caixa.cpp`)
* **O que faz:** Simula o terminal de atendimento de uma lanchonete através de um menu interativo, permitindo que o usuário adicione múltiplos itens (Hambúrguer, Pizza ou Refrigerante) e acumule o valor no carrinho até decidir finalizar o pedido.
* **Conceito chave:** Implementação de menus interativos utilizando a estrutura de repetição `do-while` associada a condicionais para acumulação de valores aritméticos.

### 8. Sistema de Mercado com Desconto (`8.Sistema de mercado.cpp`)
* **O que faz:** Gerencia uma lista de compras de supermercado com base no código e na quantidade de cada produto. Ao encerrar a operação, o sistema calcula o subtotal e aplica automaticamente um desconto de 5% caso o valor final ultrapasse R$ 100,00.
* **Conceito chave:** Estrutura de laço infinito controlado por interrupção (`break`), combinada com seleção múltipla via `switch-case` e aplicação de lógica percentual condicional.

### 9. Sistema de Notas e Rendimento Escolar (`9.Sistema de Notas.cpp`)
* **O que faz:** Solicita o número total de estudantes de uma turma e calcula individualmente a média aritmética de duas notas de cada um deles, classificando de forma automática a situação de cada aluno em **Aprovado**, **Recuperação** ou **Reprovado**.
* **Conceito chave:** Laço de repetição controlado por contador (`for`) integrado com estruturas condicionais encadeadas para análise e classificação de dados numéricos.

---

## Ferramentas Necessárias para Rodar

Para executar qualquer um destes arquivos, você precisará apenas de um compilador de C++. Algumas opções populares são:
* **Dev-C++** (Muito recomendado para iniciantes no Windows)
* **Code::Blocks**
* **VS Code** (com a extensão de C/C++)
* Compilador via terminal como o **GCC/G++**

## Como Executar

1. Abra o arquivo `.cpp` desejado na sua IDE de preferência.
2. Clique no botão de **Compilar e Rodar** (geralmente a tecla F11 no Dev-C++).
3. Siga as instruções que aparecerem na tela preta do terminal!

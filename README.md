Central de Atendimento em C
Este é um projeto simples em linguagem C que simula uma central de atendimento ao cliente via console. O programa oferece um menu interativo para usuários que já são clientes e para aqueles que desejam contratar os serviços, registrando as interações e exibindo um relatório final ao encerrar.

Sobre o Projeto
O objetivo deste projeto é demonstrar o uso de estruturas de controle básicas em C, como if-else, do-while e switch-case, para criar uma aplicação de console interativa. A aplicação guia o usuário através de um menu de atendimento, captura suas escolhas e, ao final da execução, apresenta um resumo das opções selecionadas.

Funcionalidades
Menu Inicial: Distingue entre usuários que já são clientes e novos clientes.

Menu para Clientes: Oferece opções de atendimento para os setores Financeiro, Suporte Técnico e Comercial.

Interação com o Usuário: Solicita o nome do cliente para uma saudação personalizada.

Loop de Atendimento: Permite que o cliente navegue pelas opções até que decida sair.

Relatório de Acessos: Ao final da execução, exibe um resumo de quantas vezes cada opção foi acessada, incluindo:

Número de acessos de clientes existentes.

Número de novos clientes interessados.

Quantidade de solicitações para cada setor (Financeiro, Suporte, Comercial).

Contagem de saídas do sistema.

Como Executar
Para compilar e executar este projeto, você precisará de um compilador C, como o GCC, instalado em seu sistema.

Salve o código: Salve o código-fonte em um arquivo chamado main.c (ou qualquer outro nome de sua preferência com a extensão .c).

Abra o terminal: Navegue até o diretório onde você salvou o arquivo.

Compile o código: Execute o seguinte comando para compilar o programa:

gcc main.c -o central_atendimento

Execute o programa: Após a compilação bem-sucedida, execute o arquivo gerado:

./central_atendimento

Exemplo de Uso
Ao executar o programa, você verá o menu inicial:

Óla! Seja bem vindo(a) a nossa central de atentendimento
1 - Já sou cliente
2 - Quero contratar
Digite sua opção: 1
Digite seu nome: Maria

Em seguida, o menu de cliente será exibido. Após algumas interações e a seleção da opção de sair, um relatório será exibido no console:

Agradecemos pelo seu contato e, se precisar de algo no futuro, não hesite em nos procurar!
Tenha um excelente dia!
Relátorio de acessos

Já são clientes: 1 vezes
Querendo contratar: 0 clientes
Financeiro: 1 vezes
Suporte: 1 vezes
Comercial: 0 vezes
Saidas: 1 vezes

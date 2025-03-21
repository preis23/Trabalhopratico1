Pretende-se gerir e executar instruções para controlo de um conjunto de equipamentos ligadas em rede. Casa instrução tem um identificador numérico único e sequencialmente atribuído pela aplicação; um tipo de instrução; um conjunto de parâmetros dessa mesma instrução; bem como um estado de execução (por executar, executada, com erro). O tipo de instrução é caraterizado por um identificador único, um nome de comando a executar e o número de parâmetros que a instrução deve ter (num máximo de 5 parâmetros).

Por exemplo:
  Instrução: ligar Ana 10
  É uma instrução do tipo ligar, com dois parâmetros, cujos valores nesta instrução
são Ana e 10.

Para essa gestão, deve desenvolver-se uma aplicação que permita inserir instruções e colocá-las para execução. As instruções são inseridas numa lista que depois será executada pela ordem de inserção. Enquanto não tiver sido executada, uma instrução pode ser alterada, nomeadamente nos valores da lista de parâmetros. Também deve ser possível listar todas as instruções, ou as instruções pelo estado de execução.
O programa deve apresentar a instrução a ser executada, nomeadamente o seu tipo (comando) e ainda a lista de parâmetros separados por espaço. No momento da execução, caso o número de parâmetros seja diferente do número de parâmetros daquele tipo de instrução, a aplicação deve apresentar uma mensagem de erro e colocar essa instrução no estado de execução de erro.
A qualquer momento o utilizador poderá consultar o número de instruções executadas (com e sem erro) e por executar; a quantidade de instruções executada para cada tipo; bem como o tipo de instrução mais utilizada.

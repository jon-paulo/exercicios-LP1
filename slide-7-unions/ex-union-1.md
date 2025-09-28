Structs tem vários membros e todos ocupam seu devido espaço quando é criado uma nova variável desse tipo.
Uma das grandes diferenças é que Union só aloca um espaço compartilhado por todos os membros, então acaba poupando memória em casos em que só precisamos nos preocupar com um dos membros

Por exemplo, o exercicio 7 pede para classificar e descrever certas características de alguns animais, usando Union para a classificação(um animal não pode ser Mamífero e Anfibio ao mesmo tempo), e Struct para as características(todo animal tem mais de uma característica)

Usar Union para classificar, e usar essa classificação para detalhar as características de sua classe usando struct. Nenhum espaço desnecessário usado, Union serviu com um "switch", apenas a struct necessária é usada.

Claro que poderia ter usado struct para tudo, mas seria um desperdício de espaço enorme na hora de criar cada variável.

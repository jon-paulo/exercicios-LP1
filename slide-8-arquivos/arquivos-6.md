Não mudou nada, só usando texto simples e essas coisas, cada byte é escrito como é. Nos dois casos
Teria diferença se fosse rodar o código no Windows, porque ele tem aquele '\r' junto com '\n', então se fosse usar "r" ao inves do "rb" ele traduziria '\n' como '\n''\r', que são dois caracteres, então o arquivo seria 1 byte maior pra cada '\n'

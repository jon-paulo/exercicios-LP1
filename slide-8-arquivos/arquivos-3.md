pra escrever: O '\0' é um padrão de string de C, não necessáriamente todo programa que vai abrir o arquivo vai interpretar isso como um fim de string. É só mais um caractere escrito, então é bom não escrever ele no arquivo

pra ler: como '\0' não é padrão de arquivos, pra usar o que voce leu como uma string, tem que dar um jeito de por '\0' no final.

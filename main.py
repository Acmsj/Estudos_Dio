class Heroi:
    def __init__(self, nome, idade, tipo):
        self.nome = nome
        self.idade = idade
        self.tipo = tipo

    def atacar(self):
        if self.tipo == "mago":
            ataque = "magia"
        elif self.tipo == "guerreiro":
            ataque = "espada"
        elif self.tipo == "monge":
            ataque = "artes marciais"
        elif self.tipo == "ninja":
            ataque = "shuriken"
        else:
            ataque = "usou um ataque genérico"

        mensagem = f"O {self.tipo} atacou usando {ataque}"
        print(mensagem)


# Exemplo de uso
heroi1 = Heroi("Aragorn", 30, "guerreiro")
heroi1.atacar()

heroi2 = Heroi("Gandalf", 150, "mago")
heroi2.atacar()
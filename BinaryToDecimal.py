# Classe do nó da lista ligada
class ListNode:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

# Função getNumber como implementado anteriormente
def getNumber(binary):
    result = 0
    while binary:
        # Shift result left by 1 and add current binary node's data
        result = result * 2 + binary.data
        # Move to the next node
        binary = binary.next
    return result

# Criando a lista ligada [0 -> 1 -> 1]
node4 = ListNode(1)   # Último nó (contém 1)
node3 = ListNode(1, node4)   # Último nó (contém 1)
node2 = ListNode(1, node3)  # Segundo nó (contém 1)
node1 = ListNode(0, node2)  # Primeiro nó (contém 0)

# Chamar a função com o primeiro nó
decimal_value = getNumber(node1)

print(decimal_value)  # Saída esperada: 3
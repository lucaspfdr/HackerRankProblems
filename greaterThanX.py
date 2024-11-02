class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = new_node

    def delete_greater_than(self, x):
        # Handle the case where head itself needs to be deleted
        while self.head and self.head.data > x:
            self.head = self.head.next

        # Initialize current node
        current = self.head

        # Traverse the list and delete nodes with values greater than x
        while current and current.next:
            if current.next.data > x:
                current.next = current.next.next
            else:
                current = current.next

    def print_list(self):
        current = self.head
        while current:
            print(current.data, end=' -> ')
            current = current.next
        print('None')

# Exemplo de uso:
linked_list = LinkedList()
linked_list.append(1)
linked_list.append(4)
linked_list.append(3)
linked_list.append(6)
linked_list.append(2)

print("Lista original:")
linked_list.print_list()

x = 3
linked_list.delete_greater_than(x)

print(f"Lista após deletar elementos maiores que {x}:")
linked_list.print_list()
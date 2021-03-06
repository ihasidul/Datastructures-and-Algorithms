class Node:
    # default value of data and link is none if no data is passed
    def __init__(self, data = None, link = None):
        self.data = data
        self.link = link
class LinkedList:
    def __init__(self):
        self.headval = None
	
    def addNode(data):
        start = self.head
        node = Node(data)
        while start.link:
            start = start.link 
        start.link = node
    def printList():
        start = self.head
        while start.link:
            print(start.data)
            start = start.link 
list1 = LinkedList()
list1.addNode(2)
list1.addNode(4)

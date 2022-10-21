#declaring the node
class Node:
   def __init__(self, dataval=None):
      self.dataval = dataval
      self.nextval = None

class SLinkedList:
   def __init__(self):#if there doesnt exist head/linkedlist
      self.headval = None

   def listprint(self):#traversing the linkedlist n printing it
      printval = self.headval
      while printval is not None:
         print (printval.dataval)
         printval = printval.nextval

list = SLinkedList()
list.headval = Node("A")
e2 = Node("B")
e3 = Node("C")

# Link first Node to second node
list.headval.nextval = e2

# Link second Node to third node
e2.nextval = e3

list.listprint()
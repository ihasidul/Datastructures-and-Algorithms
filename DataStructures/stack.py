l = []
while True:
    b = input("->")
    if not b:
        break
    l.append(b) #Here the element is being pushed into the stack
print("The input list", l)
print("Last elemt is", l[-1]) #l[-1] is doing the pop aciton of the stack
def create():
    stack=[]
    return stack

def isEmpty(stack):
    if len(stack)==0:
        return 1
    else:
        return 0

def push(stack,item):
    stack.append(item)
    print(item+ "->Pushed")

def pop(stack):
    if(isEmpty(stack)):
        print("Stack is Empty")
    return stack.pop()

stack=create()
push(stack,str(2))
push(stack,str(3))
push(stack,str(0))
push(stack,str(-1))
push(stack,str(-2))
'''print("popped element" +pop(stack))
print("popped element" +pop(stack))
print("popped element" +pop(stack))
print("popped element" +pop(stack))'''
print("elements are:" +str(stack))

'''class stack:
    def __init__(self):
        self.stack=[]

    def push(self,item):
        self.stack.append(item)

    def pop(self):
        if len(self.stack) < 1:
            return None
        self.stack.pop(-1)

    def display(self):
        self.stack.reverse()
        print(self.stack)

s=stack()
s.push(1)
s.push(2)
s.push(3)
s.push(4)
s.push(5)
s.display()
s.pop()
print ("After pop")
s.display()'''
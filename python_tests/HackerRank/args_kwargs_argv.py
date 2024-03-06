from sys import argv

def args_function(*args):
    print("args summoned")
    
def kwargs_function(**kwargs):
    print("kwargs summoned")

path, param = argv
print(param)

if param == 'args': args_function()
elif param == 'kwargs': kwargs_function()
else: print("no parameter/bad parameter")
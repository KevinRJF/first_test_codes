print("Hello world")

answer = input("Cual es tu nombre? ")
print(f"Hello, {answer}")

#dictionary:
words = set()

def check(word):
    if word.lower() in words:
        return True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        word = line.rstrip()
        words.add(word)
    close(file)
    return True

def size():
    return len(words)

def unload():
    return True
#end of dictionary

print("pone dos numeros para ver cual es el mayor")
x = int(input("x: "))
y = int(input("y: "))

if x < y:
    print("x es menor que y")
elif x > y:
    print("x es mayor que y")
else:
    print("x es igual que y")

print("ahora dividi dos numeros")
x = int(input("x: "))
y = int(input("y: "))

z = x / y

print(f"{z:.10f}")

s = input("Estás de acuerdo? ")
s = s.lower()

if s in ["yes", "ye", "y"]:
    print("Ah ok estás de acuerdo")
elif s in ["no", "n"]:
    print("Bueno entonces no estás de acuerdo")

def main():
    wao(3)

def wao(n):
    for i in range(n):
        print("wao")

main()

print("Ahora hace una columna")

def columna():
    altura = get_altura()
    for i in range(altura):
        print("#")

def get_altura():
    while True:
        try:
            n = int(input("Altura: "))
            if n > 0:
                return n
        except ValueError:
            print("Eso no es un número")

columna()

for i in range(4):
    print("?", end="")
print()

print("?" * 4)

print("way to make a grid:")

for i in range(3):
    print("#" * 3)
#################################

scores = []

for i in range(3):
    s = int(input("Score: "))
    scores += [s] #también se puede hacer scores.append(s)

average = sum(scores) / len(scores)
print(f"Promedio: {average:.4f}")

################################

before = input("Before (minusculas): ")

after = before.upper()
print(f"After: {after}")
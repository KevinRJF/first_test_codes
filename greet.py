import sys

if len(sys.argv) == 1:
    print("Missing command-line argument")
    sys.exit(1)

print(f"Hello, {sys.argv[1]}")

names = ["Kevin", "Elena", "Hermione"]

name = input("Name: ")

if name in names:
    print("Found")
else:
    print("Not Found")
    sys.exit(1)

people = {
    "Kevin": "+1-617-495-1000",
    "Elena": "+1-949-468-2750"
}

name = input("Name: ")
if name in people:
    number = people[name]
    print(f"Name: {number}")

s = input("Capitalizar: ")
t = s.capitalize()

print(f"s: {s}")
print(f"t: {t}")

x = 1
y = 2

print(f"x is {x}, y is {y}")
x, y = y, x
print(f"x is {x}, y is {y}")p
try:
    with open('poem.txt', "r") as f:
        contents = f.read()
        print(contents)
except FileNotFoundError:
    print("This file don't exist.")

#replace w with a to append instead of overwriting
with open("poem.txt", "a") as f:
    f.write("\nI added this to the poem from a python program")

try:
    with open('poem.txt', "r") as f:
        contents = f.read()
        print(contents)
except FileNotFoundError:
    print("This file don't exist.")
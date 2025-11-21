try:
    with open('./poem.tx', "r") as f:
        contents = f.read()
        print(contents)
except FileNotFoundError:
    print("This file don't exist.")
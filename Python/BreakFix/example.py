import os

def clear():
    if platform.system() == "Windows":
        os.system("cls")
    else:
        os.system("clear")

if __name__ == "__main__":
    clear()

print("some crazy stuff")
print("some more crazy stuff")
v1 = input()
clear()
print("this statement happened after clear was run")

a = int(input())

match a:
    case 0:
        print("a is zero")
    case 4:
        print("a is 4")
    case _ if a != 90:
        print(f"{a} is not 90")


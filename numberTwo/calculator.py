

def main():
    print("Simple Calculator")
    print("Type 'q' to quit.\n")
    while True:
        num1 = input("Enter the first number: ")
        if num1.lower() == 'q':
            break
        num2 = input("Enter the second number: ")
        if num2.lower() == 'q':
            break
        operation = input("Choose an operation (+, -, *, /): ")
        if operation.lower() == 'q':
            break

        try:
            num1 = float(num1)
            num2 = float(num2)

            if operation == '+':
                result = num1 + num2
            elif operation == '-':
                result = num1 - num2
            elif operation == '*':
                result = num1 * num2
            elif operation == '/':
                if num2 == 0:
                    print("Cannot divide by zero!")
                    continue
                result = num1 / num2
            else:
                print("Invalid operation!")
                continue

            print(f"Result: {result}\n")
        except ValueError:
            print("Invalid input! Please enter numeric values.\n")

if __name__ == "__main__":
    main()


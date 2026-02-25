num = int(input("Enter a number: "))
temp = num

while temp > 100:
    last_digit = temp % 10
    temp = temp // 10 + 4 * last_digit

if temp % 13 == 0:
    print(num, "is divisible by 13")
else:
    print(num, "is not divisible by 13")

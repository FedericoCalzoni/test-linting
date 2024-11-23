n = 10
num1 = 0
num2 = 1
next_NuMbEr_ExAmPlE = num2  
count = 1

while count <= n:
    print(next_NuMbEr_ExAmPlE, end=" ")
    count += 1
    num1, num2 = num2, next_NuMbEr_ExAmPlE
    next_NuMbEr_ExAmPlE = num1 + num2
print()
#!/usr/bin/python3
largest_palindrome = 0

for num1 in range(100, 1000):
    for num2 in range(100, 1000):
        product = num1 * num2
        if str(product) == str(product)[::-1] and product > largest_palindrome:
            largest_palindrome = product

with open("102-result", "w") as file:
    file.write(str(largest_palindrome), end='')

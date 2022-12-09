#!/usr/bin/python3


def is_palindrome(mul):
    return (str(mul) == str(mul)[::-1])


def biggest_palindrome():
    biggest = 0
    for i in range(999, 100, -1):
        for j in range(999, 100, -1):
            mul = i * j
            if is_palindrome(mul):
                if mul > biggest:
                    biggest = mul
    return biggest


print(biggest_palindrome())

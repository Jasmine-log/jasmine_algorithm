

# simple lambda
result = (lambda x, y : x + y)(3, 4)
print(result)

# map function
mylist = [0, 1, 2, 3, 4] 
result = list(map(lambda x: x ** 2, mylist))
print(result)

result = list(map(lambda x: x ** 2, range(5)))     # python2 & python3
print(result)

# filter function
mylist = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9] 
result = list(filter(lambda x: x > 5 and x >= 8, range(10)))
print(result)

result = list(filter(lambda x: x > 5 and x >= 8, mylist))
print(result)
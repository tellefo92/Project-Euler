fib = [1, 1, 2]
s = 0

while fib[2] < 4*10**6:
	if fib[2] % 2 == 0:
		s += fib[2]
	fib[:] = fib[1:] + [sum(fib[1:])]

print(s)

"""4613732"""
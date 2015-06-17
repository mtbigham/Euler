#Prime Number Seive of Eratosthenes used to find primes
def summation_of_primes(target):
	if target < 2:
		return 0
	if target == 2:
		return 2
	primeArray = [True] * target
	primeArray[0] = False
	primeArray[1] = False
	sum = 0
	for index, value in enumerate(primeArray):
		if value is True:
			falseRange = []
			i = 0
			while index**2+index*i < target:
				falseRange.append(index**2+index*i)
				i+=1
			for j in falseRange:
				primeArray[j] = False
			sum += index
	return sum

print summation_of_primes(2000000)
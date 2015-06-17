def pythagorean_triplet(target):
	for a in range(1,target):
		for b in range(1, target-a):
			c = target-a-b
			if a**2+b**2 == c**2:
				print a*b*c
				return 0
	return -1

pythagorean_triplet(1000)
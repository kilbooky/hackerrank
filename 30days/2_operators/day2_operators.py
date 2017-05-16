import math

mealCost = input('Enter meal cost-->')
tipPercent = input('Enter tip percent-->')
taxPercent = input('Enter tax percent-->')

def getTotalCost(meal=12, tip=20, tax=8):
	meal = float(meal)
	tip = (float(tip) / 100) * meal
	tax = (float(tax) / 100) * tip
	total = math.ceil(meal + tip + tax)
	return total


totalCost = getTotalCost(mealCost, tipPercent, taxPercent)
print('The total meal cost is %i dollars.' % totalCost)


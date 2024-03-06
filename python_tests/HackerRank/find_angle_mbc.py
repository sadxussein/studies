import math

ab = float(input())
bc = float(input())

print(round(math.degrees(math.atan((ab / (ab**2 + bc**2)**0.5 * ((ab**2 + bc**2)**0.5)/2) / (bc / (ab**2 + bc**2)**0.5 * ((ab**2 + bc**2)**0.5)/2)))), '\u00b0', sep='')

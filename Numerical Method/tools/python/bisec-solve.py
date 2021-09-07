import math
a = -1
b = 0


def f(x):
    # return math.cos(math.radians(x)) - x * math.exp(x)
    # return 4*pow(x, 3) - 6*pow(x, 2)+7*x-2.3
    return -13 - 20*x + 19*pow(x, 2) - 3*pow(x, 3)


xrTemp = 0

iteration = 10
print("Iteration | a | b | c | f(c)")

if f(a)*f(b) < 0:
    for i in range(iteration):
        c = 0.5 * (a+b)
        fc = f(c)
        print("x {} | {} | {} | {} | {}".format(i, a, b, c, fc))
        if fc < 0:
            a = c
        else:
            b = c
        if xrTemp != 0:
            print("Error: {}", (abs(((c-xrTemp)/c)*100)))
        xrTemp = c

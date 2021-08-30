import math
a = 0
b = 1


def f(x):
    return math.cos(math.radians(x)) - x * math.exp(x)

xrTemp = 0

iteration = 10
print("Iteration | a | b | c | f(c)")

if f(a)*f(b) < 0:
    for i in range(iteration):
        c = 0.5 * (a+b)
        fc = f(c)
        print(c)
        # print("x {} | {} | {} | {} | {}".format(i, a, b, c, fc))
        if fc < 0:
            a = c
        else:
            b = c
        # if xrTemp != 0:
        #     print("Error: {}", (((c-xrTemp)/c)))
        # xrTemp = c

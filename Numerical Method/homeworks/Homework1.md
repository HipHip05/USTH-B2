# Numerical Method - Homework 1

> Name: Nguyễn Hoàng Minh
>
> Class: CS (Afternoon)
>
> Student ID: BI11-181

## Exercise 1

Determine the real root of 
$$
f(x) = 4x^3 -6x^2+7x-2.3
$$
Using bisection to locate the root. Employ initial guesses of $x_l = 0$ and $x_u=1$ and iterate until the estimated error $\varepsilon_a $ falls below a level of  $\varepsilon_a = 10\%$

**Solution**

We have initiate the computation with guesses of $x_l = 0$ and $x_u=1$

So now, we need to verify that $f(x_l)f(x_u) < 0$ for confirm $x_l$ and $x_u$ guesses for the root such that the function changes sign over the interval
$$
f(x_l)f(x_u) = f(0)*f(1) = -2.3 * 2.7 = -6.21 < 0
$$
Therefore, the initial estimate of the root $x_r$ lies at the midpoint of the interval (1)
$$
x_r = \frac{0+1}{2} = 0.5
$$
So now, we have $f(x_l)f(x_r) = f(0)*f(0.5) = 0.54 >0 $, so in the next iteration, we set $x_u= x_r$ (set $x_l = x_r$ when $f(x_l)f(x_r)<0$ )

So, repeate from (1) to end, with approximate percent relative error equation
$$
\varepsilon_a = |\frac{x_{r}^{new} - x_{r}^{old} }{x_{r}^{new}}|\times 100\%
$$
so, we have below table

| Iteration | $x_l$  | $x_u$ |  $x_r$  | $\varepsilon_a$ | $f(x_r)$  |    Action     |
| --------- | :----: | :---: | :-----: | :-------------: | :-------: | :-----------: |
| 1         |   0    |   1   |   0.5   |                 |    0.2    | $x_u$= $x_r$  |
| 2         |   0    |  0.5  |  0.25   |      100%       |  -0.8625  | $x_l$ = $x_r$ |
| 3         |  0.25  |  0.5  |  0.375  |     33.33%      | -0.307812 | $x_l$ = $x_r$ |
| 4         | 0.375  |  0.5  | 0.4375  |     14.286%     | -0.050977 | $x_l$ = $x_r$ |
| 5         | 0.4375 |  0.5  | 0.46875 |      6.67%      | 0.074877  | $x_u$= $x_r$  |

Because, iterate until the estimated error $\varepsilon_a $ falls below a level of  $\varepsilon_a = 10\%$, so we can see the maximum iteration is 5 and the root of $f(x)$ is $x_r=0.46875$



## Exercise 2

Determine the real root of 
$$
f(x) = -13 - 20x + 19x^2 - 3x^3
$$
with bisection use initial guesses of $x_l = -1$ and $x_u = 0$, and a stopping criterion of 1%

We have initiate the computation with guesses of $x_l = -1$ and $x_u=$0

So now, we need to verify that $f(x_l)f(x_u) < 0$ for confirm $x_l$ and $x_u$ guesses for the root such that the function changes sign over the interval
$$ { }
f(x_l)f(x_u) = f(-1)f(0) = 29 \times -13 = -377 < 0
$$
Therefore, the initial estimate of the root $x_r$ lies at the midpoint of the interval (1)
$$
x_r = \frac{-1+0}{2} = -0.5
$$
So now, we have $f(x_l)f(x_r) = f(-1)f(-0.5) = 61.625 >0 $, so in the next iteration, we set $x_u= x_r$ (set $x_l = x_r$ when $f(x_l)f(x_r)<0$ )

So, repeate from (1) to end, with approximate percent relative error equation
$$
\varepsilon_a = |\frac{x_{r}^{new} - x_{r}^{old} }{x_{r}^{new}}|\times 100\%
$$
so, we have below table

| Iteration | **$x_l$** | **$x_u$** | **$x_r$** | **$\varepsilon_a$** | **$f(x_r)$** |  **Action**   |
| --------- | :-------: | :-------: | :-------: | :-----------------: | :----------: | :-----------: |
| 1         |     0     |    -1     |   -0.50   |                     |    2.125     | $x_u$= $x_r$  |
| 2         |   -0.5    |     0     |   -0.25   |        100%         |  -6.765625   | $x_l$ = $x_r$ |
| 3         |   -0.5    |   -0.25   |  -0.375   |       33.33%        |  -2.669922   | $x_l$ = $x_r$ |
| 4         |   -0.5    |  -0.375   |  -0.4375  |       14.286%       |  -0.362061   | $x_l$ = $x_r$ |
| 5         |   -0.5    |  -0.4375  | -0.46875  |        6.67%        |   0.858795   | $x_u$= $x_r$  |
| 6         | -0.46875  |  -0.4375  | -0.453125 |       3.448%        |   0.242733   | $x_l$ = $x_r$ |
| 7         | -0.453125 |  -0.4375  | -0.445313 |       1.7542%       |  -0.061068   | $x_l$ = $x_r$ |
| 8         | -0.453125 | -0.445313 | -0.449219 |       0.869%        |   0.090481   |               |

Because, iterate until the estimated error $\varepsilon_a $ falls below a level of  $\varepsilon_a = 1\%$, so we can see the maximum iteration is 8 and the root of $f(x)$ is $x_r=-0.445313$


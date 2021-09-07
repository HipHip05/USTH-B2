# Numerical Method - Lecture 2 - Root of Non-linear equations

## Non-linear equations

- Linear equations (first degree equation)
  - Algebraic equation in which each term is eather a constant or the product of a costant and **(the first power of) a single variable**
- **Non-linear equations**
  - Equations with exponents greater than one



## Roots of Non-linear equations

### Bracketing methods

#### Bisection

![img](https://raw.githubusercontent.com/nghminh163/USTH-B2/main/Numerical%20Method/assets/non-linear-bisection-1.png?token=AFZLYSZIXNLDBI6MYYNTF7DBGOH5K)

- The bisection method is a **root-finding method** that repeatedly bisects an **interval** and then selects a subinterval in which a root must lie for further processing
  - Very simple
  - Robust
  - Relatively slow

**Principle**

![](https://raw.githubusercontent.com/nghminh163/USTH-B2/main/Numerical%20Method/assets/non-linear-bisection-2.png?token=AFZLYS6Y4AZ6HVN64ZNVIRDBGOING)

A few steps of the bisection method applied over the starting range $[a_1 ; b_1]$​. The bigger **red dot** is the **root of the function**

- This is a **recursive algorithm** because a set of steps are **repeated** with the previous answer put in the next repetition
- Each repetition is called an iteration

**Steps**

A continuous function $f$​ , an interval $[a,b]$, and the function values $f(a)$ and $f(b)$. The function values are of **opposite sign** (There is at least one zero crossing with the interval)

1. **Calculate** the midpoint of the interval, $c = 0.5 \times (a+b)  $ 
2. **Calculate the function value** at the midpoint, $f(c)$
3. If **convergence** is satisfactory (that is, **a-c** is sufficiently small, or $f(c)$ is sufficiently small), return $c$ and stop iterating
4. Examine the sign of $f(c)$ and replace either $(a,f(a))$ or $(b,f(b))$ with $(c,f(c))$ so that there is a zero crossing within the new interval


# Numerical Method - Lecture 1 - introduction

## What is Numerical Method?

- Numerical Method is an approach for solving complex mathematical problem using only simple arthmetic operation
- The approach involves formulation of model of physical situation that can be solved with arithmetic operations
- Step involved
  - Forrmulation off mathematic model
  - Construction of an approriate numerical method
  - Implementation of the method to obtain a solution
  - Validation of the solution

### Mathematical model

![img](https://raw.githubusercontent.com/nghminh163/USTH-B2/main/Numerical%20Method/assets/mathematical-model.png?token=AFZLYSYJG4DYOBDSUWVVSITBGOASO)

### Analysis Method

![img](https://raw.githubusercontent.com/nghminh163/USTH-B2/main/Numerical%20Method/assets/analysis-method.png?token=AFZLYS3LACUOBYQQMS4MQQLBGOAXU)

### Characteristics of Numerial Methods

1. The solution procedure is **iterative**, with the **accuracy of the solution** improving with each iteration
2. The solution procedure provides only an **approximation** to the true, but unknow, solution
3. The algorithm is simple and can be easily programmed
4. The solution procedure may occasionally **diverge from rather than converge** to the true solution



## Approximations and Round-Off Errors

1. The numberial method involved an approximation -> **Error**
2. The avilability of an **analytical solution** allowed us to compute the **error exactly**
3. Many applied engineering problems, we **cannot** optain analytical solutions => **estimates of the errors**

## Significant figures

Significant figures (**significant digits**) of a number are digits in number that are reliable and absolutely necessary to indicate the quantity of something

Ex: 

- 0.00001845, 0.0001845, 0.001845 all have **four significant** figures
- Computers retain only a **finite number** of significant firgures -> round-off error. 12.34525kg -> 12.345kg

## Accuracy and Precision

- **Precision** prefers to how closely individual computed or measured values agree with each other
- **Accuracy** prefers to how closely a compluted or measured value agrees with the true value

*Explain*

- Với Precision sẽ thiên hướng về mật độ phân tán, ví dụ có cần đo 100 thanh sắt dài 100cm có kết quả 5 thanh đầu lần lượt là 107, 107.5 107.25, 107.2, 108 thì ta có thể gọi là High Precision -> Độ phân tán thấp và ở gần nhau (Không cần gần 100cm) -> Cần nhiều phép tính để kiểm chứng
- Với Accuracy là độ chính xác, tức là nếu 5 thanh đầu có giá trị là 99, 99.5, 99.8, 100, 101 thì gọi là High Accuracy -> Đòi hỏi gần với giá trị mốc

## Error definitions

1. **Truncation errors**: Which result when approximations are used to represent exact mathematical procedures
2. **Round-off errors**: Which result when numbers having limited significant figures are used to represent exact number

- Relationship between the exact, or true, result and the approximation
  $$
  \text{True value} = \text{Approximation} + \text{Error} => E_{t} = \text{true value} - \text{approximation}
  $$

- The relative error
  $$
  \text{True fractional relative error}=\frac{\text{true error}}{\text{true value}} 
  $$

  - With functions that **can be solved analytically**
    $$
    \varepsilon_{t} = \frac{\text{true error}}{\text{true value}}100\%
    $$

  - With functions that **cannot be solved analytically**

$$
\varepsilon_{a} = \frac{\text{approximate error}}{\text{approximation}}100\% = \frac{\text{current approximation - previous approximation}}{\text{current approximation}} => \text{The "true" error}
$$

$a$ signifies that the error is normalized to an approximate value. For such cases, the computation is **repeated until** $|\varepsilon_{a}| < \varepsilon_{s}$ -> **Prespecified precent toreance**


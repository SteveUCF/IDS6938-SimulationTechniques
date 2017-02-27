#Homework 1 : The Jello Cube (Continuous Simulation Assignment
## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)

#Stephen Jones

## Part 1: Numerical Analysis of Integration Functions (25 pts).

(a) - 2pts: Solve for the exact symbolic (analytical) solution.

| ![](images/HWPart1.PNG?raw=true) |

[WolframAlphaLink](https://www.wolframalpha.com/input/?i=dy+dx+%3D+y-(1%2F2)*+e+%5E(x%2F+2)+*+sin(5x)+%2B+5e+%5E(x%2F+2)+*+cos(5x))

(b)- 5pts: After step (a) you have the values for the df and exact functions. Translate the
mathematical formulas you now have into the df and exact functions.

(c)- 5pts: Run three numerical integration solutions: RK1, RK2, and RK4 to generate the numerical
and exact values. To start use h = 0.1, for x =< 0.0, 10.0 >. (Hint: this produces 100 values
for each solution.) Graph the results of RK1, RK2, and RK4 and the exact solution. (Use whatever
approach you like to graph this data: R, Python, Matlab, Excel - you should produce a graph with
4 curves.)

(d)- 5pts: Plot the error percentages for RK1, RK2, and RK4 in another graph. Remeber the
error is defined as : %error = jexact􀀀approxj
exact .

(e)- 5pts: Vary the step size h = n where you define three n values for x =< 0.0, 10.0 >.
Plot the results just for RK4 with 3 different n values (with the exact solution). Plot the error rate.

(f)- 3pts: Analyze you results: (1) Describe how varying the integration method changes the
accuracy. (2) What happens as you increase the x value to the accuracy. (3) How does varying
the step size effect the accuracy. (4) Which method is the most accurate and why (in particular
explain what is taken to account in the solution).
2

This is the framework for homework #1. Please first read the [homework writeup](HomeWork%231.pdf).

The assignment is due: Monday, February 27 at 11:59PM (EST)

| undeformed jello  | deformed jello |
| ------------- | ------------- |
| ![](images/undeformed3.png?raw=true)  | ![](images/deformed3.png?raw=true) |

 Markup : 1. A numbered list
           1. A nested numbered list
           2. Which is numbered!
          2. 


#Homework 1 : The Jello Cube (Continuous Simulation Assignment
## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)

#Stephen Jones

## Part 1: Numerical Analysis of Integration Functions (25 pts).

(a) - 2pts: Solve for the exact symbolic (analytical) solution.

return y - (1 / 2)*exp(x / 2)*sin(5 * x) + 5 * exp(x / 2)*cos(5 * x);

 ![](images/HWPart1.PNG?raw=true) 

[WolframAlphaLink](https://www.wolframalpha.com/input/?i=dy+dx+%3D+y-(1%2F2)*+e+%5E(x%2F+2)+*+sin(5x)+%2B+5e+%5E(x%2F+2)+*+cos(5x))

(b)- 5pts: After step (a) you have the values for the df and exact functions. Translate the
mathematical formulas you now have into the df and exact functions.

 ![](images/HW1-1b.PNG?raw=true) 

(c)- 5pts: Run three numerical integration solutions: RK1, RK2, and RK4 to generate the numerical
and exact values. To start use h = 0.1, for x =< 0.0, 10.0 >. (Hint: this produces 100 values
for each solution.) Graph the results of RK1, RK2, and RK4 and the exact solution. (Use whatever
approach you like to graph this data: R, Python, Matlab, Excel - you should produce a graph with
4 curves.)

 ![](images/HW1-1c.PNG?raw=true) 

(d)- 5pts: Plot the error percentages for RK1, RK2, and RK4 in another graph. Remeber the
error is defined as : %error = jexact􀀀approxj
exact .

 ![](images/HW1-1d.PNG?raw=true) 

(e)- 5pts: Vary the step size h = n where you define three n values for x =< 0.0, 10.0 >.
Plot the results just for RK4 with 3 different n values (with the exact solution). Plot the error rate.

#10
![](images/HW1-1e2.PNG?raw=true) 
#50
![](images/HW1-1e3.PNG?raw=true) 

![](images/HW1-1e3ii.PNG?raw=true)

(f)- 3pts: Analyze you results: 
(1) Describe how varying the integration method changes the accuracy. 
##By changing the integration method, this allows some integration methods to fit the slope of the exact function. 
(2) What happens as you increase the x value to the accuracy. 
##Since the approximations of the integration methods will tend to introduce error with higher x values, this will lead to inaccuracies. 
(3) How does varying the step size effect the accuracy. 
##Varying the step size allows more refined calculation. The refinement allows more accurate answers to more decimal places. 
(4) Which method is the most accurate and why (in particular explain what is taken to account in the solutiion.
##RK4 is by far the most accurate. The error rate is the lowest and fits the Exact function the best.RK4 provides more estimates of the slope and this provides greater accuracy.


##Part 2: Programming a Jello Cube
##2.1#
-Implement JelloMesh::EulerIntegration()

-Implement JelloMesh::MidpointIntegration()

-Implement JelloMesh::RK4Integration()

##2.2#
Particle forces other than gravity. 

-Implement spring forces in JelloMesh::ComputeForces(ParticleGrid& grid)

-Find good spring constants

##2.3
Collision and penetration detection. 

-Implement JelloMesh::CylinderCollision()

-Implement JelloMesh::FloorCollision()

##2.4
Collision and penetration response. 

Implement JelloMesh::ResolveContacts(ParticleGrid& grid)

Implement JelloMesh::ResolveCollisions(ParticleGrid& grid)

##2.5
Extra springs. 

##2.6
Implementing 2 features on the extra features list. 

[Jones_JelloCube- YOUTUBE VIDEO LINK](https://youtu.be/vr7S7ufglH8)

##Part 3: Written Questions
##3.1
What is the effect of the Ks and Kd parameters on the jello? 
##Ks and Kd parameters create the jiggle in the jello after collision.

##3.2
What are the benefits and the drawbacks of the collision system used here? What are some
different ways in which it could be improved? 
##Add a temperature element-- how hot or cold the temperature is can actually affect the jello cube in real life. Hotter temperature can liquify the jello, colder temperature can impact the consistency and collision. The simulation can take temperature into account.

##3.3
What are some example systems you could model with Mass-spring simulations? Explain
how you would you construct the model. 
##Mass Spring simulations could help to simulate tires of an airplane touching the ground on landing. The rotating tires have compression when they hit the ground. Simulation can help understand airpressure, how large/small the tire needs to be, lifetime of the rubber, etc. I would construct the tire with motion and velocity. 

##3.4
Does the jello behave realistically? What integration method did you choose to make the
Jello stable? 
##Yes, the jello cube behaves realistically. I used RK4.

##3.5
How would you model and simulate water (in terms of a continuous simulation)?
##I would use jello spheres. I would make lots of them and make them relatively very small. I would adjust the collision so that there would be slight bounciness and this response would act as a way to stick to each other. 

##Part 4: Final Report





##Extra Features
![](images/MightyMouseJelloCube.PNG?raw=true)

##'MightyMouse' Storyboard:
At some point, it would be a nice exercise to implement this 'MightyMouse' storyboard into Jello Cube.
Mighty Mouse comes to save the day. He grabs the plate and attempts to catch the falling jello cube. But he is coming in way too fast... and as the plate connects with the 'springy' jello, the jello launches off the plate.
##Jello Cube Game:
Support user generated forces. The user can drag the plate around and attempt to catch the jello. The interaction and angle of the plate along with the spring of the jello can be a fun exercise for catching the jello!





================================================================================================================



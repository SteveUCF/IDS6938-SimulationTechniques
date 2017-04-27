# Stephen Jones

I am turning in April 26( i had 1 remaining late day + 1 day from Dr. Kider extension).

Homework 3 : Agent based Simulation Assignment
IDS6938-Simulation Techniques - University of Central Florida
University of Central Florida This is the framework for homework #3.
The assignment is due: Monday, April 24 at 11:59PM (EST)
Introduction
The goal of this assignment is to enable the behavioral animation of vehicle-like walking agents.
You will be expected to compose a final report which demonstrates your understanding on the material in each section of the assignment. Be visual! - Pictures say a thousand words so you do not have to. Show off your different configurations and really explore the assignment.
Part 1: Behaviors
The goal of this assignment is to enable the steering behavioral animation of agents.
We represent an agent as a two-dimensional disk with mass (m) and moment-of-inertia (I) that is capable of generating a force F along body x-axis with a torque about the z-axis. For this assignment assume that the agent only translates in the world x-y plane and rotates about the body z-axis.

# I compiled PART1 and posted the following video to demonstrate Agent Behaviors of Part1: https://www.youtube.com/watch?v=PFKxyfgeNC4

(a) - 10 points : Compute derivative vector given input and state vectors. Implement the function SIMAgent::FindDeriv(). This function sets derive vector to appropriate values after being called.
Description of agent state vector and input vector:
state[0] is the position of the agent in local body coordinates (almost useless in this project);
state[1] is the orientation angle of the agent with respect to world (i.e. global) coordinates;
state[2] is the velocity of the agent in local body coordinates.
state[3] is the angular velocity of the agent in world coordinates.
input[0] is the force in local body coordinates;
input[1] is the torque in local body coordinates
You will need to set deriv[0], deriv[1], deriv[2], deriv[3]. Compute derivative vector given input and state vectors. This function sets derive vector to appropriate values after being called.
deriv[0] is the velocity of the agent in local body coordinates
deriv[1] is the angular velocity of the agent in world coordinates
deriv[2] is the force in local body coordinates divided by the mass.
deriv[3] is the torque in local body coordinates divided by the inertia.
You also must implement SIMAgent::InitValues(): Try to figure out appropriate values for control and behavior settings. You need to find out appropriate values for: SIMAgent::Kv0, SIMAgent::Kp1, SIMAgent::Kv1, SIMAgent::KArrival, SIMAgent::KDeparture, SIMAgent::KNoise, SIMAgent::KWander, SIMAgent::KAvoid, SIMAgent::TAvoid, SIMAgent::RNeighborhood, SIMAgent::KSeparate, SIMAgent::KAlign, SIMAgent::KCohesion.
(b) - 20 points: In this part of the assignment you will need to implement 6 types of individual behaviors and 5 types of group behaviors. Create the following behaviors through appropriate computation of V d and θd commands:
Seek
Flee
Arrival
Departure
Wander
Obstacle Avoidance
(c) - 20 points: Implement the functions for the following group behaviors:
Seperation
Cohesion
Alignment
Flocking
Leader Following
Part 2 - Simulating a simple pedestrian flow
The goal of this part of the assigment is to simulate the pedestrain flow for various configurations. Pedestrian traffic simulation is an important, sometimes required, stage for certain construction projects such as shopping centers, airports, railway stations, or stadiums. hese analyses can be used by architects in the design stage, by facilities owners contemplating changes, by city planners to evaluate rush hours, or even by civil authorities to simulate evacuations or other emergencies.

(a) - 0 points: Follow the Anylogic example for the Subway Entrance example. Create the appropriate boundaries and walls, and the display ther pedestrian density map, statistics, 2D and 3D animations.

(b) - 20 points: Create a maze. Generate the pdm, stats, and animations like before. Vary parameters in your agents to give them different behaviors and show the pedistrians change how they navigate the maze.

# I created a maze and took a video of my maze: https://www.youtube.com/watch?v=L845oAtzaKw



(c) - 30 points: Model and analyze a building (or floor/outdoor space/stadium) on campus. (There is help on piazza how to find rough building plans - we expect something plausible). Create a senario: evacuation, daily office routine, special event, normal egress.... etc., and model and design your own experiment to determine if the building design suits the needs of its users. Start with photographs of your site, describe your site, describe your senario and hypothesis. Then use an agent-based pedistrian simulation to visualize your experiment's results.

https://library.ucf.edu/news/category/all-libraries/john-c-hitt-library/21st-century-library/page/2/

# Can UCF Remodeled Main Campus Library support a second Coffee shop?
I will build a simulation to study the effect from a business usage perspective.

UCF’s John C. Hitt main campus library is in the midst of a major overhaul and is building the 21st century library1. Phase I construction is underway to build a new Automated Retrieval System (ARC). This new system allows books which were previously stored on shelves in the library to be housed in a warehouse-like building where robotic arms will retrieve and stow books. With the shelving removed, there are plans to create a digital commons area on the 4th floor and quiet study area on the 5th floor2. These will likely double the capacity of library patrons. I believe that this important upgrade presents an opportunity for creating a space that encourages stay and study at the library. The purpose of my project is to study the effects of adding a second coffee shop on the 4th floor. In discussion with a supervisor at the circulation desk, this does not appear to be in the plans at this point- Hopefully this study can encourage further exploration to build a new coffee shop as part of the long term plans. 

Howard Schultz, founder of Starbucks, has laid claim to Starbucks being the third place between ‘Home’ and ‘Work’3. This idea allows for the consumer to establish a third pillar of movement within their daily and weekly interactions. I recommend that UCF’s John C. Hitt main campus library become the third place for all UCF students to go to between ‘Home’ and ‘Class’. This concept allows UCF main library to be a main hub of activity for technology connected students that need a place on campus to study and connect to technology. A coffee shop environment creates a warm, inviting space to stay and study.

There is currently one coffee shop on the 2nd floor near the entrance. Can this single coffee shop serve the library needs in the future? I will build a simulation to determine if the current coffee shop can support additional customers by using data gathered, assumptions applied and research from interviews.
 
 # Data Elements

For purposes of this assignment, I will evaluate the library patron activity at Mid-Semester. Future research can study the effects of cycles within the semester calendar. For example, library is closed for spring break; Mid-term and Finals time period likely have peak activity in the library. I do not have access to real data, so I sought to build a simulation that starts with a few data points and layering base assumptions to evaluate whether or not the new refurbished library can support a new coffee shop on the 4th floor.

According to facts of library, all UCF libraries service 46,000 patrons in a typical mid-semester week4. I found that the UCF main campus library holds 1,291,409 volumes while all other libraries in the UCF system hold 235,040 volumes5.  Since UCF main campus library holds 84.6% of all volumes at UCF, I am using this number to assume patron activity at UCF main campus library which equates to 38,917 patrons serviced in a given week at UCF main campus library. 

The UCF library is opened 104.5 hours per week6. 39,100 patrons divided by 104.5 hours is equal to 372 patrons per hour.

I interviewed a supervisor at JavaCity(main campus library coffee shop located on 1st floor) and she provided rough estimates that her coffee shop services approximately 500-700 customers per day. I will assume 600 for purposes of this study. This equates to be 40 customers per hour(600 customers/14.92 hours). 40 customers per hour divided by 372 total main campus library patrons is 10.8%. I will use this 10.8% in my probability estimate in the simulation model. 

Current capacity at UCF library is limited to 2000 patrons. This is likely due to fire-code and seating availability. There is only one main entrance. The remodeled library will have a new main entrance near the student union, and there are improvements being made to the sprinkler system. According to the ARC website, the library will have 3264 seats in a digital commons location- this alone is more than the 2000 patron capacity that currently exists. I will assume that the new library will be able to accommodate double the current patron capacity of 2000 to 4000 patrons. 

Each seat in the digital commons will have access to power outlet. With access to beverages and light snacks on the 4th floor, a student will be equipped to hold an uninterrupted study session. UCF students will be encouraged via the architecture and design to stay on campus and study. UCF main library will be a central hub of technology connected students who can stay and study. 

# Simulation1

I built a simulation with the following attributes:
370 patrons enter the library per hour.
11% go to JavaCity
4% go to Circulation Desk
35% go to computer station to study
10% go to bathroom
40% go to Elevators which represent going to different areas of the library.
I then built a circulation where 33% cycle through 
33% go back to above 
67% leave

When running this simulation, I found that JavaCity can support 35 patrons per hour on average. There are 17 customers that were still held in the queue.

I created a video of the simulation: https://www.youtube.com/watch?v=zeVivzMuyFk
 
# Simulation2 

To test whether or not the current coffee shop can accommodate the increased patron activity, I will increase the hourly library patron activity from 370 to 740 and keep the 10.8% probability for the coffee shop. 
 
I created a video of this second simulation: https://www.youtube.com/watch?v=v5Rta0tiO_E

As seen in this video, JavaCity has a very difficult time accomodating the customer demand if library patrons are doubled but JavaCity maintains its 600 per day customer service.
 
In one hour of simulation, JavaCity had 102 customers but only serviced 37. This falls well short of the needs of the customers. Further study can be investigated on whether the demand from the nonserviced customers can support additional staff at current JavaCity location, or whether or not an investment can be made to build a new coffee shop on the 4th floor. In addition, I analyzed the Menu at Javacity and built a framework which determined the average priced sold good to be $3.05 vs the real average of all menu items is $3.67. I did ask the supervisor and cash register attendant if $3.00 per customer was realistic and she agreed. This information can be plugged into a strategic financial decision making capital budgeting exercise to determine the viability of the investment given the costs, overhead and profit goals.

I believe that by using advanced analytics and simulation, we can evaluate the strategic decision to further explore adding a second coffee shop to the UCF library. 

# References
1.	UCF Library: (http://library.ucf.edu/21st/)
2.	UCF Library: https://library.ucf.edu/news/category/all-libraries/john-c-hitt-library/21st-century-library/page/2/
3.	Starbuckshttps://www.starbucks.co.uk/about-us/our-heritage
4.	http://library.ucf.edu/about/departments/administration/facts-figures/administrationfacts-about-the-libraries/
5.	http://library.ucf.edu/about/departments/administration/facts-figures/statistical-summary/
6.	library hours http://stars.library.ucf.edu/cgi/viewcontent.cgi?article=1070&context=lib-docs


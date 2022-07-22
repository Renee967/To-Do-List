# To-Do-List

Write a program to help a user automate their to-do list. The program should do the following:
Show the user the different actions they can perform on the list (add, remove tasks, display task...).
Allow the user to select one of the actions.
Execute that action
The to-do list will be read from the file:
 
Name of the task                      Due date (mm dd yyyy)         Priority
Learn_basic_Python                        12 12 2021                             3
Implement_a_snake_game            04 01 2021                             1
Clean_up_my_room                        01 10 2021                             2
Build_my_resume                           12 12 2021                              3
Study_for_the_exam                       03 05 2021                              1
Learn_how_to_juggle                      05 06 2022                              3
Create_a_website_using_React     12 07 2021                              2
Have_a_tea_and_self-reflect          03 01 2021                              2
 
Modify the existing code. Use an array, tasks, of the struct Task, with three components: name of the type string or character array, dueDay, dueMonth, dueYear of type int, isCompleted of type bool, and priority of type int. Your program must contain at least the following functions:
(30 points) Function getData: This function loads the data from a file named tasks.txt with the above items into the array tasks.
Function viewTasks: This function shows the list of all to-do items with due date and status.
(20 points) Function addTasks: This function will add one new task to the to-do list. If no more space displays a message “No more space”.
(20 points) Function completeTask: This function will mark the chosen task as completed.
(10 points) Function removeTask: This function will remove one task from the list. ( extra credit )
(10 points) Function modifyTasks: This function will modify a selected task. (extra credit)
(30 points) Function taskSummary: This function displays the number of tasks in the to-do list and the percentage of tasks completed
 
taskSummary() Sample output:
 
Summary of Johnny’s To-Do List
Total number of tasks                8
Percentage completed               25%
 

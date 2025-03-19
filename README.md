# Scanerio-Based-Link-List
Explanation of the Task Management System Code
This C++ program implements a Task Management System using a Linked List. Each task has:

An importance percentage (data)
A task description (task)
A pointer (next) to the next task in the list.
Working of the Code
1. struct Node (Creating a Task Node)
Each node represents a task with:

data → Importance percentage (e.g., 80% priority)
task → Task description (e.g., "Complete project")
next → Pointer to the next task
2. class LinkList (Managing the Tasks)
The Linked List stores tasks in order of priority. The class contains:

a) fronter(int d, string t) (Add Highest Priority Task)
Adds the task at the beginning of the list.
Used for the most important tasks.
b) tail(int d, string t) (Add Lowest Priority Task)
Adds the task at the end of the list.
Used for least important tasks.
c) mid(int d, string t, int found) (Insert Task at Custom Position)
Finds a task with a given found priority.
Inserts the new task after it.
d) display() (Show All Tasks)
Prints all tasks in order.
e) del(int target) (Delete a Task)
Removes a task with a given target importance percentage.
3. main() (Menu for User)
The user interacts with the menu-driven system:

Add a new task (High / Low priority or in-between)
View all tasks
Delete a task
Continue or Exit
Working of do-while Loop in Menu
The menu runs continuously until the user chooses to exit.
system("cls"); clears the screen for a clean interface.
The do-while loops allow multiple entries before returning to the menu.
Example Run
User Flow
User selects 'A' → Adds a high-priority task (e.g., 80%: "Submit Report").
User selects 'B' → Adds a low-priority task (e.g., 30%: "Buy groceries").
User selects 'C' → Inserts a task after a given priority (e.g., after 50%).
User selects 'D' → Displays all tasks in order.
User selects 'E' → Deletes a task (e.g., remove 30%).
User decides to exit.
Conclusion
The program prioritizes tasks using a linked list.
User-friendly with menu options.
Tasks are added, removed, and displayed efficiently.

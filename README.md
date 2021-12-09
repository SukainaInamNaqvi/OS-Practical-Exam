# OS-Practical-Exam
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
# Name- SUKAINA INAM NAQVI
# Examination Roll Number- 20020570033 
# Semester -III
# Subject- Operating System Practical Exam
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
There are two Questions in this. The Questions are:- 
Q1. implement Round Robin scheduling algorith with Quanta 3. Compute waitng time, turnaround time. 
Q2. Write a program to demonstrate fork where parent and child run same codes and parent process should be executed first. 
# ~~~~~~~~~~First question description:-  ~~~~~~~~~~~ 
A round-robin scheduling algorithm is used to schedule the process fairly for each job a time slot or quantum and the interrupting the job if it is not completed by then the job come after the other job which is arrived in the quantum time that makes these scheduling fairly. 
Round Robin Algorithm: The CPU scheduler travels the ready queue, allocates the CPU to each process for a time interval of up to 1-time quantum, the process is preempted and the next process in the queue is allocated the CPU.
If the process has a CPU burst of less than 1-time quantum then the process releases the CPU and the scheduler selects the next process in the ready queue. 
If the CPU burst of the currently running process is longer than 1-time quantum, the timer will go off and will cause an interrupt to the operating system. A context switch will be executed, and the process will be put at the tail of the ready queue.
The CPU scheduler will then select the next process in the ready queue. 
Quantum time is 3 this means each process is only executing for 3 units of time at a time. 
Completion Time: the time taken for a process to complete.
Turn Around Time: total time the process exists in the system. (completion time – arrival time).
Waiting Time: total time waiting for their complete execution. (turn around time – burst time ). 
# ~~~~~~~~~~~Second Question Description:-~~~~~~~~~ 
Fork system call is used for creating a new process, which is called child process, which runs concurrently with the process that makes the fork() call (parent process).
After a new child process is created, both processes will execute the next instruction following the fork() system call.
A child process uses the same pc(program counter), same CPU registers, same open files which use in the parent process. 
It takes no parameters and returns an integer value. Below are different values returned by fork().

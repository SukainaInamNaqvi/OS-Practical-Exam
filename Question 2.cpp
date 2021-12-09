#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h>
#include <iostream>
#include<sys/wait.h>
using namespace std;

int main()
{
		cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~OPERATING SYSTEM PRACTICAL~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
		cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~   QUESTION 2~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
		cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~   SET 3~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		cout<<endl<<"This is a child process : "<<endl;
		cout<<"Working directory is :  "<<endl;
		execlp("pwd" , "pwd" , NULL);
		cout<<endl;
		
	}
	
	else
	{	
		wait(NULL);
		cout<<endl<<"Parent Process : "<<endl;
		cout<<"Files in working directory are : "<<endl;
		cout<<("ls" , "ls" , NULL);
		cout<<endl;
		
		
	}

	return 0;
}




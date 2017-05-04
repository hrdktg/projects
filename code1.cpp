#include <stdio.h>
#include <conio.h>

int main() { 
clrscr();

char name[20];
char question[][300]={
//Q1
"First operating system designed using C programming language.\
\n1 - DOS\n2 - Windows\n3 - UNIX\n4 - Mac\n",
//Q2
"What do you mean by “int (*ptr)[10] \
\n1 - ptr is an array of pointers to 10 integers\n2 - ptr is a pointer to an array of 10 integers\n3 - ptr is an array of 10 integers\n4 - Invalid statement\n",
//Q3
"Which of the following variable declarations and definitions in C is wrong.\
\n1) int var_9 = 1;\n2) int 9_var = 2;\n3) int _ = 3;\n4)None of the above\n",
//Q4
"Which of the following cannot be static in C? \
\n1) Variables\n2) Functions\n3) Structures\n4) None of the mentioned\n",
//Q5
"What is the output of this C code?\n \
\nstruct student\n{  };\nint main()\n{\n    struct student s;\n   printf(\"%d\", sizeof(s));\n}\n \
\n1) 1\n2) 0\n3) Compilation Error\n4) Runtime Error\n",
//Q6
"What is the output of this C code? \
\n    int main(){\n    int a=10;\n    switch(0)\n    printf(\"%d\",a);\n    switch(1)\n    printf(\"%d\",a);\n    return 0;\n}\n\
1) 10 10\n2) 10\n3) Compilation Error\n4) No output\n\n",
//Q7
"Output?\nint main()\n{\nprintf(\"%d\", max);\n}\n#define max 23\n\n\
1) 23\n2) 0\n3) Compilation Error\n4) Runtime Error\n\n",
//Q8
"Predict the output of the following C snippets\n\nint main()\n{\n	int main = 56;\n	printf(\"%d\", main);\n	return 0;\n}\n\n\
1) Compiler Error\n2) Depends on the compiler\n3) 56\n4) none of above\n\n",
//Q9
"What is the output of the below c code?\n\n#include<stdio.h>\nint main()\n{\n    char ch;\n    if(ch = printf(""))\n        printf(\"It matters\n"");\n    else\n        printf(\"It doesn't matters\n\");\n    return 0;\n}\n\n\
1) It matters\n2) It doesn’t matters\n3) Run time error\n4) Nothing\n\n",
//Q10
"Which of the following is not a standard C Library?\n1) errno.h\n2) setjmp.h\n3) signal.h\n4) retarg.h\n\n"

};

int answer[10]={3,1,2,4,2,4,1,3,2,4};

int score=0;
int choice;

printf("WELCOME TO EQUIZ!!\n");
printf("10 Questions will be displayed and you will have to choose one out of the four options given.\n");
printf("If the answer is correct you get +5 in your score else -1 is deducted from your score.\n\n");

printf("Please Enter your name: ");
scanf("%s",name); 

for(int x=0;x<10;x++) {
	printf("Q%d) %s\n",x+1,question[x]);
	scanf("%d",&choice);

	if(choice==answer[x]) {
		printf("Correct Answer!! Current Score:%d\n",score);
		score=score+5; 
	}
	else 
	{
		printf("Wrong Answer!! Current Score:%d\n",score);
		score=score-1;
	}

	printf("==================================\n");
}	

printf(" Your score is:\n");
printf("%d/50\n",score);



return 0;
}

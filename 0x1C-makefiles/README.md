# 0x1C. C - Makefiles
## Details
      By Julien Barbier          Weight: 1                Ongoing project - started Jul 18, 2022 , must end by Jul 19, 2022           - you're done with 0% of tasks.              Checker will be released at Jul 18, 2022 12:00 PM        An auto review will be launched at the deadline       ![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif) 


## Resources
Read or watch :
* [Makefile](https://intranet.hbtn.io/rltoken/E3lCL-6xT3Qt_K38Tk4s_g) 

## Learning Objectives
At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/TLlv9-qHJmXlUDbraWBW-g) 
 ,  without the help of Google :
### General
* What are  ` make ` , Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them
## Requirements
### General
* Allowed editors:  ` vi ` ,  ` vim ` ,  ` emacs ` 
* OS: Ubuntu 20.04 LTS
* Version of  ` gcc ` : 9.3.0
* Version of  ` make ` : GNU Make 4.2.1
* All your files should end with a new line
* A  ` README.md `  file, at the root of the folder of the project, is mandatory
## More Info
### Files
In the following tasks, we are going to use  [these files](https://github.com/holbertonschool/0x1B.c) 
 . We want to compile these only.
## Tasks
### 0. make -f 0-Makefile
          mandatory         Progress vs Score  Task Body Create your first Makefile.
Requirements:
* name of the executable:  ` school ` 
* rules:  ` all ` * The  ` all `  rule builds your executable

* variables: none
```bash
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x1C-makefiles ` 
* File:  ` 0-Makefile ` 
 Self-paced manual review  Panel footer - Controls 
### 1. make -f 1-Makefile
          mandatory         Progress vs Score  Task Body Requirements:
* name of the executable:  ` school ` 
* rules:  ` all ` * The  ` all `  rule builds your executable

* variables:  ` CC ` ,  ` SRC ` *  ` CC ` : the compiler to be used
*  ` SRC ` : the  ` .c `  files

```bash
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x1C-makefiles ` 
* File:  ` 1-Makefile ` 
 Self-paced manual review  Panel footer - Controls 
### 2. make -f 2-Makefile
          mandatory         Progress vs Score  Task Body Create your first useful Makefile.
Requirements:
* name of the executable:  ` school ` 
* rules:  ` all ` * The  ` all `  rule builds your executable

* variables:  ` CC ` ,  ` SRC ` ,  ` OBJ ` ,  ` NAME ` *  ` CC ` : the compiler to be used
*  ` SRC ` : the  ` .c `  files
*  ` OBJ ` : the  ` .o `  files
*  ` NAME ` : the name of the executable

* The  ` all `  rule should recompile only the updated source files
* You are not allowed to have a list of all the  ` .o `  files
```bash
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ echo "/* School */" >> main.c
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x1C-makefiles ` 
* File:  ` 2-Makefile ` 
 Self-paced manual review  Panel footer - Controls 
### 3. make -f 3-Makefile
          mandatory         Progress vs Score  Task Body Requirements:
* name of the executable:  ` school ` 
* rules:  ` all ` ,  ` clean ` ,  ` oclean ` ,  ` fclean ` ,  ` re ` *  ` all ` : builds your executable
*  ` clean ` : deletes all Emacs and Vim temporary files along with the executable
*  ` oclean ` : deletes the object files
*  ` fclean ` : deletes all Emacs and Vim temporary files, the executable, and the object files
*  ` re ` : forces recompilation of all source files

* variables:  ` CC ` ,  ` SRC ` ,  ` OBJ ` ,  ` NAME ` ,  ` RM ` *  ` CC ` : the compiler to be used
*  ` SRC ` : the  ` .c `  files
*  ` OBJ ` : the  ` .o `  files
*  ` NAME ` : the name of the executable
*  ` RM ` : the program to delete files

* The  ` all `  rule should recompile only the updated source files
* The  ` clean ` ,  ` oclean ` ,  ` fclean ` ,  ` re `  rules should never fail
* You are not allowed to have a list of all the  ` .o `  files
```bash
julien@ubuntu:~//0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x1C-makefiles ` 
* File:  ` 3-Makefile ` 
 Self-paced manual review  Panel footer - Controls 
### 4. A complete Makefile
          mandatory         Progress vs Score  Task Body Requirements:
* name of the executable:  ` school ` 
* rules:  ` all ` ,  ` clean ` ,  ` fclean ` ,  ` oclean ` ,  ` re ` *  ` all ` : builds your executable
*  ` clean ` : deletes all Emacs and Vim temporary files along with the executable
*  ` oclean ` : deletes the object files
*  ` fclean ` : deletes all Emacs and Vim temporary files, the executable, and the object files
*  ` re ` : forces recompilation of all source files

* variables:  ` CC ` ,  ` SRC ` ,  ` OBJ ` ,  ` NAME ` ,  ` RM ` ,  ` CFLAGS ` *  ` CC ` : the compiler to be used
*  ` SRC ` : the  ` .c `  files
*  ` OBJ ` : the  ` .o `  files
*  ` NAME ` : the name of the executable
*  ` RM ` : the program to delete files
*  ` CFLAGS ` : your favorite compiler flags:  ` -Wall -Werror -Wextra -pedantic ` 

* The  ` all `  rule should recompile only the updated source files
* The   ` clean `  ,   ` oclean `  ,   ` fclean `  ,   ` re `   rules should never fail

* You are not allowed to have a list of all the   ` .o `   files

```bash
julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 

```
 Task URLs  Github information Repo:
* GitHub repository:  ` holbertonschool-low_level_programming ` 
* Directory:  ` 0x1C-makefiles ` 
* File:  ` 4-Makefile ` 
 Self-paced manual review  Panel footer - Controls 
[Done with the mandatory tasks? Unlock 1 advanced task now!](https://intranet.hbtn.io/projects/273/unlock_optionals) 

×#### Recommended Sandbox
[Running only]() 
### 1 image(1/5 Sandboxes spawned)
### Ubuntu 20.04
Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Holberton Foundations
SSHSFTP[Webterm](https://intranet.hbtn.io/user_containers/20136/webterm) 
[Restart]() 
[Destroy]() 
#### Credentials
Hostd0e3df2a9605.382951ab.hbtn-cod.ioUsernamed0e3df2a9605Passwordbec8653482c2d48c9d21#### Web access
[HTTPS](https://d0e3df2a9605.382951ab.hbtn-cod.io/) 
[HTTP](http://d0e3df2a9605.382951ab.hbtn-cod.io/) 
[3000](http://d0e3df2a9605.382951ab.hbtn-cod.io:3000/) 
[4000](http://d0e3df2a9605.382951ab.hbtn-cod.io:4000/) 
[5000](http://d0e3df2a9605.382951ab.hbtn-cod.io:5000/) 
[5001](http://d0e3df2a9605.382951ab.hbtn-cod.io:5001/) 
[8000](http://d0e3df2a9605.382951ab.hbtn-cod.io:8000/) 
[8080](http://d0e3df2a9605.382951ab.hbtn-cod.io:8080/) 
#### Port mapping
SSH49162HTTP49161HTTPS49160300049159MySQL49158400049157500049156500149155800049154808049153
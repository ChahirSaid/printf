<h1>0x11. C - printf</h><br><h3></h3>
<h4>0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life</h4><br>
<h4>1. Education is when you read the fine print. Experience is what you get if you don't</h4><br>
<h4>2. With a face like mine, I do better in print</h4><br>
<h4>3. What one has not experienced, one will never understand in print</h4><br>
<h3>Compilation</h4>
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
<h1>Written by Said and Othmane <h1>

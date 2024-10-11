This project is a C++ menu-driven program with four functionalities:

How the Program Works:
1. Split Program:

Function: The user enters a string and delimiter characters. The program splits the input string based on the delimiter and returns a list of the split substrings.
Logic : The split() function looks for a separator character in the input string and adds the substring preceding the separator character to the result vector. This process is repeated until the entire string is processed.
Binary numbers and digits printing program:

Steps for program 1:
Select Option 1 from the menu.
Enter the string you want to split.
Enter the delimiter.
The program will display the split parts of the string.

2. Binary Number and Printing Numbers Program:

Function: This program has two options:
1. One Binary Number : Convertnon-negative decimalnumberstobinarynumbers.
2. Printing Many Numbers:Generate anddisplayall possible binary numbers of length ,appendedtothegiven prefix.
Logic:
For binaryconversions, the program repeatedly divides the number bytwoand stores the remainder, effectivelyconstructingabinary string.
Whenprinting numbers,thisfunction uses recursion to generate all possible0and1combinationsfor a given length.

Steps for program 2:
Select Option 2 from the menu.
Choose 1 to convert a decimal number to binary or 2 to generate multiple binary numbers.
Follow the prompts to input the necessary numbers or prefixes.

3. Bears Program:

FunctionThe program checkswhethera given number of bears can be reduced to exactly 42 bearsaccordingto aspecificrule(i.e., divide by 2, subtract based onaproduct of digits, or subtract 42).
Logic:
Thisfunction is a recursive function that applies the defined rules. Ifexactly42isreached, it returns trueindicating success. Otherwise, itrecursivelytries different rulesuntil a solution is found or all options are exhausted.

Steps for program 3:
Select Option 3 from the menu.
Enter the number of bears.
The program will tell you if the number can be reduced to 42 or not.

4. Email Phishing Detection Program:

FunctionThis program analyzes a given email text file and detects phishing attempts based on common phishing termssuchas “login”,“password”,etc. Each term is associated with a certain number of“phishing points”.
Logic:
The program usesunordered_map,withcommon phishing termsmapped to their point values. It reads the email line by line, convertingto lowercase for case-insensitive matching. For each line,theoccurrenceof these termsischeckedandpointsare accumulatedbased ontheirfrequencyofoccurrence.
If the totalnumber ofphishing pointsexceeds10, the email is classified as SPAM; otherwise, itisclassified as NOT SPAM.

Steps for prgram 4:
before run program 4 copy your txt file to cmake-build-debug to detect the file
Select Option 4 from the menu.
Enter the name of the email text file (e.g., email.txt).
The program will display the occurrences of each phishing term and calculate the total phishing points.
If the total exceeds 10, the email is classified as SPAM. Otherwise, it is considered NOT SPAM.

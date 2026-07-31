# cpp_module_00

### Clarifications and general tips:
* If you find any kind of error or you have suggestions to improve, please do not hesitate to point them out in the 'issues' section! Obviously always respectfully, thank you :D.
* All the executable files that this project creates have been selected by me. For your own project, you can use whatever names you prefer to create your files, always keeping the subject in mind.
* This module is your first contact with **Object-Oriented Programming** in C++. The goal is not only to make the exercises work, but also to become familiar with the C++ way of thinking.

## ex00: Megaphone

### Mandatory requirements:
* Create a program called **megaphone**.
* The program must print the arguments recieved but in *uppercase*, it does´nt have to be between *brackets* to be valid. The final output must include puntuation marks, numbers and other symbols if they are included in the arguments.
* Is necessary to follow this rule even if there are more than one argument in brackets (for more than one argument, the brackets are necessary).
* If no arguments are received, the program must print:
```
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```
* Every output must end with a newline.

### What can we learn about this exercise?

This exercise serves as an introduction to the basis of C++. It teachs yot how `std::cout` replaces `printf`, how to use functions from the C++ standard library and how to manipulate characters using functions such as `std::toupper()`. And also theachs you about compiling a C++ project using the required flags.

### Output example:
#### The example output doesn't have to be exactly like the subject example.
![Example](images/ex00-output.png)

---

## ex01: My Awesome PhoneBook

### Mandatory requirements:
* First you need to implement the class **PhoneBook**.
   * It has an array of contacts.
   * The maximun number of contacts that can store is 8, if a 9th contact is added it must replace the oldest one by the new one.
   * Dynamic allocation is forbidden
* Then you need to implement the class **Contact**. (The Phonebook class must include attributes whose data types is Conctact class).
   * It works as a phonebook contact. It must include the following data:
     * First name.
     * Last name.
     * Nickname.
     * Phone number.
     * Darkest secret.

The program at start is empty, but then it must *continuously* wait for the user to enter one of the following commands:

* `ADD`
   * Ask the user for the data fields that define the `Contact` class, one field at a time. Once all fields have been completed, the program must add the contact to the phonebook.
   * Empty fields are not allowed.


* `SEARCH`
   * Display every stored contact as a table containing 4 columns:
       * Index.
       * First name.
       * Last name.
       * Nickname.
   * Every column must have a width of **10** characters and be right aligned. The columns are separated by a pipe character ('|')
   * If a field is longer than 10 characters you must truncate it and replace the last visible character with a `.`
   * After the table, the program must display a promt for the user to enter an index of a conctad to show. If it is out of range or wrong, it must respond with a proper behavior (Error sing). Otherwise display the contact information, one field per line.
   * The subject expects you to use **iomanip** to format the table.

* `EXIT`
   * It must close the program so all contacts are lost.

### What can we learn about this exercise?

This exercise is your first real introduction to classes.

You will learn:

* How to split a project into multiple files.
* How classes encapsulate data.
* Public vs private members.
* Objects living inside other objects.
* Arrays of objects.
* Input validation.
* Formatting output using `std::setw()`.
* Basic user interaction through the terminal.

This exercise also encourages writing clean code by separating responsibilities between the `PhoneBook` and `Contact` classes.

### Output example

#### The example output doesn't have to be exactly like the subject example.

![Example](images/ex01-output.png)

---

# Overloading-Operators

Programming Application: Library Book Collection Manager
A university library is building a small software tool to help manage sets of books that belong to different sections of the library. Each section keeps track of a fixed number of book copies for a small group of titles.
Your task is to design a C++ program using classes and operator overloading to model this situation.
Problem Description
Create a class named BookCollection that stores the number of copies available for exactly 4 different book titles using a built-in array.
Each BookCollection object represents one section of the library. For example:
Section A may store: [3, 5, 2, 4]
Section B may store: [1, 2, 6, 3]
These values represent the number of copies of the 4 books in each section.
Program Requirements
Your program must include the following:
1. Class Design
Create a class named BookCollection that contains:
a built-in array of size 4 to store the number of books
a constructor to initialize the array
any additional member functions needed
2. Overload the + Operator
Overload the + operator so that two BookCollection objects can be added together.
The result should be a new BookCollection object where each position contains the sum of the corresponding values from the two collections.
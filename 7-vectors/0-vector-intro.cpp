/* 
- What is vector? an array or a list.
- List of what? int, double, string, boolean.
- Example: 
    1)
    vector<int> grades = {12, 15, 19, 16, 15, 20};
    this is a list (vector) of int numbers.
    this notation: "= {12, 15}" is used for initialization
    2)
    vector<double> location(2);
    the "(2)" means the size of vector is going to be 2
    location[0] = 2.3;
    location[1] = 3.5; 
    cin >> location[1];
- To use vectors we need to 
    #include<vector> 
    using namespace std; 
- Why do we need vectors? 
    Let's say you are to write a program to receive names of all
    students in a class. Then later you are going to be give 
    individual names to check if they are member of that class
    or not. Where would you keep list of names to search them
    in the futre. 
- Basic operations: 
    push_back: adds an element to the end of the vector.
    pop_back: removes an element from the end of the vector. 
    size: returns size of the vector
*/
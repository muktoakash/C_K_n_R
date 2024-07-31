/* Interface for push_pop.c*/

// HEADER GUARDS
#ifndef PUSH_POP_H
    #define PUSH_POP_H

    /* push(f)
    
    Pushes f onto value stack.
    Requires: f is a double.
    Side effects: Modifies value stack.
    */
    void push(double f);

    /* pop()
    
    Pops and returns top value from stack.
    Requires: Stack is not empty.
    Side effects: Modifies value stack.
    */
    double pop(void);

#endif
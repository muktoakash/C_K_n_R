// ./echo_p.h

/* interface for echo_p.c */

#ifndef ECHO_P_H
    #define ECHO_P_H

    /* echo_p1(argc, argv)
    
    echo command-line arguments; first version.
    Requires: argc is the number of arguments, argv is an array of strings.
    Side effects: Prints to stdout.
    Returns: 0 if successful.
    */
    int echo_p1(int argc, char *argv[]);

    /* echo_p2(argc, argv)
    
    echo command-line arguments; second version.
    Requires: argc is the number of arguments, argv is an array of strings.
    Side effects: Prints to stdout.
    Returns: 0 if successful.
    */
    int echo_p2(int argc, char *argv[]);

#endif
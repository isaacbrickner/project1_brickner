# Project 1: Threading

## Building


Command line:

* `make` to build. An executable called `hellothread` will be produced.
* `make clean` to clean up all build products except the executable.
<!-- * `make pristine` to clean up all build products entirely. -->

VS Code:

* The default build task runs `make`.

## Files

_[List files here, even if you only have one. Headers are optional.]_

* `hellothread.c`: The main code to launch the program
* `Makefile`: To compile the program to executable

## Data

`pthread_t thread1, thread2` thread variables


## Functions

_[This is a tree of functions and their short descriptions]_

* `main()`
  * `run()`: Prints the thread name and the value it is incrementing on.
  * `pthread_create()`: to create a new thread instance
  * `pthread_join()`: to wait for a thread to finish.
    

## Notes

* This project does not use any mutexes for locks.# hellothread_brickner

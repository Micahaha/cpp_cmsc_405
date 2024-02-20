// pre-processor directives
#include <iostream>

// create macro values (constants)
#define STOP 0
#define START 10

// use c++ standard library namespace
using namespace std;

// create macro expressions (constants)
# define CONDITION(i) (i > STOP)
# define BREAK(i) (i == 5)
# define CONTINUE(i) (i % 2)

void loops1(void){
    // declare and initialize a counter variable
    // for our loop
    int i = START;

    // set up while loop using macro expression
    // as its condition
    while(CONDITION(i)){
        // printf("%d ", i);

        cout << i << " ";
        i--;
    }
    cout << "blastoff!" << endl;
}

// function declarations
void loops1(void);
void loops2(void);
void loops3(void);
void loops4(void);
void loops5(void);
void recursion(int);
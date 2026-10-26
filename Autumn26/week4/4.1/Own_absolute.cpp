#include <iostream>

// we define a new function called myabs
// in the first line we specify that
// the function has an input parameter 
// of type double (double in)
// (in is not a special name)
// and returns a value of type double
// (hence *double* myabs etc)

double myabs(double on){

    double abs; // not a special name, just a name

    if(on < 0){ // if the number is negative...

        // ...then the result is the number
        // with a switched sign
        abs = -on;
    }
    else{ // otherwise...

        // ...the result is the same number
        abs = on;
    }

    // the function returns the result
    return abs;

}

// the main is almost the same

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    //                                ^ except here we call myabs (not std::abs)
}


// this example won't work
// because function myabs 
// is not declared before the main

/*WRONG CODE
#include <iostream>

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
    // function myabs is called here                        
}
// therefore the following code should be before the main
// otherwise it won't work
double myabs(double in){
    double abs;

    if(in < 0){ 
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}
*/

/* ERROR:
Wrong_order.cpp: In function 'int main()':
Wrong_order.cpp:10:40: error: 'myabs' was not declared in this scope
   10 |     std::cout << "|" << n << "| = " << myabs(n) << std::endl;
*/
// Corrected code:


#include <iostream>

double myabs(double in){
    double abs;

    if(in < 0){ 
        abs = -in;
    }
    else{
        abs = in;
    }

    return abs;
}
    int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}
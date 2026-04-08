#include <iostream>
using namespace std;

int run()
{
	    long result;

	        __asm__(
		        "movq $100, %0"
			        : "=r"(result)
				    );

		    return result;
}

int main() {
	    cout << "The skeleton code for the assembly language" << endl;
	        cout << "return value: " << run() << endl;
		    return 0;
}


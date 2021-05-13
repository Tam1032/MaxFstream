/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
for
while
goto
static
###End banned keyword*/
#include <fstream>
using namespace std;
ifstream fi("input.txt");
ofstream fo("output.txt");
int largest_input();
int main(){
	fo << largest_input();
	fi.close();
	fo.close();
	return 0;
}
int largest_input(){
	int n;
	fi>>n;
	if(n==0) return 0;
	int a=largest_input();
	if(a>n) return a;
	return n;
}

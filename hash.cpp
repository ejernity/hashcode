#include <iostream>
using namespace std;

#DEFINE MAXR 10000
#DEFINE MAXC 10000

class vehicle{
	int col;
	int row;
};
int main(void)
{
	int C,R;
	cin>>C>>R;
	int **Grid;
	Grid=new int*[C];
	for(int i=0; i<C; i++)
	{
		Grid[i]=new int[R];
	}
	
}	

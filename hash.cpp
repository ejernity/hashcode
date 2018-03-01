#include <iostream>
#include <cmath>
using namespace std;

#define MAXR 10000
#define MAXC 10000
#define MAXF 1000
#define MAXN 10000
#define MAXB 10000
#define MAXT 1000000000

class vehicle{
	int col;
	int row;
	int T;
	public:
		vehicle():col(0),row(0),T(0) {}
		move(int c,int r)
		{
			T += (abs(col-c)+abs(row-r));
			col = c;
			row= r ;
		}
		print()
		{
			cout << col <<"  "<< row << "  " << T << endl;
		}
		
		
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
	class vehicle *veh;
	veh = new vehicle();
	veh->move(5,6);
	veh->print();
	
	
}	

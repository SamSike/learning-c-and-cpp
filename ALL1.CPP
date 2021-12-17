#include<sameer19.h>
class all
{
public:
	int num;
	all()
	{
		start:
		clrscr();
		cout<<"Enter number from 1 - 20";
		cin>>num;
		switch(num)
		{
			case 1:
			mulinhe2();
			break;
			case 2:
			objargum();
			break;
			case 3:
			binoverl();
			break;
			case 4:
			objoverl();
			break;
			case 5:
			binoverl();
			break;
			case 6:
			construc();
			break;
			case 7:
			destruct();
			break;
			case 8:
			class1();
			break;
			case 9:
			pclass();
			break;
			case 10:
			inherit();
			break;
			case 11:
			sostruct();
			break;
			case 12:
			nestruct();
			break;
			case 13:
			mdmnsl();
			break;
			case 14:
			fileh();
			break;
			case 15:
			detohe();
			break;
			case 16:
			detooc();
			break;
			case 17:
			detobi();
			break;
			case 18:
			hetode();
			break;
			case 19:
			octode();
			break;
			case 20:
			bitode();
			break;
			default:
			goto start;
		}
	}
};
void main()
{
	all a1;
	getch();
}
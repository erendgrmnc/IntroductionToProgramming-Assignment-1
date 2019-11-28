#include "iostream" //To include in-out library.

#include "conio.h" //For including the _getch().

#include "iomanip" //For including setw.

using namespace std;

int main()
{
	char ch = 'x'; //This x character will hold users input data.
	
	int acount = 0; //This values are vowels.They will increase by user's typing.
	
	int ecount = 0; 
	
	int icount = 0;
	 
	int ocount = 0; 
	
	int ucount = 0; 

	int maxcount;

	cout << "Enter a phrase: ";

	while (ch != '\r') //User types until pressing enter button.
	{
		ch = _getche(); //To get character from users input.


		if (ch == 'a' || ch == 'A') //This will count how many a that user types.
		{
			acount++;
		}

		if (ch == 'e' || ch == 'E') //This will be count how many e that user going to type.
		{
			ecount++;
		}

		if (ch == 'i' || ch == '�')  //This will be count how many i that user going to type.
		{
			icount++;
		}

		if (ch == 'o' || ch == 'O') //This will be count how many o that user going to type.
		{
			ocount++;
		}

		if (ch == 'u' || ch == 'U') //This will be count how many u that user going to type.
		{
			ucount++;
		}


		if (acount >= ecount && acount >= icount &&   acount >= ucount &&  acount >= ocount )  /*This block is for deciding the maxcount. Which vowel is pressed more than others will be our maxcount.*/

			maxcount = acount;

		else if (ecount >= acount &&  ecount >= icount && ecount >= ucount &&  ecount >= ocount)

			maxcount = ecount;

		else if (icount >= acount && icount >= ecount &&  icount >= ucount &&  icount >= ocount )

			maxcount = icount;


		else if (ucount >= acount && ucount >= ecount && ucount >= icount && ucount >= ocount )

			maxcount = ucount;


		else if (ocount >= acount && ocount >= ecount && ocount >= icount &&  ocount >= ucount )

			maxcount = ocount;



	}

		cout << "\nVOWEL" << setw(10) << "COUNT" << "\t"; 

		for (int displayNumbers = 1; displayNumbers <= maxcount; displayNumbers++) //This "for" loop for printing 1 to maximum count number.
		{
			cout << setw(3) << displayNumbers;
		}

		cout << endl;

		cout << "a" << setw(11) << acount << "\t";

		for (int adisplay = 0; adisplay < acount; adisplay++) //This for loop for printing "a" for how much user typed.
		{
			cout << setw(3) << "a";
		}

		cout << endl;

		cout << "e" << setw(11) << ecount << "\t";

		for (int edisplay = 0; edisplay < ecount; edisplay++) //This for loop for printing "e" for how much user typed.
		{
			cout << setw(3) << "e";
		}

		cout << endl;

		cout << "i" << setw(11) << icount << "\t";

		for (int idisplay = 0; idisplay < icount; idisplay++) //This for loop for printing "i" for how much user typed.
		{
			cout << setw(3) << "i";
		}

		cout << endl;

		cout << "u" << setw(11) << ucount << "\t";

		for (int udisplay = 0; udisplay < ucount; udisplay++) //This for loop for printing "u" for how much user typed.
		{
			cout << setw(3) << "�";
		}

		cout << endl;

		

		cout << "o" << setw(11) << ocount << "\t"; //This for loop for printing "o" for how much user typed.

		for (int odisplay = 0; odisplay < ocount; odisplay++)
		{
			cout << setw(3) << "o";
		}

		cout << endl;

		
		

	system("pause");
	
	return 0;

}
/****************************************************************************
**					SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				    BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI…...:1
**				ÖÐRENCÝ ADI...............: SALÝH EREN DEÐÝRMENCÝ
**				ÖÐRENCÝ NUMARASI.:G181210017
**				DERS GRUBU…………:D
****************************************************************************/


#include <iostream> //For including in-out library.	

using namespace std;

int main()
{
	int row, column; //This variables are declaring for row and column.
	
	for (row = 1; row <= 5; row++) //For loop for row range.
	
	{
		for (column = 1; column <= 11; column++) //For loop for column range.
		
		{
			if (row == 1, column == 6) // Ýf for we want space at row 1 column 6.

				cout << " ";

			else if (column <= 6 - row || column >= 6 + row) // For output of "*" for between right and left of 6.th column decreasin by one. 
				
				cout << "* ";
			else // space for where there is no "*".
				
				cout << "  ";

		}

		cout << "\n";
	
	}
	
	cout << endl;

	for (row = 5; row >= 1; row--) //For range of the rows.
	
	{
		for (column = 1; column <= 11; column++) //For range of columns.
		
		{
			
			if (row == 1, column == 6) //For space at First row and Sixth column.
				
				cout << " ";

			else if (column <= 6 - row || column >= 6 + row) //For output of "*" for between right and left of 6.th column increasing by one.
				
				cout << "* ";
			
			else // space for where there is no "*".
				cout << "  ";

		}

		cout << "\n";
	}
	
	system("pause");
	
	return 0;

	
}
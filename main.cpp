    #include <iostream>
    #include <cstring>

    using namespace std;


    int main()
    {
    	bool x;
    	int span, rr,s, dl;

    	while (cin >> x)
    	{
    		if (!x)
    		{
    			char *arr = new char[101];

    			cin >> arr;
    			span = strlen(arr);
    			int *foo = new int[span];

    			char tab[13][span];

    			for (int i = 0; i < 13; i++)
    			{
    				for (int j = 0; j < span; j++)
    				{
    					cin.get(tab[i][j]);
    					if (tab[i][j] == '\n') {j--;}
    				}
    			}
    			cin >> arr;
    			s = 0;
    			for (int i = 1; i < span-1; i++)
    			{
    				rr = 0;
    				if (tab[1][i] == ' ') {rr += 5;}

    				if (int j = 4)
    				{

    						while (tab[j][i] != ' ')
    						{
    							j++;
    						}


    					rr += (j-4);
    				}

    				foo[i] = rr;
    				s += rr;

    			}

    			if (int i = 1)
    			{
    				while (i < span-1 && foo[i]==0)
    				{
    					i++;
    				}

    				if (s == 0)
    				{
    					cout << 0 << endl;
    				}
    				else
    				{
                                    	for (int j = i; j < span-1; j++)
    					{
    						cout << foo[j];
    					}
    					cout << endl;
    				}
    			}





    			/*for (int i = 0; i < 13; i++)
    			{
    				for (int j = 0; j < span; j++)
    				{
    					cout << tab[i][j];
    				}
    				cout << endl;
    			}*/

    			delete[] arr;
    			delete[] foo;
    		}
    		else
    		{

    			int iterator = 0;

    			char *arr1 = new char[100];
    			int *down = new int[100];

    			for (int i = 0; i < 100; i++)
    			{
    				arr1[i] = 0;
    				down[i] = 5;
    			}

    			cin >> arr1;

    			char *arr = new char[1000];

     			for (int i = 0; i < 100; i++)
    			{
    				arr[i] = 0;
    			}


    			while (arr1[iterator] == '0')
    			{
    				iterator++;
    			}

    			span = strlen(arr1);

    			if (iterator == span)
    			{
    				iterator = 0;
    				arr1[0] = '0';
    				span = 1;
    			}



    			for (int i = 0; i < (span); i++)
    			{
    				arr[i] = arr1[iterator];

    				if (iterator >= span)
    				{
    					break;
    				}

    				iterator++;

    			}

    			span = strlen(arr);

    			for (int i = 0; i < span+2; i++)
    			{
    				cout << '-';
    			}
    			cout << endl << "|";
    			for (int i = 0; i < span; i++)
    			{
    				cout << "*";
    			}
    			cout << "|\n|";
    			for (int i = 0; i < span; i++)
    			{
    				if (arr[i] >= '5')
    				{
    					cout << " ";
    				}
    				else
    				{
    					cout << "*";
    				}
    			}
    			cout << "|\n|";
    			for (int i = 0; i < span; i++)
    			{
    				if (arr[i] < '5')
    				{
    					cout << " ";
    				}
    				else
    				{
    					cout << "*";
    					arr[i] -= 5;
    				}
    			}
    			cout << "|\n|";
    			for (int i = 0; i < span; i++)
    			{
    				cout << "-";
    			}
    			cout << "|\n|";
    			for (int i = 0; i < 4; i++)
    			{
    				for (int j = 0; j < span; j++)
    				{
    					if (arr[j]> '0')
    					{
    						cout << "*";
    						arr[j] -= 1;
    						down[j]--;
    					}
    					else
    					{
    						cout << " ";
    					}
    				}
    				cout << "|\n|";
    			}

    			int u = 5;
    			for (int i = 0; i < 5; i++)
    			{
    				for (int j = 0; j < span; j++)
    				{
    					if  (down[j] == u)
    					{
    						cout << "*";
    						down[j]--;
    					}
    					else
    					{
    						cout << " ";
    					}
    				}

    				u--;
    				cout << "|\n";
    				if (i != 4)
    				{
    					cout << "|";
    				}

    			}
    			for (int i = 0; i < span+2; i++)
    			{
    				cout << "-";
    			}
    			cout << endl;


    			/*cout << endl << span << endl << endl;

    			for (int i = 0; i < span; i++)
    			{
    				cout << arr[i];
    			}

    			cout << endl;  */


    			delete[] arr;
    		 	delete[] arr1;
    			delete[] down;

    		}




    	}


    	return 0;
    }

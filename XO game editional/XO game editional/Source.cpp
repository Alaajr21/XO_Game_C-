#include<iostream>
using namespace std;

//printing game figure
void XO_figure()
{
    int x[3][3] = { 1 , 2 , 3 ,4 , 5 , 6 , 7 , 8 , 9 };
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << x[j][k] << "\t";
        }
        cout << endl;
    }
}

//in the two functions below , we are discussing who is the winner , nether player 1 nor 2
bool xo_condx(char a[3][3])
{
    if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
    {
        //cout << "Condition " << 1 << " " << 5 << " " << 9 << " happened ! " << endl;    
        return 1;
    }
    else if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
    {
        //cout << "Condition " << 3 << " " << 5 << " " << 7 << " happened ! " << endl;    
        return 1;
    }
    else if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
    {
       // cout << "Condition " << 1 << " " << 2 << " " << 3 << " happened ! " << endl;    
        return 1;
    }
    else if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
    {
     //   cout << "Condition " << 4 << " " << 5 << " " << 6 << " happened ! " << endl;    
        return 1;
    }
    else if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
    {
        //cout << "Condition " << 7 << " " << 8 << " " << 9 << " happened ! " << endl;      
        return 1;
    }
    else if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
    {
        //cout << "Condition " << 1 << " " << 4 << " " << 7 << " happened ! " << endl;      
        return 1;
    }
    else if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
    {
        //cout << "Condition " << 2 << " " << 5 << " " << 8 << " happened ! " << endl;   
        return 1;
    }
    else if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
    {
        //cout << "Condition " << 3 << " " << 6 << " " << 9 << " happened ! " << endl;    
        return 1;
    }
    else
    {
        //cout << "No condition happended " << endl;   
        return 0;
    }
}

//this fun for o situation 
bool xo_condo(char a[3][3])
{
    if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
    {
    //    cout << "Condition " << 1 << " " << 5 << " " << 9 << " happened ! " << endl; 
          return 1;
    }
    else if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
    {
        //cout << "Condition " << 3 << " " << 5 << " " << 7 << " happened ! " << endl;      
        return 1;
    }
    else if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
    {
        //cout << "Condition " << 1 << " " << 2 << " " << 3 << " happened ! " << endl;    
         return 1;
    }
    else if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
    {
        //cout << "Condition " << 4 << " " << 5 << " " << 6 << " happened ! " << endl;    
         return 1;
    }
    else if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
    {
        //cout << "Condition " << 7 << " " << 8 << " " << 9 << " happened ! " << endl;       
        return 1;
    }
    else if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
    {
       // cout << "Condition " << 1 << " " << 4 << " " << 7 << " happened ! " << endl;    
        return 1;
    }
    else if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
    {
       // cout << "Condition " << 2 << " " << 5 << " " << 8 << " happened ! " << endl;      
        return 1;
    }
    else if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
    {
        //cout << "Condition " << 3 << " " << 6 << " " << 9 << " happened ! " << endl;     
        return 1;
    }
    else
    {
        //cout << "No condition happended " << endl;  
        return 0;
    }
}

int arr[3][3];//for element location 
char arr2[3][3] = { '-','-','-','-','-','-','-','-','-' };//for element value (whether x or o )

bool fun_turn(int k)
{
    if (k % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    XO_figure();

    char ply1, ply2;
    cout << "Dear player 1 enter the character u want : "; cin >> ply1;
    //there is else condition for the next condition
    if (ply1 == 'X')
    {
        int z = 1;
        ply2 = 'O';
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
               
                if (xo_condx(arr2))
                {
                    cout << "Congratilatoins player " << 1 << endl;//ply1
                    break;
                }
                else if (xo_condo(arr2))
                {
                    cout << "Congratilatoins player " << 2 << endl;//ply2
                    break;
                }
                else
                {
                    cout << "<<<<<<<<<<<<<<\t NO ONE WIN YET \t>>>>>>>>>>>>>>" << endl << endl;
                    if (i == 2 && j == 2)
                    {
                        cout << "No one win , game over >>!>>? " << endl << endl;
                        break;
                    }
                }
                z++;
                if (fun_turn(z))
                {
                    cout << "Player 1 it's your turn : " << endl;
                    cout << "Enter location that u want : ";
                    cin >> arr[i][j];
                    
                    switch (arr[i][j])
                    {
                    case (1): {
                        arr2[0][0] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (2): {
                        arr2[0][1] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (3): {
                        arr2[0][2] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (4): {
                        arr2[1][0] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (5): {
                        arr2[1][1] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (6): {
                        arr2[1][2] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (7): {
                        arr2[2][0] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (8): {
                        arr2[2][1] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (9): {
                        arr2[2][2] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    default: {
                        cout << "Dear user u have entered unvalied location plz try again later ! " << endl;
                        break;
                    }
                    }
                }
                else
                {
                    cout << "Player 2 it's your turn : " << endl;
                    cout << "Enter location that u want : ";
                    cin >> arr[i][j];
                  
                    switch (arr[i][j])
                    {
                    case (1): {
                        arr2[0][0] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (2): {
                        arr2[0][1] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (3): {
                        arr2[0][2] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (4): {
                        arr2[1][0] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (5): {
                        arr2[1][1] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (6): {
                        arr2[1][2] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (7): {
                        arr2[2][0] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (8): {
                        arr2[2][1] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (9): {
                        arr2[2][2] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    default: {
                        cout << "Dear user u have entered unvalied location plz try again later ! " << endl;
                        break;
                    }
                    }
                }
            }
        }
    }
    else
    {
        ply2 = 'X';
        int z = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
            
                if (xo_condx(arr2))
                {
                    cout << "Congratilatoins player " << 1 << endl;//ply1
                    break;
                }
                else if (xo_condo(arr2))
                {
                    cout << "Congratilatoins player " << 2 << endl;//ply2
                    break;
                }
                else
                {
                    cout << "<<<<<<<<<<<<<<\t NO ONE WIN YET \t>>>>>>>>>>>>>>" << endl << endl;
                    if (i == 2 && j == 2) {
                        cout << "No one win , game over >>!>>? " << endl << endl;
                        break;
                    }

                }
                
                z++;
                if (fun_turn(z))
                {
                    cout << "Player 1 it's your turn : " << endl;
                    cout << "Enter location that u want : ";
                    cin >> arr[i][j];
                   

                    switch (arr[i][j])
                    {
                    case (1): {
                        arr2[0][0] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (2): {
                        arr2[0][1] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (3): {
                        arr2[0][2] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (4): {
                        arr2[1][0] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (5): {
                        arr2[1][1] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (6): {
                        arr2[1][2] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (7): {
                        arr2[2][0] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (8): {
                        arr2[2][1] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (9): {
                        arr2[2][2] = 'O';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    default: {
                        cout << "Dear user u have entered unvalied location plz try again later ! " << endl;
                        break;
                    }
                    }
                }
                else

                {
                    cout << "Player 2 it's your turn : " << endl;
                    cout << "Enter location that u want : ";
                    cin >> arr[i][j];
                   

                    switch (arr[i][j])
                    {
                    case (1): {
                        arr2[0][0] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (2): {
                        arr2[0][1] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (3): {
                        arr2[0][2] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (4): {
                        arr2[1][0] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (5): {
                        arr2[1][1] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (6): {
                        arr2[1][2] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (7): {
                        arr2[2][0] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (8): {
                        arr2[2][1] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    case (9): {
                        arr2[2][2] = 'X';
                        for (int s = 0; s < 3; s++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                cout << arr2[s][d] << "\t";
                            }
                            cout << endl;
                        }
                        break;
                    }
                    default: {
                        cout << "Dear user u have entered unvalied location plz try again later ! " << endl;
                        break;
                    }
                    }
                }
            }
        }
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    // q7 half pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // q8 inverted half pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }

    // q9 numeric hollow half pyramid
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == 0 || col == row + 1 - 1)
    //         {
    //             cout << col + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // q10 numeric full pyramid
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<n-row-1;col++){
            cout<<"  ";
        }
        //number
        int x=row+1;
        for(int col=0;col<row+1;col++){
            cout<<x++<<" ";
        }
        x--;
        int num = x;
        if(row>0){
            //right half pyramid
            for(int j=0;j<row;j++){
                num--;
                cout<<num<<" ";
            }
        }
        cout<<endl;
    }

    // q11 numeric  hollow full pyramid
    // for(int row=0;row<n;row++){
    //     //space
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     //number and space
    //     for(int col=0;col<row+1;col++){
    //         if(col==0){
    //             cout<<col+1<<" ";
    //         }
    //         else if(row==n-1){
    //             cout<<col+1<<" ";
    //         }else if(col==row+1-1){
    //             cout<<row+1;
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // q12 numeric  hollow inverted full pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         if(row==0){
    //             cout<<col+1<<" ";
    //         } else if(col==0){
    //             cout<<row+1<<" ";
    //         }else if(col==n-row-1){
    //             cout<<n;
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // q13
    // for(int row=0;row<n;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //         cout<<col+1;
    //     }
    //     if(row>0){
    //         for(int x=col;x>1;){
    //             x--;
    //             cout<<x;
    //         }
    //     }
    //     cout<<endl;
    // }

    // q20
    //  int num;
    //  cin>>num;
    //  int n= (num&1)?(num/2+1):(num/2);
    //  int x=3,row;
    //  for(row=0;row<n;row++){
    //      for(int col=0;col<row+1;col++){
    //          cout<<x;
    //      }
    //      x++;
    //      cout<<endl;
    //  }
    //  x--;
    //  for(int row1=0;row1<num-row;row1++){
    //      x--;
    //      for(int col=0;col<num-row-row1;col++){
    //          cout<<x;
    //      }
    //      cout<<endl;
    //  }

    // q21
    //  int num;
    //  cin>>num;
    //  int n=num/2,row;
    //  for(row=0;row<n;row++){
    //      for(int col=0;col<2*row+1;col++){
    //          if(!(col&1)){
    //              //even col
    //              cout<<row+1;
    //          }else{
    //              cout<<"*";
    //          }
    //      }
    //      cout<<endl;
    //  }
    //  for(int x=0;x<n;x++){
    //      for(int col=0;col<2*n-2*x-1;col++){
    //          if(!(col&1)){
    //              cout<<row;
    //          }else{
    //           cout<<"*";
    //          }
    //      }
    //      row--;
    //      cout<<endl;
    //  }

    // q22
    //  int ch=1,row;
    //  for(row=0;row<n;row++){
    //      for(int col=0;col<2*row+1;col++){
    //          if(!(col&1)){
    //              //even col
    //              cout<<ch++;
    //          }else{
    //              cout<<"*";
    //          }
    //      }
    //      cout<<endl;
    //  }
    // shrinking phase
    // ch-=n;
    // int printCount;
    // for(int row=0;row<n;row++){
    //     printCount=0;
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         if(!(col&1)){
    //             cout<<ch++;
    //             printCount++;
    //         }else{
    //          cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    //     ch=ch-2*printCount+1;
    // }

    // q23
    //  // half pyramid
    //  int num;
    //  cin>>num;
    //  int n=num/2;
    //  int number;
    //  for(int row=0;row<n+1;row++){
    //      number=1;
    //      for(int col=0;col<2*row+1;col++){
    //          if(col==0 || col==2*row+1-1){
    //              cout<<"* ";
    //          }else{
    //              cout << number<<" ";
    //              (col>=(2*row+1-1)/2) ? number-- :number++;
    //          }
    //      }
    //      cout<<endl;
    //  }
    //  //inverted half pyramid
    //  for(int row=0;row<n;row++){
    //      int number=1;
    //      for(int col=0;col<2*n-2*row-1;col++){
    //          if(col==0 || col==2*n-2*row-1-1){
    //              cout<<"* ";
    //          }
    //          else{
    //              cout << number<<" ";
    //              (col>=(2*n-2*row-1-1)/2) ? number-- :number++;
    //          }
    //      }
    //      cout<<endl;
    //  }

    // pascal triangle
    //  int C;
    //  for(int row=1;row<=n;row++){
    //      C = 1;
    //      for(int col=1;col<=row;col++){
    //              cout<<C<<" ";
    //              C = C * (row-col)/col;
    //      }
    //      cout<<endl;
    //  }

    return 0;
}

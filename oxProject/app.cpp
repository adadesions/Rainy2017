#include <iostream>
#include <vector>

using namespace std;

void display( int board[], int size ) {
    int count_nl = 0;
    for( int i = 0; i < size; ++i){
        if( count_nl == 3 ){
            cout << "|" << endl;
            count_nl = 0;
        }
        cout << "| ";
        if( board[i] == 0 )
            cout << " " << " ";
        else if( board[i] == 1 )
            cout << "O" << " "; 
        else if( board[i] == 2 )
            cout << "X" << " ";
        ++count_nl;
    } 
    cout << "|" << endl;
}

void choose( int board[], int stamp) {
    string player = ""; 
    if( stamp == 1 )
        player = "Player O ";
    else
        player = "Player X ";

    int pos = -1;
    cout << player << endl;
    while(1){
        cout << "Please choose a postion for your turn (1-9) : ";
        cin >> pos;
        if( pos >= 1 && pos <= 9){
            cout << "you've chosen : " << pos << endl;
            pos = pos - 1;
            if( board[pos] == 0 ){
                board[pos] = stamp;
                break;
            }
            else
                cout << "Another was chose " << pos+1 << " already. Retry!" << endl;
        }
        else {
            cout << "Retry! You should choose between 1 to 9" << endl;
        }
    }
}

bool isWin( int b[] ) {
    if( b[0] == b[1] && b[0] == b[2] && b[1] == b[2] )
        return true;
    else if( b[0] == b[3] && b[0] == b[6] && b[3] == b[6] )
        return true;
    else if( b[0] == b[4] && b[0] == b[8] && b[4] == b[8] )
        return true;
    
    if( b[1] == b[4] && b[1] == b[7] && b[4] == b[7] )
        return true;
    
    if( b[2] == b[5] && b[2] == b[8] && b[5] == b[8] )
        return true;
    else if( b[2] == b[4] && b[2] == b[6] && b[4] == b[6] )
        return true;
    
    return false;
}

void choose_team( int &stamp ) {
    char team;
    while(1){
        cout << "Please choose your team ( X or O ) : ";
        cin >> team;
        if( team == 'o' || team == 'O' ){
            stamp = 1;
            break;
        }
        else if( team == 'x' || team == 'X' ){
            stamp = 2;
            break;
        }
        else {
            cout << "Try again dude!" << endl;
        }
    }
    
    cout << "Your team is  : " << team << endl;
}

void change_turn( int &stamp ){
    stamp = stamp == 1 ? 2 : 1;
}

int main( int argc, char *argv[] ) {
    int size = 9;
    int new_board[9] = {};
    int stamp = -1;
    
    //Init game
    display( new_board, size );
    choose_team( stamp );

    // Game Play
    int turn = 0;
    while( turn < 9 ){
        choose( new_board, stamp );
        display( new_board, size );

        // Win?
        if( turn >= 4 ) {
            if( isWin( new_board) ){
                string player = ""; 
                if( stamp == 1 )
                    player = "Player O ";
                else
                    player = "Player X ";
                cout << "Yeahh!! " << player << "is a Winner!!!" << endl;
                break;
            }
        }
        
        // Change turn
        change_turn( stamp );
        ++turn;
    }
        
    return 0;
}



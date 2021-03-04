#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

char grid[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char gridTemplate[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player1, player2;
bool notChosen = true;
int randomGridNum, immediateWin;


int getAiGrid(){

    srand(time(NULL));
    immediateWin = rand()%99+1;

    if(immediateWin < 20){

        notChosen = true;
        while(notChosen){

            srand(time(NULL));
            randomGridNum = rand()%10;

            if(grid[randomGridNum] != player1 && grid[randomGridNum] != player2){

                return randomGridNum;

            }
        }
    }
    else{
        
        if(grid[0] == player1 && grid[1] == player1 && grid[2] != player2){
            return 2;
        }
        else if(grid[0] == player1 && grid[2] == player1 && grid[1] != player2){ 
            return 1;
        }
        else if(grid[1] == player1 && grid[2] == player1 && grid[0] != player2){
            return 0;
        }
        else if(grid[3] == player1 && grid[4] == player1 && grid[5] != player2){
            return 5;
        }
        else if(grid[4] == player1 && grid[5] == player1 && grid[3] != player2){
            return 3;
        }
        else if(grid[3] == player1 && grid[5] == player1 && grid[4] != player2){
            return 4;
        }
        else if(grid[6] == player1 && grid[7] == player1 && grid[8] != player2){
            return 8;
        }
        else if(grid[8] == player1 && grid[7] == player1 && grid[6] != player2){
            return 6;
        }
        else if(grid[6] == player1 && grid[8] == player1 && grid[7] != player2){
            return 7;
        }
        else if(grid[0] == player1 && grid[3] == player1 && grid[6] != player2){
            return 6;
        }
        else if(grid[0] == player1 && grid[6] == player1 && grid[3] != player2){
            return 3;
        }
        else if(grid[3] == player1 && grid[6] == player1 && grid[0] != player2){
            return 0;
        }
        else if(grid[1] == player1 && grid[4] == player1 && grid[7] != player2){
            return 7;
        }
        else if(grid[1] == player1 && grid[7] == player1 && grid[4] != player2){
            return 4;
        }
        else if(grid[4] == player1 && grid[7] == player1 && grid[1] != player2){
            return 1;
        }
        else if(grid[2] == player1 && grid[5] == player1 && grid[8] != player2){
            return 8;
        }
        else if(grid[5] == player1 && grid[8] == player1 && grid[2] != player2){
            return 2;
        }
        else if(grid[2] == player1 && grid[8] == player1 && grid[5] != player2){
            return 5;
        }
        else if(grid[0] == player1 && grid[4] == player1 && grid[8] != player2){
            return 8;
        }
        else if(grid[4] == player1 && grid[8] == player1 && grid[0] != player2){
            return 0;
        }
        else if(grid[0] == player1 && grid[8] == player1 && grid[4] != player2){
            return 4;
        }
        else if(grid[2] == player1 && grid[4] == player1 && grid[6] != player2){
            return 6;
        }
        else if(grid[2] == player1 && grid[6] == player1 && grid[4] != player2){
            return 4;
        }
        else if(grid[4] == player1 && grid[6] == player1 && grid[2] != player2){
            return 2;
        }
        else{

            notChosen = true;
            while(notChosen){

                srand(time(NULL));
                randomGridNum = rand()%10;

                if(grid[randomGridNum] != player1 && grid[randomGridNum] != player2){

                    return randomGridNum;

                }
            }
        }
    }    
}

int checkWinner(){

    if(grid[0] == player1 && grid[1] == player1 && grid[2] == player1){
        return 1;
    }
    else if(grid[3] == player1 && grid[4] == player1 && grid[5] == player1){
        return 1;
    }
    else if(grid[6] == player1 && grid[7] == player1 && grid[8] == player1){
        return 1;
    }
    else if(grid[0] == player1 && grid[3] == player1 && grid[6] == player1){
        return 1;
    }
    else if(grid[1] == player1 && grid[4] == player1 && grid[7] == player1){
        return 1;
    }
    else if(grid[2] == player1 && grid[5] == player1 && grid[8] == player1){
        return 1;
    }
    else if(grid[0] == player1 && grid[4] == player1 && grid[8] == player1){
        return 1;
    }
    else if(grid[2] == player1 && grid[4] == player1 && grid[6] == player1){
        return 1;
    }
    else if(grid[0] == player2 && grid[1] == player2 && grid[2] == player2){
        return 2;
    }
    else if(grid[3] == player2 && grid[4] == player2 && grid[5] == player2){
        return 2;
    }
    else if(grid[6] == player2 && grid[7] == player2 && grid[8] == player2){
        return 2;
    }
    else if(grid[0] == player2 && grid[3] == player2 && grid[6] == player2){
        return 2;
    }
    else if(grid[1] == player2 && grid[4] == player2 && grid[7] == player2){
        return 2;
    }
    else if(grid[2] == player2 && grid[5] == player2 && grid[8] == player2){
        return 2;
    }
    else if(grid[0] == player2 && grid[4] == player2 && grid[8] == player2){
        return 2;
    }
    else if(grid[2] == player2 && grid[4] == player2 && grid[6] == player2){
        return 2;
    }
    else if(grid[0] != '1' && grid[1] != '2' && grid[2] != '3' && grid[3] != '4' && grid[4] != '5' && grid[5] != '6' && grid[6] != '7' && grid[7] != '8' && grid[8] != '9'){
        return 3;
    }
    else{
        return 0;
    }
}

void updateDisplay(char player1, char player2){

    system("cls");

    cout << "Tic Tac Toe\n\n";

    cout << "Player 1 ("<<player1<<")  -  Player 2 ("<<player2<<")" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << endl;

    cout << "     |     |     " << endl << endl;

}


int main(){

    bool game = true, newGame = true, ending = true;
    int menu, playerChoice, currentPlayer = 0, gridNumber, playAgain;

    while(newGame){

        game = true;
        ending = true;
        currentPlayer = 0;

        for(int i = 0; i <= 9; i++){
            grid[i] = gridTemplate[i];
        }

        cout<<"== TIC TAC TOE MENU =="<<endl;
        cout<<"1. Play (Singleplayer)"<<endl;
        cout<<"2. Play (Multiplayer)"<<endl;
        cout<<"3. Exit"<<endl;

        cin>>menu;

        if(menu == 1){

            srand(time(NULL));
                playerChoice = rand()%99+1;
                
                if(playerChoice < 50){

                    player1 = 'X';
                    player2 = 'O';

                }
                else{
                    player1 = 'O';
                    player2 = 'X';
                }

            while(game){

                updateDisplay(player1, player2);

                switch(currentPlayer){
                    case 0:
                        cout<<"Your ("<<player1<<") turn! Pick a number (1 - 9)"<<endl;
                        cin>>gridNumber;
                        
                        if(gridNumber == 1 && grid[0] == '1'){
                            grid[0] = player1;
                        }
                        else if(gridNumber == 2 && grid[1] == '2'){
                            grid[1] = player1;
                        }
                        else if(gridNumber == 3 && grid[2] == '3'){
                            grid[2] = player1;
                        }
                        else if(gridNumber == 4 && grid[3] == '4'){
                            grid[3] = player1;
                        }
                        else if(gridNumber == 5 && grid[4] == '5'){
                            grid[4] = player1;
                        }
                        else if(gridNumber == 6 && grid[5] == '6'){
                            grid[5] = player1;
                        }
                        else if(gridNumber == 7 && grid[6] == '7'){
                            grid[6] = player1;
                        }
                        else if(gridNumber == 8 && grid[7] == '8'){
                            grid[7] = player1;
                        }
                        else if(gridNumber == 9 && grid[8] == '9'){
                            grid[8] = player1;
                        }
                        else{
                            currentPlayer = -1;
                        }

                        currentPlayer++;

                        break;

                    case 1:
                        
                        grid[getAiGrid()] = player2;

                        currentPlayer = 0;

                        break;

                }

                if(checkWinner()){
                    while(ending){

                        system("cls");

                        if(checkWinner() == 1){
                            cout<<"You ("<<player1<<") have won the game!"<<endl;
                        }
                        else if(checkWinner() == 2){
                            cout<<"My super epic AI ("<<player2<<") has won the game!"<<endl;
                        }
                        else if(checkWinner() == 3){
                            cout<<"Tie! No one has won!"<<endl;
                        }   

                        cout<<"Do you want to play again?"<<endl;
                        cout<<"1. Yes"<<endl;
                        cout<<"2. No"<<endl;
                        cin>>playAgain;

                        if(playAgain == 1){
                            ending = false;
                            game = false;
                            newGame = true;
                            system("cls");
                        }
                        else if(playAgain == 2){
                            ending = false;
                            game = false;
                            newGame = false;
                        }
                        else{
                            cout<<"Invalid option!"<<endl;
                            ending = true;
                        }
                    }
                }
            }
        }
        else if(menu == 2){

            srand(time(NULL));
            playerChoice = rand()%99+1;
                
            if(playerChoice < 50){

                player1 = 'X';
                player2 = 'O';

            }
            else{
                player1 = 'O';
                player2 = 'X';
            }

            while(game){

                updateDisplay(player1, player2);

                switch(currentPlayer){
                    case 0:
                        cout<<"Player 1's ("<<player1<<") turn! Pick a number (1 - 9)"<<endl;
                        cin>>gridNumber;
                        
                        if(gridNumber == 1 && grid[0] == '1'){
                            grid[0] = player1;
                        }
                        else if(gridNumber == 2 && grid[1] == '2'){
                            grid[1] = player1;
                        }
                        else if(gridNumber == 3 && grid[2] == '3'){
                            grid[2] = player1;
                        }
                        else if(gridNumber == 4 && grid[3] == '4'){
                            grid[3] = player1;
                        }
                        else if(gridNumber == 5 && grid[4] == '5'){
                            grid[4] = player1;
                        }
                        else if(gridNumber == 6 && grid[5] == '6'){
                            grid[5] = player1;
                        }
                        else if(gridNumber == 7 && grid[6] == '7'){
                            grid[6] = player1;
                        }
                        else if(gridNumber == 8 && grid[7] == '8'){
                            grid[7] = player1;
                        }
                        else if(gridNumber == 9 && grid[8] == '9'){
                            grid[8] = player1;
                        }
                        else{
                            currentPlayer = -1;
                        }

                        currentPlayer++;

                        break;

                    case 1:
                        cout<<"Player 2's ("<<player2<<") turn! Pick a number (1 - 9)"<<endl;

                        cin>>gridNumber;
                        
                        if(gridNumber == 1 && grid[0] == '1'){
                            grid[0] = player2;
                        }
                        else if(gridNumber == 2 && grid[1] == '2'){
                            grid[1] = player2;
                        }
                        else if(gridNumber == 3 && grid[2] == '3'){
                            grid[2] = player2;
                        }
                        else if(gridNumber == 4 && grid[3] == '4'){
                            grid[3] = player2;
                        }
                        else if(gridNumber == 5 && grid[4] == '5'){
                            grid[4] = player2;
                        }
                        else if(gridNumber == 6 && grid[5] == '6'){
                            grid[5] = player2;
                        }
                        else if(gridNumber == 7 && grid[6] == '7'){
                            grid[6] = player2;
                        }
                        else if(gridNumber == 8 && grid[7] == '8'){
                            grid[7] = player2;
                        }
                        else if(gridNumber == 9 && grid[8] == '9'){
                            grid[8] = player2;
                        }
                        else{
                            currentPlayer = 2;
                        }

                        currentPlayer--;

                        break;

                }

                if(checkWinner()){
                    while(ending){

                        system("cls");

                        if(checkWinner() == 1){
                            cout<<"Player 1 ("<<player1<<") has won the game!"<<endl;
                        }
                        else if(checkWinner() == 2){
                            cout<<"Player 2 ("<<player2<<") has won the game!"<<endl;
                        }
                        else if(checkWinner() == 3){
                            cout<<"Tie! No one has won!"<<endl;
                        }

                        cout<<"Do you want to play again?"<<endl;
                        cout<<"1. Yes"<<endl;
                        cout<<"2. No"<<endl;
                        cin>>playAgain;

                        if(playAgain == 1){
                            ending = false;
                            game = false;
                            newGame = true;
                            system("cls");
                        }
                        else if(playAgain == 2){
                            ending = false;
                            game = false;
                            newGame = false;
                        }
                        else{
                            cout<<"Invalid option!"<<endl;
                            ending = true;
                        }
                    }
                }

            }
        }
        else if(menu == 3){

            return 0;

        }
        else{

            cout<<"Invalid option!"<<endl;

        }
    }
}
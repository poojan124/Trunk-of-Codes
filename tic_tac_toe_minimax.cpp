#include<bits/stdc++.h>
using namespace std;
struct move{
    int row,col;
};
char player,opponent;
bool move_left(char board[3][3]){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[i][j]=='_')
                return true;
    return false;
}
int evaluate(char board[3][3]){
    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
            if(board[i][0]==player)
                return 10;
            else if(board[i][0]==opponent)
                return -10;
        }
    }
    for(int i=0;i<3;i++){
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]){
            if(board[0][i]==player)
                return 10;
            else if(board[0][i]==opponent)
                return -10;
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        if(board[0][0]==player)
            return 10;
        else if(board[0][0]==opponent)
            return -10;
    }
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2]){
        if(board[2][0]==player)
            return 10;
        else if(board[2][0]==opponent)
            return -10;
    }
    return 0;
}
int minimax(char board[3][3],int depth,bool ismax){
    int score = evaluate(board);
    if(score==10)
        return score;
    if(score==-10)
        return score;
    if(move_left(board)==false)
        return 0;
    if(ismax){
        int best=-1000;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='_'){
                    board[i][j]=player;
                    best=max(best,minimax(board,depth+1,!ismax));
                    board[i][j]='_';
                }
            }
        }
        return best;
    }
    else{
        int best=1000;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='_'){
                    board[i][j]=opponent;
                    best=min(best,minimax(board,depth+1,!ismax));
                    board[i][j]='_';
                }
            }
        }
        return best;
    }
}
void bestmove(char board[3][3]){
    int best=-1000;
    move bestmove;
    bestmove.row=-1;
    bestmove.col=-1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='_'){
                board[i][j]=player;
                int val=minimax(board,0,false);
                board[i][j]='_';
                if(val>best){
                    best=val;
                    bestmove.row=i;
                    bestmove.col=j;
                }
            }
        }
    }
    cout<<bestmove.row<<" "<<bestmove.col;
}
int main()
{
    char board[3][3],temp;
    cin>>temp;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>board[i][j];

    if(temp=='X'){
        player='X';opponent='O';
    }
    else{
        player='O';opponent='X';
    }
    bestmove(board);
}

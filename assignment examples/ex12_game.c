/*
// create Rock, Paper, scissors Game
Player 1 : rock
Player 2 : (computer ) : scissor --> 1 gets 1 point

rock vs scissor = rock wins 
papr vs scissor = scissor wins
papr vs rock = papr wins

WAP to allow user to play this game three times with computer . log the scores of computer and the player .
 display the name of the winner at the end 
 NOTE : you have to display name of the player during the game . 
 take users name as an input from the user.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an inpput and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    // for rock paper scissor --> returns 1 if c1>c2 and 0 otherwise . if c1==c2 then return -1.
    if (char1 == char2)
    {
        return -1;
    }
    else if ((char1 == 'R') && (char2 == 'S'))
    {
        return 1;
    }
    else if ((char2 == 'R') && (char1 == 'S'))
    {
        return 0;
    }

    else if ((char1 == 'P') && (char2 == 'R'))
    {
        return 1;
    }
    else if ((char2 == 'P') && (char1 == 'R'))
    {
        return 0;
    }

    else if ((char1 == 'S') && (char2 == 'P'))
    {
        return 1;
    }
    else if ((char2 == 'S') && (char1 == 'P'))

    {
        return 0;
    }
}
int main()
{
    int palyerScore = 0, computerScore = 0, temp;
    char playerChar, computerChar;
    char dict[] = {'R', 'P', 'S'};
    printf(" ***** WELCOME TO ROCK PAPER SCISSOR ****\n");
    for (int i = 0; i < 3; i++)
    {
        //take player 1's input
        printf("Player 1's Turn : \n");
        printf("\n choose 1 for rock , 2 for paper and 3 for scissors \n ");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("you chose %c\n\n", playerChar);

        // generate computes input
        printf("Computers Turn : \n");
        printf("\n choose 1 for rock , 2 for paper and 3 for scissors \n ");
        temp = generateRandomNumber(3) + 1; //0 1 2
        computerChar = dict[temp - 1];
        printf("CPU chose %c\n", computerChar);

        //compare the scores
        if (greater(computerChar, playerChar) == 1)
        {
            computerScore += 1;
            printf("CPU Got It..!\n");
        }
        else if (greater(computerChar, playerChar) == -1)
        {
            computerScore += 1;
            palyerScore += 1;
            printf("It a Drop..!\n");
        }
        else
        {
            palyerScore += 1;
            printf("You Got It..!\n");
        }
        printf(" You : %d\n CPU : %d \n\n");
    }

    if (palyerScore > computerScore)
    {
        printf("You Win The GAME...! \n");
    }
    else if (palyerScore < computerScore)
    {
        printf("CPU Win The GAME...! \n");
    }
    else
    {
        printf("Its A Drop! \n");
    }

    return 0;
}
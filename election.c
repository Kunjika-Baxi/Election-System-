/*Election System*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,n1,ov7,ov8,ov9,ov10,v1,v2,v3,v4,v5;char aadhar[15],ans;int age;char name[20],yn;int c1=0,c2=0,c3=0,c4=0,c5=0,ov1,ov2,ov3,ov4,ov5;
    printf("\n---------- Election 2024 ----------");
    printf("\nEnter Name : ");
    scanf("%s",name);
    printf("\nEnter Age : ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("\nYou are not Eligible for Voting");
    }
    else 
    {
        printf("\nEnter Aadhar Number : ");
        scanf("%s",aadhar);
        printf("\n\tVoter ID Verification : ");
        printf("\nPlease Confirm you Voter ID with higher authorities... ");
        printf("\nIs your Voter ID confirmed ? : (y/n) : ");getchar();
        scanf("%c",&ans);
        if(ans =='n')
        {
           printf("\nYou cannot VOTE!!");
        }
        else 
        {
            printf("\nYou Can only Vote Once and The selection You have made once , will be considered final.");
            printf("\n\n\tElection List : ");
            printf("\n1. Candidate 1 : @");
            printf("\n2. Candidate 2 : &");
            printf("\n3. Candidate 3 : *");
            printf("\n4. Candidate 4 : $");
            printf("\n5. Candidate 5 : #");
            printf("\nPlease Enter Your VOTE : ");
            scanf("%d",&n);
            ov1 = (rand()%5)+1;
            ov2 = (rand()%5)+1;
            ov3 = (rand()%5)+1;
            ov4 = (rand()%5)+1;
            ov5 = (rand()%5)+1;
            if(ov1==1)
            c1++;
            else if(ov1==2)
            c2++;
            else if(ov1==3)
            c3++;
            else if(ov1==4)
            c4++;
            else 
            c5++;
            
            if(ov2==1)
            c1++;
            else if(ov2==2)
            c2++;
            else if(ov2==3)
            c3++;
            else if(ov2==4)
            c4++;
            else 
            c5++;

            if(ov3==1)
            c1++;
            else if(ov3==2)
            c2++;
            else if(ov3==3)
            c3++;
            else if(ov3==4)
            c4++;
            else 
            c5++;

            if(ov4==1)
            c1++;
            else if(ov4==2)
            c2++;
            else if(ov4==3)
            c3++;
            else if(ov4==4)
            c4++;
            else
            c5++;

            if(ov5==1)
            c1++;
            else if(ov5==2)
            c2++;
            else if(ov5==3)
            c3++;
            else if(ov5==4)
            c4++;
            else 
            c5++;
           
            switch(n)
            {
                case 1 : printf("\nYour Choice : 1.Candidate 1 : @");
                         c1++;break;
                case 2 : printf("\nYour Choice : 2.Candidate 2 : &");
                         c2++;break;
                case 3 : printf("\nYour Choice : 3.Candidate 3 : *");
                         c3++;break;
                case 4 : printf("\nYour Choice : 4.Candidate 4 : $");
                         c4++;break;
                case 5 : printf("\nYour Choice : 2.Candidate 5 : #");
                         c5++;break;
                default : printf("\nInvalid Choice");
            }
            ov7 = (rand()%5)+1;
            ov8 = (rand()%5)+1;
            ov9 = (rand()%5)+1;
            ov10 = (rand()%5)+1;
            if(ov7==1)
            c1++;
            else if(ov7==2)
            c2++;
            else if(ov7==3)
            c3++;
            else if(ov7==4)
            c4++;
            else 
            c5++;

            if(ov8==1)
            c1++;
            else if(ov8==2)
            c2++;
            else if(ov8==3)
            c3++;
            else if(ov8==4)
            c4++;
            else 
            c5++;

            if(ov9==1)
            c1++;
            else if(ov9==2)
            c2++;
            else if(ov9==3)
            c3++;
            else if(ov9==4)
            c4++;
            else 
            c5++;

            if(ov10==1)
            c1++;
            else if(ov10==2)
            c2++;
            else if(ov10==3)
            c3++;
            else if(ov10==4)
            c4++;
            else 
            c5++;
            
            printf("\nIf your choice Matches then : type 'y' otherwise 'n'");
            printf("\n\nIf the choice does not matches (which is a very rare case) than your vote will not be counted and you cannot vote again");
            printf("\n\nDoes your Choice Matches with your Displayed Candidate ? ");getchar();
            scanf("%c",&yn);
           
            if(yn=='n')
            {
                printf("\n\nEnter the choice which displayed to you after voting (which is wrong) : ");
                scanf("%d",&n1);
                switch(n1)
            {
                case 1 :c1--;printf("\nVote Cancelled Successfully\nTHANK YOU for your KIND support");break;
                case 2 : c2--;printf("\nVote Cancelled Successfully\nTHANK YOU for your KIND support");break;
                case 3 : c3--;printf("\nVote Cancelled Successfully\nTHANK YOU for your KIND support");break;
                case 4 : c4--;printf("\nVote Cancelled Successfully\nTHANK YOU for your KIND support");break;
                case 5 : c5--;printf("\nVote Cancelled Successfully\nTHANK YOU for your KIND support");break;
                default : printf("\nInvalid Choice");
            }
                printf("\n\nVotes Count : ");
                printf("\nVotes to Candidate 1 (@) : %d",c1);
                printf("\nVotes to Candidate 2 (&) : %d",c2);
                printf("\nVotes to Candidate 3 (*) : %d",c3);
                printf("\nVotes to Candidate 4 ($) : %d",c4);
                printf("\nVotes to Candidate 5 (#) : %d",c5);

                printf("\n\n\t-----ELECTION 2024 RESULT-----");
                if(c1>c2 && c1>c3 && c1>c4 && c1>c5)
                printf("\nLeader : CANDIDATE 1 : @");
                else if(c2>c1 && c2>c3 && c2>c4 && c2>c5)
                printf("\nLeader : CANDIDATE 2 : &");
                else if(c3>c1 && c3>c2 && c3>c4 && c3>c5)
                printf("\nLeader : CANDIDATE 3 : *");
                else if(c4>c1 && c4>c2 && c4>c3 && c4>c5)
                printf("\nLeader : CANDIDATE 4 : $");
                else if(c5>c1 && c5>c2 && c5>c3 && c5>c4)
                printf("\nLeader : CANDIDATE 5 : #");
                else 
                printf("\nResult depends on LOTTERY VOTING");
            }
            else 
            {
                 printf("\n\tThank you for your PRECIOUS VOTE!!!");
                 printf("\nElection Result will be declared soon");
                 printf("\nTOTAL CITIZENS : 10");
                 printf("\n\n\t-----ELECTION POLLING SYSTEM-----");
                 printf("\nEnter the Votes (total votes 10) you think each candidate will get(probability): ");
                 printf("\nCandidate 1 : @ :  ");
                 scanf("%d",&v1);
                 printf("\nCandidate 2 : & :  ");
                 scanf("%d",&v2);
                 printf("\nCandidate 3 : * :  ");
                 scanf("%d",&v3);
                 printf("\nCandidate 4 : $ :  ");
                 scanf("%d",&v4);
                 printf("\nCandidate 5 : # :  ");
                 scanf("%d",&v5);

                printf("\n\t--------POLL--------");
                printf("\nCandidate 1 : @ : %d",v1);
                printf("\nCandidate 2 : & : %d",v2);
                printf("\nCandidate 3 : * : %d",v3);
                printf("\nCandidate 4 : $ : %d",v4);
                printf("\nCandidate 5 : # : %d",v5);

                printf("\n\nVotes Count : ");
                printf("\nVotes to Candidate 1 (@) : %d",c1);
                printf("\nVotes to Candidate 2 (&) : %d",c2);
                printf("\nVotes to Candidate 3 (*) : %d",c3);
                printf("\nVotes to Candidate 4 ($) : %d",c4);
                printf("\nVotes to Candidate 5 (#) : %d",c5);

                printf("\n\n\t-----ELECTION 2024 RESULT-----");
                if(c1>c2 && c1>c3 && c1>c4 && c1>c5)
                printf("\nLeader : CANDIDATE 1 : @");
                else if(c2>c1 && c2>c3 && c2>c4 && c2>c5)
                printf("\nLeader : CANDIDATE 2 : &");
                else if(c3>c1 && c3>c2 && c3>c4 && c3>c5)
                printf("\nLeader : CANDIDATE 3 : *");
                else if(c4>c1 && c4>c2 && c4>c3 && c4>c5)
                printf("\nLeader : CANDIDATE 4 : $");
                else if(c5>c1 && c5>c2 && c5>c3 && c5>c4)
                printf("\nLeader : CANDIDATE 5 : #");
                else 
                printf("\nResult depends on LOTTERY VOTING");

            }
        }
        
    }
}
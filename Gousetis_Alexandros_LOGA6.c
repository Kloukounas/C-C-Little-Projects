#include <stdio.h>   //Dhlwnw thn vivliothiki pou tha xrhsimopoihsw
#define max_size 100 // Dhlwnw to max megethos toy pinaka

int numb(int sum);    // sinartisi poy hthela na xrhsimopoihsw gia na dhlwsw ton pinaka
int pos(int sum);     // sinartisi pou hthela na xrhsimopoihsw  gia na dw an einai Thetikos
int neg(int sum);     // sinartisi poy hthela na xrhsimopoihsw gia na dw an einai arnitikos
int null(int sum);    // sinartisi poy hthela na xrhsimopoihsw gia na dw an einai midenikos
int x, ginomeno, sum; // Dhlwnw kapoies Katholikes metavlites

int main() // H main einai to entry point gia ta moystokouloura poy evgala.
{

    printf("\nTo ginomeno einai :%d \n eyxaristw", numb(sum)); // ayth h printf moy hthela na moy vgazei to epithumhto apotelesma, alla bgazei moustokouloura.

    if (pos(ginomeno))
    {
        printf("Einai Thetiko"); // hthela na moy vgazei to apotelesma oti einai thetiko an to ginomeno >0
        if (neg(ginomeno))
        {
            printf("Einai arnitikos"); // hthela na moy vgazei to apotelesma oti einai arnitiko an to ginomeno <0
            if (null(ginomeno))
            {
                printf("Einai Mideniko"); // hthela na moy vgazei to apotelesma oti einai null an to ginomeno ==0
            } //edw stamataei h if null
        }//edw stamataei h if arnitikos
    }//edw stamatei h if thetikos

    return 0; // kleinei h main
}

int numb(int sum) // sthn synarthsh ayth dhlwnw poses theseis tha exei o pinakas
{

    int i, N;         // Akeraioi metavlites
    int p[max_size];  // o pinakas kai to max megethos toy
    int ginomeno = 1; // dhlwnw to ginomeno oti =1 gia to otan to polaplasiasw me to p[i] na moy vgakei to apotelesma poy thelw (moystokoylora phra telika)

    do // amintikos mhxanismos poy stamataei ton xrhsth na valei arnhtiko arithmo gia ton pinaka
    {
        printf("\nPoses Theseis thes na exei o pinakas?"); // emfanizeito mhnuma
        scanf("%d", &N);                                   // grafw poses theseis tha exei o pinakas

    } while (N <= 0 || N > max_size); // exw grapsei to ti den prepei na grapsei o xrhsths, alliws mpainei se leitourgia o amyntikos mhxanismos

    printf("\n\nDwsate %d theseis ston Pinaka\n", N); // Dhlwsa me to poses theseis tha exei o pinakas. To %d dhlwnei ton Thetiko Akeraio (N).
    for (i = 0; i < N; i++)                           // o pinakas ksekinaei apo thn thesh 0 na prostheti kai alles theseis mexri na ftaseis tis X theseis p.x. an o p[5] na mhn kseperasei to tis 5 theseis.
    {                                                 // p.x. (i = 0; i<5; i++) ==> to i++ mas kanei 1

        printf("Supmlhrwste thn %dh thesh toy pinaka ", i + 1); // mas dhlwnei se poia thesh einai o pinakas kai to i+1 gia na metrhsh to dixei ton prwto arithmo toy pinaka 1 anti gia 0
        scanf("%d", &p[i]);                                     // dhlwsa ton akeraio sthn thesh tou pinaka
    }

    ginomeno = p[i] * p[i]; // prospathisa na vgalw to ginomeno polaplasiazontas tis theseis toy pinaka gia na vgalw to ginomeno. px an ginomeno=1 tote
                            // ginomeno=1*p[0]==>ginomeno=ginomeno(tou p[0]) * p[1]==> ginomeno=ginomeno(tou p[1])*p[2] ktlp mexri na ftasei ston pinaka 4 h 5 efoswn exw grapsei i+1
    return ginomeno; // hthelan na moy epistrefei to ginomeno kai ayto sthn seira toy sthn main
}// edw stamatatei h sunarthsh.

int pos(int sum) // edw prosppathisa na kanw thn synarthsh gia to an vgalei thetiko arithmo dhldh ginomeno > 0
{
    if (ginomeno > 0) // dhlwsa oti to ginomeno na einai megalhtero apo to 0 gia na einai thetiko
    {
        return 1; // an einai megalhtero toy 0 na to vgalei True, dhlaldh oti isxuei.
    }
} // edw stamatatei h sunarthsh.

int neg(int sum) // edw prosppathisa na kanw thn synarthsh gia to an vgalei arnitiko arithmo dhldh ginomeno < 0
{
    if (ginomeno < 0) // dhlwsa oti to ginomeno na einai mikrotero apo to 0 gia na einai Arnitiko
    {
        {
            return 1; // an einai mikrotero toy 0 na to vgalei True, dhlaldh oti isxuei.
        }
    }

    int null(int sum) // edw prosppathisa na kanw thn synarthsh gia to an vgalei mideniko  dhldh ginomeno = 0
    {
        if (ginomeno == 0) // dhlwsa oti to ginomeno na einai iso apo to 0 gia na einai mideniko
        {
            return 1; // an einai mikrotero toy 0 na to vgalei True, dhlaldh oti isxuei.
        }
    } // edw stamatatei h sunarthsh.


    //Prospathisa kai den ta katafera. Den exw katalavei kala tis synarthseis. An tha mporouses na mas kaneis merika paradeigmata tha to ektimoysa.
    //-----------------------------------------------Moustokouloura--------------------------------------------------------------------------------
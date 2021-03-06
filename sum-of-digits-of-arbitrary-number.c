//    A C program to calculate the sum of the digits of an arbitrary 
//    integer, with footnoted documentation.

//    (A)
#include <stdio.h>

int main (void)
{

/* (B) */ int 
/* (C) */ arb,
/* (D) */ cache = 0,
/* (E) */ digitsum =0;

/* (F) */ printf ("What number do you want? ");
/* (G) */ scanf ("%i", &arb);

/* (H) */ while ( arb != 0 ) 
                {
/* (I) */       cache = arb % 10;
/* (J) */       digitsum += cache ;
/* (K) */       arb = arb / 10;
                }

/* (L) */ printf ("The sum of all the digits is %i. \n\n", digitsum);

// (M)
    return 0;
}

//    (A)
//    Do the usual C bits.

//    (B)
//    Declare Some integer(s):
//    (C) arb, to be the arbitrary integer.
//    (D) cache to be the resulting sum of the process and 
//    initialized at zero.

//    (F) Request some arbitrary integer called arb.

//    (G) Get some arbitrary integer called arb.

//    (H)  LOOP
//    Carve off the assorted digits with modulo:
//    While the current value of arb is not equal to zero:
//    LOOPSTART

//    (I) digitsum tobe arb modulo ten, to split off the final current digit of arb.

//    (J) arb tobe arb divided by ten, to move a decimal point over in arb 
//    for the next round of modulo calculation.

//    LOOPEND

//    (K)
//    Print the completed value of digitsum

//    (L)
//    There is no return.

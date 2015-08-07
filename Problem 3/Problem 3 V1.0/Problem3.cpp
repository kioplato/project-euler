#include <stdio.h>
#include <stdlib.h>

int main()
{
        signed long numm = 60085;
        printf("%ld\n", numm);

        signed long counter1;
        signed long counter2;
        int dividedTimes;

        counter2 = 1;
        counter1 = 1;
        dividedTimes = 0;

        for(counter1 = 1; counter1 <= (numm/2); counter1++)
        {
                //printf("Mpike sto proto gia\n");
                dividedTimes = 0;
                for(counter2 = 1; counter2 <= counter1; counter2++)
                {
                        //printf("Mpike sto deftero gia. anixnevei an einai protos arithmos\n");
                        if(counter1 % counter2 == 0)
                        {
                                dividedTimes++;
                        }
                }
                if(dividedTimes == 2)
                {
                        //printf("Einai protos arithmos");
                        for(counter2 = 1; counter2 <= (numm/2); counter2++)
                        {
                                //printf("Mpike ston vronxo pou koitagei gia polaplasiasmo");
                                if(counter1 * counter2 == numm)
                                {
                                        printf("%Ld\n", counter1);
                                }
                        }
            	}
    	}
    	return 5;
}


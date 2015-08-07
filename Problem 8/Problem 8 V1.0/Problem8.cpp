#include <stdio.h>

int main()
{
        char line[] = "731671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184385861560789112949495459501737958331952853208$
        unsigned long long maxAthrisma = 0;
        unsigned long long athrisma = 1;
        int counter = 0;
        int metritis = 0;
        while(line[counter] != '\0')
        {
                athrisma = 1;
                if(counter != 987)
                {

                        for(metritis = 0; metritis < 13; metritis++)
                        {
                                printf("%d\n", (int)(line[counter + metritis]));
                                athrisma = athrisma * ((int)line[counter + metritis] - 48);
                        }
                }
                if(counter == 987)
                {
                        break;
                }
                //printf("%d\n", athrisma);
                if(athrisma > maxAthrisma)
                {
                        maxAthrisma = athrisma;
                }
                counter++;
        }
        printf("Max: %Lui\n", maxAthrisma);
        return 0;
}


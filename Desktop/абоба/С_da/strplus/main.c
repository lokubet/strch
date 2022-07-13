#include <stdlib.h>
#include <stdio.h>
char* strch(char * str1, char * str2)
{
    int tmp, tmp2;
    for (int i = 0; str1[i] != 0;i++)
    tmp = i;
    for (int j = 0; str2[j] != 0;j++)
    {
    tmp2 = j;
    }
    char *z = (char *)malloc(tmp+tmp2);

    if (NULL == z)
    {
        printf("nea");
        exit(1);
    } 
    int proverka = 0;
    if (tmp > tmp2)
    {
        for (int i = 0; i != tmp; i++)
    {
        if (str2[i] == '\0' || proverka)
        proverka = 0;
        else
        {
            z[tmp+i] = str2[i];
        }
        z[i]= str1[i];
        z[tmp+i+1] = '\0';
    }
    }
    else
    {
        for (int i = 0; i <= tmp2; i++)
    {
        z[tmp + i +1]= str2[i];
        z[tmp+i+2] = '\0';
        if (str1[i] == '\0' || proverka)
        proverka = 0;
        else
        {
            z[i] = str1[i];
        }
        

    }


    }

    
    return z;
}
int main(int ac,char* av[])
{
    
    char a[] = "Wa2135643574687968oiyturdfsgnb";
    char st[] = "Kj";
    printf("%s",strch(a,st));
    
}
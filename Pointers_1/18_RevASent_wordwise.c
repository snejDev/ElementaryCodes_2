// India is great <-> great is India

#include <stdio.h>
#include <string.h>

void reverse(char *s,int len)
{
    char w[50] = "";
    char f[50] = "";
    int j = 0;

    for(int i=0;i<=len;i++)
    {
        if((*(s+i)!=' ') && (*(s+i)!='\0'))
        {
            *(w+j) = *(s+i);
            j++;
        }
        else
        {
            *(w+j)='\0';
            strcat(w," ");

            char temp[50]="";
            strcpy(temp,f);
            strcpy(f,w);
            strcat(f,temp);

            strcpy(w,"");
            j = 0;
        }
    }
    printf("%s",f);
}

int main(void)
{
    char s[50];

    printf("Enter a sentence: ");
    scanf("%[^\n]",s);

    reverse(s,strlen(s));

    return 0;
}
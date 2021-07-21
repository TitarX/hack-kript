#include<stdio.h>
#include<conio.h>

int main()
{
        clrscr();

        long begin=300001L;
        long end=999999L;
        long divider=3L;

        for(;begin<=end;begin++)
        {
                if(!(begin%3L))
                {
                        long summ=begin;
                        long slag=begin/3;

                        long slag1=slag/100000L;
                        long slag2=(slag/10000L)%10L;
                        long slag3=(slag/1000L)%10L;
                        long slag4=(slag/100L)%10L;
                        long slag5=(slag/10L)%10L;
                        long slag6=slag%10L;
                        long summ1=summ/100000L;
                        long summ2=(summ/10000L)%10L;
                        long summ3=(summ/1000L)%10L;
                        long summ4=(summ/100L)%10L;
                        long summ5=(summ/10L)%10L;
                        long summ6=summ%10L;

                        if((slag1!=summ1)&&(slag2!=summ1)&&(slag3!=summ1)&&(slag4!=summ1)&&(slag5==summ1)&&(slag6!=summ1))
                        {
                                if((slag1!=summ2)&&(slag2!=summ2)&&(slag3!=summ2)&&(slag4!=summ2)&&(slag5!=summ2)&&(slag6!=summ2))
                                {
                                        if((slag1!=summ3)&&(slag2!=summ3)&&(slag3!=summ3)&&(slag4!=summ3)&&(slag5==summ3)&&(slag6!=summ3))
                                        {
                                                if((slag1!=summ4)&&(slag2!=summ4)&&(slag3!=summ4)&&(slag4!=summ4)&&(slag5!=summ4)&&(slag6==summ4))
                                                {
                                                        if((slag1!=summ5)&&(slag2!=summ5)&&(slag3!=summ5)&&(slag4!=summ5)&&(slag5!=summ5)&&(slag6!=summ5))
                                                        {
                                                                if((slag1!=summ6)&&(slag2!=summ6)&&(slag3!=summ6)&&(slag4!=summ6)&&(slag5!=summ6)&&(slag6!=summ6))
                                                                {
                                                                        printf("%ld+%ld+%ld=%ld\n",slag,slag,slag,summ);
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
        
        getchar();
        return 0;
}


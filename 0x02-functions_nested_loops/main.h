#ifndef MAIN_H
#define MAIN_H

int _putchar(void)
{
	int line[7];
        int i;

        line[0] = 95;
        line[1] = 112;
        line[2] = 117;
        line[3] = 116;
        line[4] = 99;
        line[5] = 104;
        line[6] = 97;
        line[7] = 114;

        for (i = 0 ;i <= 7 ;i++)
        {
                putchar(line[i]);
        }
        putchar(10);
        return (0);
}
#endif

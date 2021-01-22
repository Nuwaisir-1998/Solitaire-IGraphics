#define _CRT_SECURE_NO_WARNINGS
# include "iGraphics.h"


int n, x, y, xsA, xs2, xs3, xs4, xs5, xs6, xs7, xs8, xs9, xs10, xsj, xsq, xsk, moded = 0;

int ysA, ys2, ys3, ys4, ys5, ys6, ys7, ys8, ys9, ys10, ysj, ysq, ysk;
int ycA, yc2, yc3, yc4, yc5, yc6, yc7, yc8, yc9, yc10, ycj, ycq, yck;
int ydA, yd2, yd3, yd4, yd5, yd6, yd7, yd8, yd9, yd10, ydj, ydq, ydk;
int yhA, yh2, yh3, yh4, yh5, yh6, yh7, yh8, yh9, yh10, yhj, yhq, yhk;

int xcA, xc2, xc3, xc4, xc5, xc6, xc7, xc8, xc9, xc10, xcj, xcq, xck;
int xdA, xd2, xd3, xd4, xd5, xd6, xd7, xd8, xd9, xd10, xdj, xdq, xdk;
int xhA, xh2, xh3, xh4, xh5, xh6, xh7, xh8, xh9, xh10, xhj, xhq, xhk, sata=0, t1x = 500, t1y = 300, vcf=0, olium = 0;

int xr, yr, t1 = 400, t2 = 700, pos[52][3], re[52][4], vc=0, lmb=0, rmb=0, sthan[52], apex[52], biga[20][7], bp[52][2], antcpy[52][2], B[20][7];
int clik[52], fiar[52], last[52], fin[52], acpy[52], sit[52];
int XSA, YSA, vaf = 0;
int modesA = 0, npr=-10, vgh = 0, pc1, tC1, count=0, kita = 0;
int len = 0, a[52];
int i, j, k, uv=0, dhur;
time_t s;

int norep(int a[],int n,int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(a[i] == n)
        {
            return 1;
            if(a[i]==n-1 || len==0 || n==0)
            {
                return -1;
            }
        }
    }
}

int vuj(int v)
{
    if(v == 0) return 100;
    if(v == 1 || v == 2) return 250;
    if(v == 3 || v == 4 || v == 5) return 400;
    if(v == 6 || v == 7 || v == 8 || v == 9) return 550;
    if(v == 10 || v == 11 || v == 12 || v == 13 || v == 14) return 700;
    if(v == 15 || v == 16 || v == 17 || v == 18 || v == 19 || v == 20) return 850;
    if(v == 21 || v == 22 || v == 23 || v == 24 || v == 25 || v == 26 || v == 27) return 1000;

}

int koti(int k)
{
    if(k == 0 || k == 1 || k == 3 || k == 6 || k == 10 || k == 15 || k == 21) return 550;
    if(k == 2 || k == 4 || k == 7 || k == 11 || k == 16 || k == 22) return 525;
    if(k == 5 || k == 8 || k == 12 || k == 17 || k == 23) return 500;
    if(k == 9 || k == 13 || k == 18 || k == 24) return 475;
    if(k == 14 || k == 19 || k == 25 ) return 450;
    if(k == 20 || k == 26) return 425;
    if(k == 27) return 400;
}

int khoj(int x, int y)
{
    int i;
    for(i=0; i<52; i++)
    {
        if(re[i][0] == x && re[i][1] == y)
        {
            return 1;
        }
        else if(i == 51)
        {
            return 0;
        }
    }
}
int mousetest(int x, int y)
{
    if(x >= pos[0][0] && x <= pos[0][1]+100 && y >= pos[0][1] && y <= pos[0][1]+150)
    {
        return 1;
    }
    else return 0;
}
/*
	function iDraw() is called again and again by the system.
	*/
void iDraw()
{
    //place your drawing codes here

    iClear();
    int i, m, l1 = 100;
    /*srand((unsigned) time(&s));
    n = rand() % 51;*/


    iSetColor(0,0,0);
    iFilledRectangle(0,0,1800,900);

    iSetColor(75,25, 25);
    iFilledRectangle(00,0, 17000, 3000);
    //iShowBMP(t1x, t1y, "cb.bmp");
    //iShowBMP(t1x, t1y - 25, "cb.bmp");
    for(i=1; i<=8; i++)
    {
        iSetColor(20, 200, 0);
        iLine(l1,50,l1,150);
        l1 = l1 + 100;
    }

    if(biga[0][1] == 2)
        iShowBMP(250, 550, "cb.bmp");
    if(biga[0][2] == 2)
        iShowBMP(400, 550, "cb.bmp");
    if(biga[1][2] == 2)
        iShowBMP(400, 525, "cb.bmp");
    if(biga[0][3] == 2)
        iShowBMP(550, 550, "cb.bmp");
    if(biga[1][3] == 2)
        iShowBMP(550, 525, "cb.bmp");
    if(biga[2][3] == 2)
        iShowBMP(550, 500, "cb.bmp");
    if(biga[0][4] == 2)
        iShowBMP(700, 550, "cb.bmp");
    if(biga[1][4] == 2)
        iShowBMP(700, 525, "cb.bmp");
    if(biga[2][4] == 2)
        iShowBMP(700, 500, "cb.bmp");
    if(biga[3][4] == 2)
        iShowBMP(700, 475, "cb.bmp");
    if(biga[0][5] == 2)
        iShowBMP(850, 550, "cb.bmp");
    if(biga[1][5] == 2)
        iShowBMP(850, 525, "cb.bmp");
    if(biga[2][5] == 2)
        iShowBMP(850, 500, "cb.bmp");
    if(biga[3][5] == 2)
        iShowBMP(850, 475, "cb.bmp");
    if(biga[4][5] == 2)
        iShowBMP(850, 450, "cb.bmp");
    if(biga[0][6] == 2)
        iShowBMP(1000, 550, "cb.bmp");
    if(biga[1][6] == 2)
        iShowBMP(1000, 525, "cb.bmp");
    if(biga[2][6] == 2)
        iShowBMP(1000, 500, "cb.bmp");
    if(biga[3][6] == 2)
        iShowBMP(1000, 475, "cb.bmp");
    if(biga[4][6] == 2)
        iShowBMP(1000, 450, "cb.bmp");
    if(biga[5][6] == 2)
        iShowBMP(1000, 425, "cb.bmp");


    for(i=0; i<28; i++)
    {
        if(i==0 || i==2 || i==5 || i==9 || i==14 || i==20 || i==27)
            continue;
        if(a[i] == 12)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "sk.bmp");

        }
        if(a[i] == 25)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "ck.bmp");

        }

        if(a[i] == 38)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "dk.bmp");

        }

        if(a[i] == 51)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][01], "hk.bmp");

        }
        if(a[i] == 50)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][01], "hq.bmp");

        }
        if(a[i] == 24)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "cq.bmp");

        }
        if(a[i] == 37)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "dq.bmp");

        }

        if(a[i] == 11)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "sq.bmp");

        }

        if(a[i] == 23)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "cj.bmp");

        }
        if(a[i] == 49)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][01], "hj.bmp");

        }
        if(a[i] == 36)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "dj.bmp");

        }

        if(a[i] == 10)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "sj.bmp");

        }

        if(a[i] == 48)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][01], "h10.bmp");

        }
        if(a[i] == 35)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d10.bmp");

        }
        if(a[i] == 22)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][01], "c10.bmp");

        }
        if(a[i] == 9)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s10.bmp");

        }
        if(a[i] == 8)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s9.bmp");

        }
        if(a[i] == 47)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h9.bmp");

        }
        if(a[i] == 34)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d9.bmp");

        }
        if(a[i] == 21)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][01], "c9.bmp");

        }
        if(a[i] == 46)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h8.bmp");

        }
        if(a[i] == 33)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d8.bmp");

        }
        if(a[i] == 20)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c8.bmp");

        }
        if(a[i] == 7)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s8.bmp");

        }

        if(a[i] == 45)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h7.bmp");

        }
        if(a[i] == 32)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d7.bmp");

        }
        if(a[i] == 19)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c7.bmp");

        }
        if(a[i] == 6)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s7.bmp");

        }

        if(a[i] == 44)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h6.bmp");

        }
        if(a[i] == 31)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d6.bmp");

        }
        if(a[i] == 18)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c6.bmp");
        }
        if(a[i] == 5)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s6.bmp");
        }
        if(a[i] == 43)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h5.bmp");
        }
        if(a[i] == 30)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d5.bmp");
        }
        if(a[i] == 17)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c5.bmp");
        }
        if(a[i] == 4)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s5.bmp");
        }
        if(a[i] == 16)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c4.bmp");
        }
        if(a[i] == 29)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d4.bmp");
        }
        if(a[i] == 42)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h4.bmp");
        }
        if(a[i] == 3)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s4.bmp");

        }

        if(a[i] == 41)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h3.bmp");

        }
        if(a[i] == 28)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d3.bmp");

        }
        if(a[i] == 15)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c3.bmp");
        }
        if(a[i] == 2)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s3.bmp");
        }

        if(a[i] == 14)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "c2.bmp");
        }

        if(a[i] == 1)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "s2.bmp");
        }
        if(a[i] == 40)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "h2.bmp");

        }
        if(a[i] == 27)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "d2.bmp");

        }
        if(a[i] == 0)
        {
            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "sA.bmp");

        }
        if(a[i] == 13)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "cA.bmp");

        }
        if(a[i] == 26)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "dA.bmp");

        }

        if(a[i] == 39)
        {

            if(sthan[a[i]] == 1 && biga[bp[a[i]][0]][bp[a[i]][1]] == 1)
                iShowBMP(pos[a[i]][0], pos[a[i]][1], "hA.bmp");

        }
    }


    for(i=0; i<28; i++)
    {
        if(i!=0 && i!=2 && i!=5 && i!=9 && i!=14 && i!=20 && i!=27)
            continue;

        if(a[i] == 12)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "sk.bmp");

        }
        if(a[i] == 25)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "ck.bmp");

        }
        if(a[i] == 38)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "dk.bmp");

        }

        if(a[i] == 51)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][01], "hk.bmp");
        }

        if(a[i] == 11)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "sq.bmp");

        }
        if(a[i] == 24)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "cq.bmp");

        }
        if(a[i] == 37)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "dq.bmp");

        }
        if(a[i] == 50)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][01], "hq.bmp");

        }
        if(a[i] == 10)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "sj.bmp");

        }
        if(a[i] == 23)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "cj.bmp");

        }
        if(a[i] == 36)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "dj.bmp");

        }
        if(a[i] == 49)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][01], "hj.bmp");

        }

        if(a[i] == 9)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s10.bmp");

        }
        if(a[i] == 22)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][01], "c10.bmp");

        }
        if(a[i] == 35)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d10.bmp");

        }
        if(a[i] == 48)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][01], "h10.bmp");

        }
        if(a[i] == 21)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][01], "c9.bmp");

        }
        if(a[i] == 8)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s9.bmp");

        }
        if(a[i] == 34)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d9.bmp");

        }
        if(a[i] == 47)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h9.bmp");

        }

        if(a[i] == 7)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s8.bmp");

        }
        if(a[i] == 20)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c8.bmp");

        }
        if(a[i] == 33)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d8.bmp");

        }
        if(a[i] == 46)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h8.bmp");

        }

        if(a[i] == 6)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s7.bmp");

        }
        if(a[i] == 19)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c7.bmp");

        }
        if(a[i] == 32)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d7.bmp");

        }
        if(a[i] == 45)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h7.bmp");

        }

        if(a[i] == 5)
        {
            //if(sthan[a[i]] == 1)
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s6.bmp");

        }
        if(a[i] == 18)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c6.bmp");

        }
        if(a[i] == 31)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d6.bmp");

        }
        if(a[i] == 44)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h6.bmp");

        }

        if(a[i] == 4)
        {

            //if(sthan[a[i]] == 1)
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s5.bmp");

        }
        if(a[i] == 17)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c5.bmp");

        }
        if(a[i] == 30)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d5.bmp");

        }
        if(a[i] == 43)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h5.bmp");

        }

        if(a[i] == 3)
        {

            // if(sthan[a[i]] == 1)
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s4.bmp");

        }
        if(a[i] == 16)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c4.bmp");

        }
        if(a[i] == 29)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d4.bmp");

        }
        if(a[i] == 42)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h4.bmp");

        }

        if(a[i] == 2)
        {

            //if(sthan[2] == 1)
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s3.bmp");

        }
        if(a[i] == 15)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c3.bmp");

        }
        if(a[i] == 28)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d3.bmp");

        }
        if(a[i] == 41)
        {

            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h3.bmp");

        }
        if(a[i] == 1)
        {
            //if(sthan[1] == 1)
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "s2.bmp");
        }
        if(a[i] == 14)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "c2.bmp");
        }
        if(a[i] == 27)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "d2.bmp");
        }
        if(a[i] == 40)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "h2.bmp");
        }
        if(a[i] == 0)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "sA.bmp");
        }
        if(a[i] == 13)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "cA.bmp");
        }
        if(a[i] == 26)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "dA.bmp");
        }
        if(a[i] == 39)
        {
            iShowBMP(pos[a[i]][0], pos[a[i]][1], "hA.bmp");
        }
    }

    for(i=1; i<=24; i++)
    {
        if(moded == i)
        {
            if(a[i+27] == 0)
            {
                /*xsA = 200;
                ysA = 700;*/
                //if(sthan[0] == 1)
                iShowBMP(pos[0][0], pos[0][1], "sA.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 1)
            {
                /*xs2 = 200;
                ys2 = 700;*/
                //if(sthan[1] == 1)
                iShowBMP(pos[1][0], pos[1][1], "s2.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 2)
            {
                /*xs3 = 200;
                ys3 = 700;*/
                //if(sthan[2] == 1)
                iShowBMP(pos[2][0], pos[2][1], "s3.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 3)
            {
                /*xs4 = 200;
                ys4 = 700;*/
                //if(sthan[3] == 1)
                iShowBMP(pos[3][0], pos[3][1], "s4.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 4)
            {
                /*xs5 = 200;
                ys5 = 700;*/
                //if(sthan[4] == 1)
                iShowBMP(pos[4][0], pos[4][1], "s5.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 5)
            {
                /*xs6 = 200;
                ys6 = 700;*/
                //if(sthan[5] == 1)
                iShowBMP(pos[5][0], pos[5][1], "s6.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 6)
            {
                /* xs7 = 200;
                 ys7 = 700;*/
                //if(sthan[6] == 1)
                iShowBMP(pos[6][0], pos[6][1], "s7.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 7)
            {
                /*xs8 = 200;
                ys8 = 700;*/
                //if(sthan[7] == 1)
                iShowBMP(pos[7][0], pos[7][1], "s8.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 8)
            {
                /* xs9 = 200;
                 ys9 = 700;*/
                //if(sthan[8] == 1)
                iShowBMP(pos[8][0], pos[8][1], "s9.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 9)
            {
                /*xs10 = 200;
                ys10 = 700;*/
                //if(sthan[9] == 1)
                iShowBMP(pos[9][0], pos[9][1], "s10.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 10)
            {
                /*xsj = 200;
                ysj = 700;*/
                //if(sthan[10] == 1)
                iShowBMP(pos[10][0], pos[10][1], "sj.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 11)
            {
                /*xsq = 200;
                ysq = 700;*/
                //if(sthan[11] == 1)
                iShowBMP(pos[11][0], pos[11][1], "sq.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 12)
            {
                /* xsk = 200;
                 ysk = 700;*/
                //if(sthan[12] == 1)
                iShowBMP(pos[12][0], pos[12][1], "sk.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 13)
            {
                /*xcA = 200;
                ycA = 700;*/
                iShowBMP(pos[13][0], pos[13][1], "cA.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 14)
            {
                /*xc2 = 200;
                yc2 = 700;*/
                iShowBMP(pos[14][0], pos[14][1], "c2.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 15)
            {
                /*xc3 = 200;
                yc3 = 700;*/
                iShowBMP(pos[15][0], pos[15][1], "c3.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 16)
            {
                /*xc4 = 200;
                yc4 = 700;*/
                iShowBMP(pos[16][0], pos[16][1], "c4.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 17)
            {
                /*xc5 = 200;
                yc5 = 700;*/
                iShowBMP(pos[17][0], pos[17][1], "c5.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 18)
            {
                /*xc6 = 200;
                yc6 = 700;*/
                iShowBMP(pos[18][0], pos[18][1], "c6.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 19)
            {
                /*xc7 = 200;
                yc7 = 700;*/
                iShowBMP(pos[19][0], pos[19][1], "c7.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 20)
            {
                /*xc8 = 200;
                yc8 = 700;*/
                iShowBMP(pos[20][0], pos[20][1], "c8.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 21)
            {
                /*xc9 = 200;
                yc9 = 700;*/
                iShowBMP(pos[21][0], pos[21][1], "c9.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 22)
            {
                /*xc10 = 200;
                yc10 = 700;*/
                iShowBMP(pos[22][0], pos[22][1], "c10.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 23)
            {
                /*xcj = 200;
                ycj = 700;*/
                iShowBMP(pos[23][0], pos[23][1], "cj.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 24)
            {
                /*xcq = 200;
                ycq = 700;*/
                iShowBMP(pos[24][0], pos[24][1], "cq.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 25)
            {
                /*xck = 200;
                yck = 700;*/
                iShowBMP(pos[25][0], pos[25][1], "ck.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 26)
            {
                /*xdA = 200;
                ydA = 700;*/
                iShowBMP(pos[26][0], pos[26][1], "dA.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 27)
            {
                /* xd2 = 200;
                 yd2 = 700;*/
                iShowBMP(pos[27][0], pos[27][1], "d2.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 28)
            {
                /* xd3 = 200;
                 yd3 = 700;*/
                iShowBMP(pos[28][0], pos[28][1], "d3.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 29)
            {
                /*xd4 = 200;
                yd4 = 700;*/
                iShowBMP(pos[29][0], pos[29][1], "d4.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 30)
            {
                /*xd5 = 200;
                yd5 = 700;*/
                iShowBMP(pos[30][0], pos[30][1], "d5.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 31)
            {
                /* xd6 = 200;
                 yd6 = 700;*/
                iShowBMP(pos[31][0], pos[31][1], "d6.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 32)
            {
                /* xd7 = 200;
                 yd7 = 700;*/
                iShowBMP(pos[32][0], pos[32][1], "d7.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 33)
            {
                /*xd8 = 200;
                yd8 = 700;*/
                iShowBMP(pos[33][0], pos[33][1], "d8.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 34)
            {
                /*xd9 = 200;
                yd9 = 700;*/
                iShowBMP(pos[34][0], pos[34][1], "d9.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 35)
            {
                /*xd10 = 200;
                yd10 = 700;*/
                iShowBMP(pos[35][0], pos[35][1], "d10.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 36)
            {
                /*xdj = 200;
                 ydj = 725;*/
                iShowBMP(pos[36][0], pos[36][1], "dj.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 37)
            {
                /*xdq = 200;
                ydq = 700;*/
                iShowBMP(pos[37][0], pos[37][1], "dq.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 38)
            {
                /* xdk = 200;
                 ydk = 700;*/
                iShowBMP(pos[38][0], pos[38][1], "dk.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 39)
            {
                /*xhA = 200;
                yhA = 700;*/
                iShowBMP(pos[39][0], pos[39][1], "hA.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 40)
            {
                /* xh2 = 200;
                 yh2 = 700;*/
                iShowBMP(pos[40][0], pos[40][1], "h2.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 41)
            {
                /*xh3 = 200;
                yh3 = 700;*/
                iShowBMP(pos[41][0], pos[41][1], "h3.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 42)
            {
                /*xh4 = 200;
                yh4 = 700;*/
                iShowBMP(pos[42][0], pos[42][1], "h4.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 43)
            {
                /*xh5 = 200;
                yh5 = 700;*/
                iShowBMP(pos[43][0], pos[43][1], "h5.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 44)
            {
                /*xh6 = 200;
                yh6 = 700;*/
                iShowBMP(pos[44][0], pos[44][1], "h6.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 45)
            {
                /*xh7 = 200;
                yh7 = 700;*/
                iShowBMP(pos[45][0], pos[45][1], "h7.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 46)
            {
                /*xh8 = 200;
                yh8 = 700;*/
                iShowBMP(pos[46][0], pos[46][1], "h8.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 47)
            {
                /*xh9 = 200;
                yh9 = 700;*/
                iShowBMP(pos[47][0], pos[47][1], "h9.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 48)
            {
                /*xh10 = 200;
                yh10 = 700;*/
                iShowBMP(pos[48][0], pos[48][1], "h10.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 49)
            {
                /*xhj = 200;
                yhj = 700;*/
                iShowBMP(pos[49][0], pos[49][1], "hj.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 50)
            {
                /* xhq = 200;
                 yhq = 700;*/
                iShowBMP(pos[50][0], pos[50][1], "hq.bmp");
                fiar[a[i+27]] = 0;
            }
            if(a[i+27] == 51)
            {
                /*xhk = 200;
                yhk = 700;*/
                iShowBMP(pos[51][0], pos[51][1], "hk.bmp");
                fiar[a[i+27]] = 0;
            }
        }
    }
    xr = 70;
    yr = 725;

    iShowBMP(xr, yr, "cb.bmp");

    if(sthan[12] == 0 && fiar[12] == 1)
    {
        iShowBMP(pos[12][0], pos[12][1], "sk.bmp");
    }
    if(sthan[25] == 0 && fiar[25] == 1)
    {
        iShowBMP(pos[25][0], pos[25][1], "ck.bmp");
    }
    if(sthan[38] == 0 && fiar[38] == 1)
    {
        iShowBMP(pos[38][0], pos[38][1], "dk.bmp");
    }
    if(sthan[51] == 0 && fiar[51] == 1)
    {
        iShowBMP(pos[51][0], pos[51][1], "hk.bmp");
    }
    if(sthan[11] == 0 && fiar[11] == 1)
    {
        iShowBMP(pos[11][0], pos[11][1], "sq.bmp");
    }
    if(sthan[50] == 0 && fiar[50] == 1)
    {
        iShowBMP(pos[50][0], pos[50][1], "hq.bmp");
    }
    if(sthan[37] == 0 && fiar[37] == 1)
    {
        iShowBMP(pos[37][0], pos[37][1], "dq.bmp");
    }
    if(sthan[24] == 0 && fiar[24] == 1)
    {
        iShowBMP(pos[24][0], pos[24][1], "cq.bmp");
    }

    if(sthan[49] == 0 && fiar[49] == 1)
    {
        iShowBMP(pos[49][0], pos[49][1], "hj.bmp");
    }
    if(sthan[36] == 0 && fiar[36] == 1)
    {
        iShowBMP(pos[36][0], pos[36][1], "dj.bmp");
    }
    if(sthan[23] == 0 && fiar[23] == 1)
    {
        iShowBMP(pos[23][0], pos[23][1], "cj.bmp");
    }
    if(sthan[10] == 0 && fiar[10] == 1)
    {
        iShowBMP(pos[10][0], pos[10][1], "sj.bmp");
    }

    if(sthan[48] == 0 && fiar[48] == 1)
    {
        iShowBMP(pos[48][0], pos[48][1], "h10.bmp");
    }
    if(sthan[35] == 0 && fiar[35] == 1)
    {
        iShowBMP(pos[35][0], pos[35][1], "d10.bmp");
    }
    if(sthan[22] == 0 && fiar[22] == 1)
    {
        iShowBMP(pos[22][0], pos[22][1], "c10.bmp");
    }
    if(sthan[9] == 0 && fiar[9] == 1)
    {
        iShowBMP(pos[9][0], pos[9][1], "s10.bmp");
    }

    if(sthan[47] == 0 && fiar[47] == 1)
    {
        iShowBMP(pos[47][0], pos[47][1], "h9.bmp");
    }
    if(sthan[34] == 0 && fiar[34] == 1)
    {
        iShowBMP(pos[34][0], pos[34][1], "d9.bmp");
    }
    if(sthan[21] == 0 && fiar[21] == 1)
    {
        iShowBMP(pos[21][0], pos[21][1], "c9.bmp");
    }
    if(sthan[8] == 0 && fiar[8] == 1)
    {
        iShowBMP(pos[8][0], pos[8][1], "s9.bmp");
    }

    if(sthan[46] == 0 && fiar[46] == 1)
    {
        iShowBMP(pos[46][0], pos[46][1], "h8.bmp");
    }
    if(sthan[33] == 0 && fiar[33] == 1)
    {
        iShowBMP(pos[33][0], pos[33][1], "d8.bmp");
    }
    if(sthan[20] == 0 && fiar[20] == 1)
    {
        iShowBMP(pos[20][0], pos[20][1], "c8.bmp");
    }
    if(sthan[7] == 0 && fiar[7] == 1)
    {
        iShowBMP(pos[7][0], pos[7][1], "s8.bmp");
    }

    if(sthan[45] == 0 && fiar[45] == 1)
    {
        iShowBMP(pos[45][0], pos[45][1], "h7.bmp");
    }
    if(sthan[32] == 0 && fiar[32] == 1)
    {
        iShowBMP(pos[32][0], pos[32][1], "d7.bmp");
    }
    if(sthan[19] == 0 && fiar[19] == 1)
    {
        iShowBMP(pos[19][0], pos[19][1], "c7.bmp");
    }
    if(sthan[6] == 0 && fiar[6] == 1)
    {
        iShowBMP(pos[6][0], pos[6][1], "s7.bmp");
    }

    if(sthan[44] == 0 && fiar[44] == 1)
    {
        iShowBMP(pos[44][0], pos[44][1], "h6.bmp");
    }
    if(sthan[31] == 0 && fiar[31] == 1)
    {
        iShowBMP(pos[31][0], pos[31][1], "d6.bmp");
    }
    if(sthan[18] == 0 && fiar[18] == 1)
    {
        iShowBMP(pos[18][0], pos[18][1], "c6.bmp");
    }
    if(sthan[5] == 0 && fiar[5] == 1)
    {
        iShowBMP(pos[5][0], pos[5][1], "s6.bmp");
    }


    if(sthan[17] == 0 && fiar[17] == 1)
    {
        iShowBMP(pos[17][0], pos[17][1], "c5.bmp");
    }

    if(sthan[4] == 0 && fiar[4] == 1)
    {
        iShowBMP(pos[4][0], pos[4][1], "s5.bmp");
    }
    if(sthan[30] == 0 && fiar[30] == 1)
    {
        iShowBMP(pos[30][0], pos[30][1], "d5.bmp");
    }
    if(sthan[43] == 0 && fiar[43] == 1)
    {
        iShowBMP(pos[43][0], pos[43][1], "h5.bmp");
    }

    if(sthan[3] == 0 && fiar[3] == 1)
    {
        iShowBMP(pos[3][0], pos[3][1], "s4.bmp");
    }
    if(sthan[42] == 0 && fiar[42] == 1)
    {
        iShowBMP(pos[42][0], pos[42][1], "h4.bmp");
    }
    if(sthan[16] == 0 && fiar[16] == 1)
    {
        iShowBMP(pos[16][0], pos[16][1], "c4.bmp");
    }
    if(sthan[29] == 0 && fiar[29] == 1)
    {
        iShowBMP(pos[29][0], pos[29][1], "d4.bmp");
    }

    if(sthan[2] == 0 && fiar[2] == 1)
    {
        iShowBMP(pos[2][0], pos[2][1], "s3.bmp");
    }
    if(sthan[15] == 0 && fiar[15] == 1)
    {
        iShowBMP(pos[15][0], pos[15][1], "c3.bmp");
    }
    if(sthan[28] == 0 && fiar[28] == 1)
    {
        iShowBMP(pos[28][0], pos[28][1], "d3.bmp");
    }
    if(sthan[41] == 0 && fiar[41] == 1)
    {
        iShowBMP(pos[41][0], pos[41][1], "h3.bmp");
    }

    if(sthan[40] == 0 && fiar[40] == 1)
    {
        iShowBMP(pos[40][0], pos[40][1], "h2.bmp");
    }
    if(sthan[27] == 0 && fiar[27] == 1)
    {
        iShowBMP(pos[27][0], pos[27][1], "d2.bmp");
    }
    if(sthan[14] == 0 && fiar[14] == 1)
    {
        iShowBMP(pos[14][0], pos[14][1], "c2.bmp");
    }
    if(sthan[1] == 0 && fiar[1] == 1)
    {
        iShowBMP(pos[1][0], pos[1][1], "s2.bmp");
    }
    if(sthan[39] == 0 && fiar[39] == 1)
    {
        iShowBMP(pos[39][0], pos[39][1], "hA.bmp");
    }
    if(sthan[26] == 0 && fiar[26] == 1)
    {
        iShowBMP(pos[26][0], pos[26][1], "dA.bmp");
    }
    if(sthan[13] == 0 && fiar[13] == 1)
    {
        iShowBMP(pos[13][0], pos[13][1], "cA.bmp");
    }
    if(sthan[0] == 0 && fiar[0] == 1)
    {
        iShowBMP(pos[0][0], pos[0][1], "sA.bmp");
    }

    // iShowBMP(t1, t2, "sk.bmp");
    if(apex[39] == 2)// && (lmb == 1 && apex[39]==1))
    {
        iShowBMP(pos[39][0], pos[39][1], "hA.bmp");
    }
    if(apex[26] == 2)// && (lmb == 1 && apex[26]==1))
    {
        iShowBMP(pos[26][0], pos[26][1], "dA.bmp");
    }
    if(apex[13] == 2)// && (lmb == 1 && apex[13]==1))
    {
        iShowBMP(pos[13][0], pos[13][1], "cA.bmp");
    }
    if(apex[0] == 2)// && (lmb == 1 && apex[0]==1))
    {
        iShowBMP(pos[0][0], pos[0][1], "sA.bmp");
    }
    if(apex[40] == 2)
    {
        iShowBMP(pos[40][0], pos[40][1], "h2.bmp");
    }
    if(apex[27] == 2)
    {
        iShowBMP(pos[27][0], pos[27][1], "d2.bmp");
    }
    if(apex[14] == 2)
    {
        iShowBMP(pos[14][0], pos[14][1], "c2.bmp");
    }
    if(apex[1] == 2)
    {
        iShowBMP(pos[1][0], pos[1][1], "s2.bmp");
    }

    if(apex[2] == 2)
    {
        iShowBMP(pos[2][0], pos[2][1], "s3.bmp");
    }
    if(apex[15] == 2)
    {
        iShowBMP(pos[15][0], pos[15][1], "c3.bmp");
    }
    if(apex[28] == 2)
    {
        iShowBMP(pos[28][0], pos[28][1], "d3.bmp");
    }
    if(apex[41] == 2)
    {
        iShowBMP(pos[41][0], pos[41][1], "h3.bmp");
    }

    if(apex[3] == 2)
    {
        iShowBMP(pos[3][0], pos[3][1], "s4.bmp");
    }
    if(apex[42] == 2)
    {
        iShowBMP(pos[42][0], pos[42][1], "h4.bmp");
    }
    if(apex[16] == 2)
    {
        iShowBMP(pos[16][0], pos[16][1], "c4.bmp");
    }
    if(apex[29] == 2)
    {
        iShowBMP(pos[29][0], pos[29][1], "d4.bmp");
    }

    if(apex[17] == 2)
    {
        iShowBMP(pos[17][0], pos[17][1], "c5.bmp");
    }

    if(apex[4] == 2)
    {
        iShowBMP(pos[4][0], pos[4][1], "s5.bmp");
    }
    if(apex[30] == 2)
    {
        iShowBMP(pos[30][0], pos[30][1], "d5.bmp");
    }
    if(apex[43] == 2)
    {
        iShowBMP(pos[43][0], pos[43][1], "h5.bmp");
    }

    if(apex[44] == 2)
    {
        iShowBMP(pos[44][0], pos[44][1], "h6.bmp");
    }
    if(apex[31] == 2)
    {
        iShowBMP(pos[31][0], pos[31][1], "d6.bmp");
    }
    if(apex[18] == 2)
    {
        iShowBMP(pos[18][0], pos[18][1], "c6.bmp");
    }
    if(apex[5] == 2)
    {
        iShowBMP(pos[5][0], pos[5][1], "s6.bmp");
    }

    if(apex[45] == 2)
    {
        iShowBMP(pos[45][0], pos[45][1], "h7.bmp");
    }
    if(apex[32] == 2)
    {
        iShowBMP(pos[32][0], pos[32][1], "d7.bmp");
    }
    if(apex[19] == 2)
    {
        iShowBMP(pos[19][0], pos[19][1], "c7.bmp");
    }
    if(apex[6] == 2)
    {
        iShowBMP(pos[6][0], pos[6][1], "s7.bmp");
    }

    if(apex[46] == 2)
    {
        iShowBMP(pos[46][0], pos[46][1], "h8.bmp");
    }
    if(apex[33] == 2)
    {
        iShowBMP(pos[33][0], pos[33][1], "d8.bmp");
    }
    if(apex[20] == 2)
    {
        iShowBMP(pos[20][0], pos[20][1], "c8.bmp");
    }
    if(apex[7] == 2)
    {
        iShowBMP(pos[7][0], pos[7][1], "s8.bmp");
    }

    if(apex[47] == 2)
    {
        iShowBMP(pos[47][0], pos[47][1], "h9.bmp");
    }
    if(apex[34] == 2)
    {
        iShowBMP(pos[34][0], pos[34][1], "d9.bmp");
    }
    if(apex[21] == 2)
    {
        iShowBMP(pos[21][0], pos[21][1], "c9.bmp");
    }
    if(apex[8] == 2)
    {
        iShowBMP(pos[8][0], pos[8][1], "s9.bmp");
    }

    if(apex[48] == 2)
    {
        iShowBMP(pos[48][0], pos[48][1], "h10.bmp");
    }
    if(apex[35] == 2)
    {
        iShowBMP(pos[35][0], pos[35][1], "d10.bmp");
    }
    if(apex[22] == 2)
    {
        iShowBMP(pos[22][0], pos[22][1], "c10.bmp");
    }
    if(apex[9] == 2)
    {
        iShowBMP(pos[9][0], pos[9][1], "s10.bmp");
    }

    if(apex[49] == 2)
    {
        iShowBMP(pos[49][0], pos[49][1], "hj.bmp");
    }
    if(apex[36] == 2)
    {
        iShowBMP(pos[36][0], pos[36][1], "dj.bmp");
    }
    if(apex[23] == 2)
    {
        iShowBMP(pos[23][0], pos[23][1], "cj.bmp");
    }
    if(apex[10] == 2)
    {
        iShowBMP(pos[10][0], pos[10][1], "sj.bmp");
    }

    if(apex[11] == 2)
    {
        iShowBMP(pos[11][0], pos[11][1], "sq.bmp");
    }
    if(apex[50] == 2)
    {
        iShowBMP(pos[50][0], pos[50][1], "hq.bmp");
    }
    if(apex[37] == 2)
    {
        iShowBMP(pos[37][0], pos[37][1], "dq.bmp");
    }
    if(apex[24] == 2)
    {
        iShowBMP(pos[24][0], pos[24][1], "cq.bmp");
    }

    if(apex[12] == 2)
    {
        iShowBMP(pos[12][0], pos[12][1], "sk.bmp");
    }
    if(apex[25] == 2)
    {
        iShowBMP(pos[25][0], pos[25][1], "ck.bmp");
    }
    if(apex[38] == 2)
    {
        iShowBMP(pos[38][0], pos[38][1], "dk.bmp");
    }
    if(apex[51] == 2)
    {
        iShowBMP(pos[51][0], pos[51][1], "hk.bmp");
    }

    /*for(i=13;i<26;i++){
        if(last[i] == 1){
            iShowBMP(i*5+100, 380, "cb.bmp");
            iText(i*5+100, 380,"eije");
        }
    }*/




    ///drag///







    ///..................///
///SPADE///.....................................
    for(i=0; i<13; i++)
    {
        if(fin[i] == 1)
        {
            int ps=0;
            for(k=25; k>12; k=k-2)
            {
                if(last[i+k] == 1 && re[i+k][3] == 1)
                {
                    pos[i+k][0] = pos[i][0];
                    pos[i+k][1] = pos[i][1] - (25+ps);
                    clik[i+k] = 1;
                    sthan[i+k] = 0;
                }
                if(last[i+k+13] == 1 && re[i+k+13][3] == 1)
                {
                    pos[i+k+13][0] = pos[i][0];
                    pos[i+k+13][1] = pos[i][1] - (25+ps);
                    clik[i+k+13] = 1;
                    sthan[i+k+13] = 0;
                }
                ps += 50;
            }
            int ts=0;
            for(k=11; k>0; k-=2)
            {
                if(last[i+k] == 1 && re[i+k][3] == 1)
                {
                    pos[i+k][0] = pos[i][0];
                    pos[i+k][1] = pos[i][1] - (50+ts);
                    clik[i+k] = 1;
                    sthan[i+k] = 0;
                }
                if(last[i+k-13] == 1 && re[i+k-13][3] == 1)
                {
                    pos[i+k-13][0] = pos[i][0];
                    pos[i+k-13][1] = pos[i][1] - (50+ts);
                    clik[i+k-13] = 1;
                    sthan[i+k-13] = 0;
                }
                ts += 50;
            }
        }
    }
///CLUBS///....................
    for(i=13; i<26; i++)
    {
        if(fin[i] == 1)
        {
            pc1=0;
            for(k=25; k>12; k=k-2)
            {

                if(last[i+k-13] == 1 && re[i+k-13][3] == 1)
                {
                    pos[i+k-13][0] = pos[i][0];
                    pos[i+k-13][1] = pos[i][1] - (25+pc1);
                    clik[i+k-13] = 1;
                    sthan[i+k-13] = 0;


                }
                if(last[i+k] == 1 && re[i+k][3] == 1)
                {
                    pos[i+k][0] = pos[i][0];
                    pos[i+k][1] = pos[i][1] - (25+pc1);
                    clik[i+k] = 1;
                    sthan[i+k] = 0;

                }
                pc1 += 50;
            }

            int tc1=0;
            for(k=15; k<26; k=k+2)
            {
                if(i-k+13 > 25) break;
                if(last[i-k] == 1 && re[i-k][3] == 1)
                {
                    pos[i-k][0] = pos[i][0];
                    pos[i-k][1] = pos[i][1] - (50+tc1);
                    clik[i-k] = 1;
                    sthan[i-k] = 0;
                }
                if(last[i-k+13] == 1 && re[i-k+13][3] == 1)
                {
                    pos[i-k+13][0] = pos[i][0];
                    pos[i-k+13][1] = pos[i][1] - (50+tc1);
                    clik[i-k+13] = 1;
                    sthan[i-k+13] = 0;
                }
                tc1 += 50;
            }

        }
    }

    ///DICE///

    for(i=26; i<39; i++)
    {
        if(fin[i] == 1)
        {
            pc1=0;
            for(k=11; k>0; k=k-2)
            {

                if(last[i+k-13] == 1 && re[i+k-13][3] == 1)
                {
                    pos[i+k-13][0] = pos[i][0];
                    pos[i+k-13][1] = pos[i][1] - (50+pc1);
                    clik[i+k-13] = 1;
                    sthan[i+k-13] = 0;


                }
                if(last[i+k] == 1 && re[i+k][3] == 1)
                {
                    pos[i+k][0] = pos[i][0];
                    pos[i+k][1] = pos[i][1] - (50+pc1);
                    clik[i+k] = 1;
                    sthan[i+k] = 0;

                }
                pc1 += 50;
            }

            int tc2=0;

            for(k=27; k<39; k=k+2)
            {
                if(last[i-k] == 1 && re[i-k][3] == 1)
                {
                    pos[i-k][0] = pos[i][0];
                    pos[i-k][1] = pos[i][1] - (25+tc2);
                    clik[i-k] = 1;
                    sthan[i-k] = 0;
                }
                if(last[i-k+13] == 1 && re[i-k+13][3] == 1)
                {
                    pos[i-k+13][0] = pos[i][0];
                    pos[i-k+13][1] = pos[i][1] - (25+tc2);
                    clik[i-k+13] = 1;
                    sthan[i-k+13] = 0;
                }
                tc2 += 50;
            }

        }
    }

    ///HEARTS///

    for(i=39; i<52; i++)
    {
        if(fin[i] == 1)
        {
            pc1=0;
            for(k=27; k<38; k=k+2)
            {

                if(last[i-k-13] == 1 && re[i-k-13][3] == 1)
                {
                    pos[i-k-13][0] = pos[i][0];
                    pos[i-k-13][1] = pos[i][1] - (25+pc1);
                    clik[i-k-13] = 1;
                    sthan[i-k-13] = 0;


                }
                if(last[i-k] == 1 && re[i-k][3] == 1)
                {
                    pos[i-k][0] = pos[i][0];
                    pos[i-k][1] = pos[i][1] - (25+pc1);
                    clik[i-k] = 1;
                    sthan[i-k] = 0;

                }
                pc1 += 50;
            }

            int tc2=0;

            for(k=15; k<26; k=k+2)
            {
                if(last[i-k] == 1 && re[i-k][3] == 1)
                {
                    pos[i-k][0] = pos[i][0];
                    pos[i-k][1] = pos[i][1] - (50+tc2);
                    clik[i-k] = 1;
                    sthan[i-k] = 0;
                }
                if(last[i-k+13] == 1 && re[i-k+13][3] == 1)
                {
                    pos[i-k+13][0] = pos[i][0];
                    pos[i-k+13][1] = pos[i][1] - (50+tc2);
                    clik[i-k+13] = 1;
                    sthan[i-k+13] = 0;
                }
                tc2 += 50;
            }

        }
    }
    //iSetColor(234,233,21);

    //if(vaf == 1) iShowBMP(250, 250, "cb.bmp");
    if(re[12][1] == 730 && re[25][1] == 730 && re[38][1] == 730 && re[51][1] == 730)
    {
        iClear();
        iText(600,500,"YOU WIN!");
        /*iSetColor(150,200,40);
        iFilledRectangle(1200,150,50,40);
        iSetColor(0,0,0);
        iText(1210, 165, "EXIT");
        if(olium == 1)
        {
            iClear();
            iFilledRectangle(500,450,300,200);
            iSetColor(0,0,0);
            iText(500+20,600,"ARE YOU SURE YOU WANT TO EXIT?");
            iSetColor(200,0,0);
            iFilledRectangle(545,475,50,40);
            iFilledRectangle(745-50,475,50,40);
            iSetColor(0,0,0);
            iText(560,490,"YES");
            iText(760-50,490,"NO");

        }*/
    }
    iFilledRectangle(1200,150,50,40);
    iSetColor(255,255,21);
    iText(1210, 165, "EXIT");


    if(olium == 1)
    {
        iClear();
        iFilledRectangle(500,450,300,200);
        iSetColor(0,0,0);
        iText(500+20,600,"ARE YOU SURE YOU WANT TO EXIT?");
        iSetColor(200,0,0);
        iFilledRectangle(545,475,50,40);
        iFilledRectangle(745-50,475,50,40);
        iSetColor(0,0,0);
        iText(560,490,"YES");
        iText(760-50,490,"NO");

    }
    //iText(400,400,"YOU WIN");

    //iText(10, 10, "Use cursors to move the picture.");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my)
{
    //place your codes here
    //if(vc == 1){

    for(i=0; i<52; i++)
    {
        if(clik[i] == 1 && last[i] == 0)
        {
            pos[i][0] = mx - 50;
            pos[i][1] = my - 70;
        }
    }


}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my)
/*bp, biga, B array gula dynamic rakhte chai*/
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >= 70 && mx <= 170) && (my >750 && my <= 900))
    {
        //place your codes here
        //if(apex[0] == 1 && (a[moded + 27] == re[0][2] - 1)) moded = moded + 2;

        moded++;
        if(moded > 24)
        {
            moded = 0;
        }
        //eikhane(niche) re[x][3] er value set hosse....open hoile 1...close hoile 0.
        for(i=0; i<52; i++)
        {
            if(moded + 27 == re[i][2])
            {
                re[i][3] = 1;
            }
            else if(re[i][2] > 27 && re[i][2] < 52)
            {
                re[i][3] = 0;
            }
        }

    }
    /*if(mx >= 250 && mx <= 350 && my >= 525 && my <= 675)
    {
        vc = 1;
    }
    else vc = 0;
    /*if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >= pos[0][0] && mx <= (pos[0][0] + 100)) && (my >= pos[0][1] && my <= (pos[0][1] + 150)) ){
        vc = 1;
    }*/
    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here
    }
    if(count >1) count = 0;
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        lmb = 1;
        count++;
    }
    if(button == GLUT_LEFT_BUTTON && state == GLUT_UP)
    {
        lmb = 0;
        for(i=0; i<52; i++)
        {
            //sthan[i] = 1;
            clik[i] = 0;
            last[i] = 0;
            fin[i] = 0;
            //if(count == 1)
            sit[i] = 0;
        }
    }

    if(mx >= 1200 && mx <= 1250 && my >= 150 && my <= 250 && lmb == 1)
    {
        olium = 1;
        //exit(0);

    }
    /*iFilledRectangle(545,475,50,40);
    iFilledRectangle(745-50,475,50,40);*/
    if(olium == 1 && mx >= 545 && mx <= 595 && my >= 475 && my <= 550)
    {
        exit(0);
    }
    if(olium == 1 && mx >= 545+150 && mx <= 595+150 && my >= 475 && my <= 550)
    {
        olium = 0;
    }


    ///ATTENTON///
    /// 3 barer beshi nile prob hosse///
    ///sit[] fact





    /*if(mx >= 250 && mx <= 350 && my >= 525 && my <= 675 && lmb == 1)
    {
        vc = 1;
    }
    else vc = 0;*/
    //activation....[nich theke]....sthan er val 0 hoile 2nd card ta printf korbe.
    for(i=0; i<52; i++)
    {
        if(khoj(pos[i][0], pos[i][1]-25) == 0 && mx >= pos[i][0] && mx<= pos[i][0]+100 && my>=pos[i][1] && my<=pos[i][1]+180 && lmb==1 && re[i][3] == 1)
        {
            clik[i] = 1;
            sthan[i] = 0;
        }
    }
    /*if(mx >= pos[2][0] && mx<= pos[2][0]+100 && my>=pos[2][1] && my<=pos[2][1]+150 && lmb==1 && re[2][3] == 1){
        clik[2] = 1;
        sthan[2] = 0;
    }*/

    for(i=0; i<52; i++)
    {
        if((re[i][0]==550 && re[i][1]==725) || (re[i][0]==700 && re[i][1]==725) || (re[i][0]==850 && re[i][1]==725) || (re[i][0]==1000 && re[i][1]==725))
        {
            apex[i] = 2;
        }
        else apex[i] = 0;

    }
    apex[0] = 1;
    apex[13] = 1;
    apex[26] = 1;
    apex[39] = 1;





    ///....testing......///k starts from 25....then k -= 2///
    ///TEST SUCCESFUL!!!///
    ///SPADE///
    for(i=1; i<13; i++)
    {
        int p = 0;
        for(k=25; k>0; k=k-2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i+k][0] && pos[i][1] - (25+p) == pos[i+k][1] && re[i+k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1  && pos[i][0] == pos[i+k+13][0] &&  pos[i][1] - (25+p) == pos[i+k+13][1] && re[i+k+13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k+13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k+13] = 1;

            }
            p+=50;
        }
        int t=0;
        for(k=11; k>0; k=k-2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i+k][0] && pos[i][1] - (50+t) == pos[i+k][1] && re[i+k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1  && pos[i][0] == pos[i+k-13][0] &&  pos[i][1] - (50+t) == pos[i+k-13][1] && re[i+k-13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k-13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k-13] = 1;

            }
            t+=50;
        }
    }
    ///CLUBS///
    for(i=14; i<26; i++)
    {
        dhur = 0;
        for(k=25; k>12; k=k-2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i+k][0] && pos[i][1] - (25+dhur) == pos[i+k][1] && re[i+k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i+k-13][0] &&  pos[i][1] - (25+dhur) == pos[i+k-13][1] && re[i+k-13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k-13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k-13] = 1;

            }
            dhur+=50;
        }
        tC1=0;
        for(k=15; k<52; k=k+2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i-k][0] && pos[i][1] - (50+tC1) == pos[i-k][1] && re[i-k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1  && pos[i][0] == pos[i-k+13][0] &&  pos[i][1] - (50+tC1) == pos[i-k+13][1] && re[i-k+13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k+13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k+13] = 1;

            }
            tC1+=50;
        }

    }

    ///DICE///

    for(i=27; i<39; i++)
    {
        dhur = 0;
        for(k=11; k>0; k=k-2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i+k][0] && pos[i][1] - (50+dhur) == pos[i+k][1] && re[i+k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i+k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i+k-13][0] &&  pos[i][1] - (50+dhur) == pos[i+k-13][1] && re[i+k-13][3] == 1)
            {

                fin[i] = 0;
                clik[i] = 1;
                last[i+k-13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i+k-13] = 1;

            }
            dhur+=50;
        }
        int t1=0;
        for(k=27; k<52; k=k+2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i-k][0] && pos[i][1] - (25+t1) == pos[i-k][1] && re[i-k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1  && pos[i][0] == pos[i-k+13][0] &&  pos[i][1] - (25+t1) == pos[i-k+13][1] && re[i-k+13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k+13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k+13] = 1;

            }
            t1+=50;
        }

    }

    ///HEARTS///

    for(i=40; i<52; i++)
    {
        dhur = 0;
        for(k=27; k<52; k=k+2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i-k][0] && pos[i][1] - (25+dhur) == pos[i-k][1] && re[i-k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i-k-13][0] &&  pos[i][1] - (25+dhur) == pos[i-k-13][1] && re[i-k-13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k-13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k-13] = 1;

            }
            dhur+=50;
        }
        int t1=0;
        for(k=15; k<52; k=k+2)
        {
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1 && pos[i][0] == pos[i-k][0] && pos[i][1] - (50+t1) == pos[i-k][1] && re[i-k][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k] = 1;

            }
            if(mx>=pos[i][0] && mx<=pos[i][0]+100 && my>=pos[i][1]+125 && my<=pos[i][1]+180 && lmb == 1  && pos[i][0] == pos[i-k+13][0] &&  pos[i][1] - (50+t1) == pos[i-k+13][1] && re[i-k+13][3] == 1)
            {
                fin[i] = 0;
                clik[i] = 1;
                last[i-k+13] = 1;
                fin[i] = 1;
                sit[i] = 1;
                sit[i-k+13] = 1;

            }
            t1+=50;
        }

    }





    for(i=0; i<52; i++)
    {
        if(pos[i][0] >=500 && pos[i][0] <=1300 && pos[i][1] >= 575 && pos[i][1] <= 1200 /*&& lmb == 0*/ && apex[i] == 1)
        {
            if(i<13)
            {
                re[i][0] = 550;
                re[i][1] = 730;
            }
            if(i>=13 && i<26)
            {
                re[i][0] = 700;
                re[i][1] = 730;
            }
            if(i>=26 && i<39)
            {
                re[i][0] = 850;
                re[i][1] = 730;
            }
            if(i>=39 && i<52)
            {
                re[i][0] = 1000;
                re[i][1] = 730;
            }
            //sthan[0] = 1;
            apex[i+1] = 1;
            apex[i] = 2;
            if(i!=0 && i!=13 && i!=26 && i!=39)
            {
                re[i-1][3] = 0;
                //re[i][3] = 1;
            }
            re[i][3] = 1;
            biga[bp[i][0]][bp[i][1]] = 0;
            if(biga[bp[i][0] - 1][bp[i][1]] == 2)
                biga[bp[i][0] - 1][bp[i][1]] = 1;
            if(re[i][2] < 28)
            {
                for(j=0; j<52; j++)
                {
                    if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                    {
                        re[j][3] = 1;
                    }
                }
            }
        }
    }

    for(i=0; i<12; i++)
    {

        if(sit[i+27] != 1 && khoj(pos[i+27][0], pos[i+27][1]-25) == 0 && pos[i][0] <= pos[i+27][0]+50 && pos[i][0] >= pos[i+27][0] - 50 && pos[i][1] >= pos[i+27][1] - 70 && pos[i][1] <= pos[i+27][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i+27][3] == 1 && re[i][3] == 1 && re[i+27][1]<560)
        {
            re[i][0] = pos[i+27][0];
            re[i][1] = pos[i+27][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i+27][0]+1][bp[i+27][1]] = 1;
            sit[i+27] = 1;
            kita = 2;


            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            //bp[i][0] = bp[i][0]+1;
            //re[bp[i-1][0]][3] = 1;
        }

        if(sit[i+40] != 1 && khoj(pos[i+40][0], pos[i+40][1]-25) == 0 && pos[i][0] <= pos[i+40][0]+50 && pos[i][0] >= pos[i+40][0]-50 && pos[i][1] >= pos[i+40][1] - 70 && pos[i][1] <= pos[i+40][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i+40][3] == 1 && re[i][3] == 1 && re[i+40][1]<560)
        {
            re[i][0] = pos[i+40][0];
            re[i][1] = pos[i+40][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i+40][0]+1][bp[i+40][1]] = 1;
            sit[i+40] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if(bp[j][0] == bp[i][0] - 1 && bp[j][1] == bp[i][1])
                {
                    re[j][3] = 1;
                }
            }
            // bp[i][0] = bp[i][0]+1;
        }
    }
    for(i=13; i<25; i++)
    {

        if(sit[i+27] != 1 && khoj(pos[i+27][0], pos[i+27][1]-25) == 0 && pos[i][0] <= pos[i+27][0]+50 && pos[i][0] >= pos[i+27][0] - 50 && pos[i][1] >= pos[i+27][1] - 70 && pos[i][1] <= pos[i+27][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i+27][3] == 1 && re[i][3] == 1 && re[i+27][1]<560)
        {
            re[i][0] = pos[i+27][0];
            re[i][1] = pos[i+27][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i+27][0]+1][bp[i+27][1]] = 1;
            sit[i+27] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            //bp[i][0] = bp[i][0]+1;
        }

        if(sit[i+14] != 1 && khoj(pos[i+14][0], pos[i+14][1]-25) == 0 && pos[i][0] <= pos[i+14][0]+50 && pos[i][0] >= pos[i+14][0]-50 && pos[i][1] >= pos[i+14][1] - 70 && pos[i][1] <= pos[i+14][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i+14][3] == 1 && re[i][3] == 1 && re[i+14][1]<560)
        {
            re[i][0] = pos[i+14][0];
            re[i][1] = pos[i+14][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i+14][0]+1][bp[i+14][1]] = 1;
            sit[i+14] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            //bp[i][0] = bp[i][0]+1;
        }
    }
    for(i=26; i<38; i++)
    {

        if(sit[i-25] != 1 && khoj(pos[i-25][0], pos[i-25][1]-25) == 0 && pos[i][0] <= pos[i-25][0]+50 && pos[i][0] >= pos[i-25][0] - 50 && pos[i][1] >= pos[i-25][1] - 70 && pos[i][1] <= pos[i-25][1]+150 /*&& (re[i+27][0] != 200 && re[i+27][1] != 725)*/ && re[i-25][3] == 1 && re[i][3] == 1 && re[i-25][1]<560)
        {
            re[i][0] = pos[i-25][0];
            re[i][1] = pos[i-25][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i-25][0]+1][bp[i-25][1]] = 1;
            sit[i-25] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            // bp[i][0] = bp[i][0]+1;

        }

        if(sit[i-12] != 1 && khoj(pos[i-12][0], pos[i-12][1]-25) == 0 && pos[i][0] <= pos[i-12][0]+50 && pos[i][0] >= pos[i-12][0]-50 && pos[i][1] >= pos[i-12][1] - 70 && pos[i][1] <= pos[i-12][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i-12][3] == 1 && re[i][3] == 1 && re[i-12][1]<560)
        {
            re[i][0] = pos[i-12][0];
            re[i][1] = pos[i-12][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i-12][0]+1][bp[i-12][1]] = 1;
            sit[i-12] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            // bp[i][0] = bp[i][0]+1;
        }
    }
    for(i=39; i<51; i++)
    {

        if(sit[i-38] != 1 && khoj(pos[i-38][0], pos[i-38][1]-25) == 0 && pos[i][0] <= pos[i-38][0]+50 && pos[i][0] >= pos[i-38][0] - 50 && pos[i][1] >= pos[i-38][1] - 70 && pos[i][1] <= pos[i-38][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i-38][3] == 1 && re[i][3] == 1 && re[i-38][1]<560)
        {
            re[i][0] = pos[i-38][0];
            re[i][1] = pos[i-38][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i-38][0]+1][bp[i-38][1]] = 1;
            sit[i-38] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            //bp[i][0] = bp[i][0]+1;
        }

        if(sit[i-25] != 1 && khoj(pos[i-25][0], pos[i-25][1]-25) == 0 && pos[i][0] <= pos[i-25][0]+50 && pos[i][0] >= pos[i-25][0]-50 && pos[i][1] >= pos[i-25][1] - 70 && pos[i][1] <= pos[i-25][1]+150 /*&& re[i+27][0] != 200 && re[i+27][1] != 725*/ && re[i-25][3] == 1 && re[i][3] == 1 && re[i-25][1]<600)
        {
            re[i][0] = pos[i-25][0];
            re[i][1] = pos[i-25][1] - 25;
            biga[bp[i][0]][bp[i][1]] = 0;
            biga[bp[i][0] - 1][bp[i][1]] = 1;
            biga[bp[i-25][0]+1][bp[i-25][1]] = 1;
            sit[i-25] = 1;
            kita = 2;
            for(j=0; j<52; j++)
            {
                if((bp[j][0] == bp[i][0] - 1) && (bp[j][1] == bp[i][1]))
                {
                    re[j][3] = 1;
                }
            }
            //bp[i][0] = bp[i][0]+1;
        }
    }

    if(khoj(100,550) != 1)
    {
        biga[0][0] = 0;
    }

    if(khoj(250,550) != 1)
    {
        biga[0][1] = 0;
    }

    if(khoj(400,550) != 1)
    {
        biga[0][2] = 0;
    }
    if(khoj(550,550) != 1)
    {
        biga[0][3] = 0;
    }
    if(khoj(700,550) != 1)
    {
        biga[0][4] = 0;
    }
    if(khoj(850,550) != 1)
    {
        biga[0][5] = 0;
    }
    if(khoj(1000,550) != 1)
    {
        biga[0][6] = 0;
    }
    if(pos[12][0] >= 70 && pos[12][0]<=220 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][0] == 0 && re[12][3] == 1)
    {
        re[12][0] = 100;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][0] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 70 && pos[25][0]<=220 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][0] == 0 && re[25][3] == 1)
    {
        re[25][0] = 100;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][0] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >= 70 && pos[38][0]<=220 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][0] == 0 && re[38][3] == 1)
    {
        re[38][0] = 100;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][0] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 70 && pos[51][0]<=220 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][0] == 0 && re[51][3] == 1)
    {
        re[51][0] = 100;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][0] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    //2........................................................
    if(pos[12][0] >= 225 && pos[12][0]<=375 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][1] == 0 && re[12][3] == 1)
    {
        re[12][0] = 250;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][1] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 225 && pos[25][0]<=375 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][1] == 0 && re[25][3] == 1)
    {
        re[25][0] = 250;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][1] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >= 225 && pos[38][0]<=375 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][1] == 0 && re[38][3] == 1)
    {
        re[38][0] = 250;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][1] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 225 && pos[51][0]<=375 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][1] == 0 && re[51][3] == 1)
    {
        re[51][0] = 250;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][1] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }

    //3.....................................
    if(pos[12][0] >= 380 && pos[12][0]<=530 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][2] == 0 && re[12][3] == 1)
    {
        re[12][0] = 400;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][2] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 380 && pos[25][0]<=530 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][2] == 0 && re[25][3] == 1)
    {
        re[25][0] = 400;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][2] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >= 380 && pos[38][0]<=530 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][2] == 0 && re[38][3] == 1)
    {
        re[38][0] = 400;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][2] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 380 && pos[51][0]<=530 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][2] == 0 && re[51][3] == 1)
    {
        re[51][0] = 400;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][2] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }

    //4......................................................
    if(pos[12][0] >= 535 && pos[12][0]<=680 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][3] == 0 && re[12][3] == 1)
    {
        re[12][0] = 550;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][3] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 535 && pos[25][0]<=680 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][3] == 0 && re[25][3] == 1)
    {
        re[25][0] = 550;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][3] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >= 535 && pos[38][0]<=680 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][3] == 0 && re[38][3] == 1)
    {
        re[38][0] = 550;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][3] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 535 && pos[51][0]<=680 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][3] == 0 && re[51][3] == 1)
    {
        re[51][0] = 550;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][3] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    //5....................................................................
    if(pos[12][0] >= 685 && pos[12][0]<=830 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][4] == 0 && re[12][3] == 1)
    {
        re[12][0] = 700;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][4] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 685 && pos[25][0]<=830 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][4] == 0 && re[25][3] == 1)
    {
        re[25][0] = 700;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][4] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >= 685 && pos[38][0]<=830 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][4] == 0 && re[38][3] == 1)
    {
        re[38][0] = 700;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][4] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 685 && pos[51][0]<=830 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][4] == 0 && re[51][3] == 1)
    {
        re[51][0] = 700;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][4] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    //6..............................................................................
    if(pos[12][0] >= 835 && pos[12][0]<=980 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][5] == 0 && re[12][3] == 1)
    {
        re[12][0] = 850;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][5] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 835 && pos[25][0]<=980 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][5] == 0 && re[25][3] == 1)
    {
        re[25][0] = 850;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][5] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >=835  && pos[38][0]<=980 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][5] == 0 && re[38][3] == 1)
    {
        re[38][0] = 850;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][5] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 835 && pos[51][0]<=980 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][5] == 0 && re[51][3] == 1)
    {
        re[51][0] = 850;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][5] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    //7..............................................................

    if(pos[12][0] >= 985 && pos[12][0]<=1030 && pos[12][1] >=500 && pos[12][1] <=700 && biga[0][6] == 0 && re[12][3] == 1)
    {
        re[12][0] = 1000;
        re[12][1] = 550;
        biga[bp[12][0]][bp[12][1]] = 0;
        if(biga[bp[12][0] - 1][bp[12][1]] == 2)
            biga[bp[12][0] - 1][bp[12][1]] = 1;
        biga[0][6] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[12][0] - 1) && (bp[j][1] == bp[12][1]))
            {
                re[j][3] = 1;
            }
        }
    }
    if(pos[25][0] >= 985 && pos[25][0]<=1030 && pos[25][1] >=500 && pos[25][1] <=700 && biga[0][6] == 0 && re[25][3] == 1)
    {
        re[25][0] = 1000;
        re[25][1] = 550;
        biga[bp[25][0]][bp[25][1]] = 0;
        if(biga[bp[25][0] - 1][bp[25][1]] == 2)
            biga[bp[25][0] - 1][bp[25][1]] = 1;
        biga[0][6] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[25][0] - 1) && (bp[j][1] == bp[25][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    if(pos[38][0] >= 985 && pos[38][0]<=1030 && pos[38][1] >=500 && pos[38][1] <=700 && biga[0][6] == 0 && re[38][3] == 1)
    {
        re[38][0] = 1000;
        re[38][1] = 550;
        biga[bp[38][0]][bp[38][1]] = 0;
        if(biga[bp[38][0] - 1][bp[38][1]] == 2)
            biga[bp[38][0] - 1][bp[38][1]] = 1;
        biga[0][6] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[38][0] - 1) && (bp[j][1] == bp[38][1]))
            {
                re[j][3] = 1;
            }
        }

    }
    if(pos[51][0] >= 985 && pos[51][0]<=1030 && pos[51][1] >=500 && pos[51][1] <=700 && biga[0][6] == 0 && re[51][3] == 1)
    {
        re[51][0] = 1000;
        re[51][1] = 550;
        biga[bp[51][0]][bp[51][1]] = 0;
        if(biga[bp[51][0] - 1][bp[51][1]] == 2)
            biga[bp[51][0] - 1][bp[51][1]] = 1;
        biga[0][6] = 1;
        for(j=0; j<52; j++)
        {
            if((bp[j][0] == bp[51][0] - 1) && (bp[j][1] == bp[51][1]))
            {
                re[j][3] = 1;
            }
        }

    }



    for(i=28; i<52; i++)
    {
        if(re[a[i]][0] != 200 && re[a[i]][1] != 725)
        {
            acpy[i] = -1;
            fiar[a[i]] = 1;
            re[a[i]][3] = 1;
        }

    }
    for(i=0; i<52; i++)
    {
        pos[i][0] = re[i][0];
        pos[i][1] = re[i][1];
    }

    /*for(i=28;i<52;i++){
        if(re[a[i]][0] != 200 && re[a[i]][1] != 725){
            fiar[a[i]] = 1;
            re[a[i]][3] = 1;
            //a[i] = -1;
        }
    }*/
    /*for(i=0; i<52; i++)
    {
        if(re[i][0] == 100) bp[i][1] = 0;
        if(re[i][0] == 250) bp[i][1] = 1;
        if(re[i][0] == 400) bp[i][1] = 2;
        if(re[i][0] == 550) bp[i][1] = 3;
        if(re[i][0] == 700) bp[i][1] = 4;
        if(re[i][0] == 850) bp[i][1] = 5;
        if(re[i][0] == 1000) bp[i][1] = 6;

        if(re[i][1] == 550) bp[i][0] = 0;
        if(re[i][1] == 525) bp[i][0] = 1;
        if(re[i][1] == 500) bp[i][0] = 2;
        if(re[i][1] == 475) bp[i][0] = 3;
        if(re[i][1] == 450) bp[i][0] = 4;
        if(re[i][1] == 425) bp[i][0] = 5;
        if(re[i][1] == 400) bp[i][0] = 6;
        if(re[i][1] == 375) bp[i][0] = 7;
        if(re[i][1] == 350) bp[i][0] = 8;
        if(re[i][1] == 325) bp[i][0] = 9;
        if(re[i][1] == 300) bp[i][0] = 10;
        if(re[i][1] == 275) bp[i][0] = 11;
        if(re[i][1] == 250) bp[i][0] = 12;
        if(re[i][1] == 225) bp[i][0] = 13;
        if(re[i][1] == 200) bp[i][0] = 14;
        if(re[i][1] == 175) bp[i][0] = 15;
        if(re[i][1] == 150) bp[i][0] = 16;
        if(re[i][1] == 125) bp[i][0] = 17;
        if(re[i][1] == 100) bp[i][0] = 18;
        if(re[i][1] == 450) bp[i][0] = 0;
        if(re[i][1] == 450) bp[i][0] = 0;
        if(re[i][1] == 450) bp[i][0] = 0;
        if(re[i][1] == 450) bp[i][0] = 0;
    }*/


    /* pos[0][0] = re[0][0];
     pos[0][1] = re[0][1];
     pos[1][0] = re[1][0];
     pos[1][1] = re[1][1];
     pos[2][0] = re[2][0];
     pos[2][1] = re[2][1];*/

    //sthan[4][0] = 0;

    if(mx>=t1x && mx <= t1x + 100 && my >= t1y && my <= t1y+150)
    {
        vcf = 1;
    }
    /*if(button == GLUT_LEFT_BUTTON && state == GLUT_UP)
    {

        for(i=0; i<52; i++)
        {
            //sthan[i] = 1;
            fin[i] = 0;
            //if(count == 1)
            sit[i] = 0;
        }
    }*/
}
/*sthan[] hoitese 2nd card ta print er jonno...
  apex[] hosse main jaygay ase kina ta janar jonno
  bp[] hosse screen er respect e position....
  biga hoitese 19 by 7 2D array..khali 1 ar 0 ar 2 er element......[want to make it dynamic]
  l m b tip dile lmb = 1 else 0*/
/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key)
{
    if (key == 'x')
    {
        //do something with 'x'
        exit(0);
    }
    /*if(key == 'c'){
        vgh = 1;
    }
    if(key == 'o'){
        vgh = 0;
    }*/
    //place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key)
{

    /*if (key == GLUT_KEY_END) {
    	exit(0);
    }
    if (key == GLUT_KEY_LEFT) {
    	xsA--;
    }
    if (key == GLUT_KEY_RIGHT) {
    	xsA++;
    }
    if (key == GLUT_KEY_UP) {
    	ysA++;
    }
    if (key == GLUT_KEY_DOWN) {
    	ysA--;
    }*/
    //place your codes for other keys here
}

int main()
{
    //place your own initialization codes

    time_t s;
    int i, nr=0, p=0;

    srand((unsigned) time(&s));
    for(i=0; i<52; i++)
    {
        if(len >1)
        {
            nr = norep(a,n,len);
        }
        //printf("%d\n", nr);
        do
        {
            n = rand() % 52;
            if(len >1)
            {
                nr = norep(a,n,len);
            }
        }
        while(nr == 1);
        a[len] = n;
        len++;



        /* x = j;
         y = 500 - p * 50;
         if((p == (j / 100) - 1)/* || (p == 0 && i == 0)){
             j += 100;
             p = 0;*/


        //printf("%d %d %d %d\n" , n, p, x, y);
        //printf("%d", nr);
    }
    for(i=0; i<52; i++)
    {
        if(a[i] == 0)
        {
            if(i < 28)
            {
                xsA = vuj(i);
                ysA = koti(i);
            }
            else
            {
                xsA = 200;
                ysA = 725;
            }
            pos[0][0] = xsA;
            pos[0][1] = ysA;
            pos[a[i]][2] = i;
        }
        if(a[i] == 1)
        {
            if(i < 28)
            {
                xs2 = vuj(i);
                ys2 = koti(i);
            }
            else
            {
                xs2 = 200;
                ys2 = 725;
            }
            pos[1][0] = xs2;
            pos[1][1] = ys2;
            pos[a[i]][2] = i;
        }
        if(a[i] == 2)
        {
            if(i < 28)
            {
                xs3 = vuj(i);
                ys3 = koti(i);
            }
            else
            {
                xs3 = 200;
                ys3 = 725;
            }
            pos[2][0] = xs3;
            pos[2][1] = ys3;
            pos[a[i]][2] = i;
        }
        if(a[i] == 3)
        {
            if(i < 28)
            {
                xs4 = vuj(i);
                ys4 = koti(i);
            }
            else
            {
                xs4 = 200;
                ys4 = 725;
            }
            pos[3][0] = xs4;
            pos[3][1] = ys4;
            pos[a[i]][2] = i;
        }
        if(a[i] == 4)
        {
            if(i < 28)
            {
                xs5 = vuj(i);
                ys5 = koti(i);
            }
            else
            {
                xs5 = 200;
                ys5 = 725;
            }
            pos[4][0] = xs5;
            pos[4][1] = ys5;
            pos[a[i]][2] = i;
        }
        if(a[i] == 5)
        {
            if(i < 28)
            {
                xs6 = vuj(i);
                ys6 = koti(i);
            }
            else
            {
                xs6 = 200;
                ys6 = 725;
            }
            pos[a[i]][0] = xs6;
            pos[a[i]][1] = ys6;
            pos[a[i]][2] = i;
        }
        if(a[i] == 6)
        {
            if(i < 28)
            {
                xs7 = vuj(i);
                ys7 = koti(i);
            }
            else
            {
                xs7 = 200;
                ys7 = 725;
            }
            pos[a[i]][0] = xs7;
            pos[a[i]][1] = ys7;
            pos[a[i]][2] = i;
        }
        if(a[i] == 7)
        {
            if(i < 28)
            {
                xs8 = vuj(i);
                ys8 = koti(i);
            }
            else
            {
                xs8 = 200;
                ys8 = 725;
            }
            pos[a[i]][0] = xs8;
            pos[a[i]][1] = ys8;
            pos[a[i]][2] = i;
        }
        if(a[i] == 8)
        {
            if(i < 28)
            {
                xs9 = vuj(i);
                ys9 = koti(i);
            }
            else
            {
                xs9 = 200;
                ys9 = 725;
            }
            pos[a[i]][0] = xs9;
            pos[a[i]][1] = ys9;
            pos[a[i]][2] = i;
        }
        if(a[i] == 9)
        {
            if(i < 28)
            {
                xs10 = vuj(i);
                ys10 = koti(i);
            }
            else
            {
                xs10 = 200;
                ys10 = 725;
            }
            pos[a[i]][0] = xs10;
            pos[a[i]][1] = ys10;
            pos[a[i]][2] = i;
        }
        if(a[i] == 10)
        {
            if(i < 28)
            {
                xsj = vuj(i);
                ysj = koti(i);
            }
            else
            {
                xsj = 200;
                ysj = 725;
            }
            pos[a[i]][0] = xsj;
            pos[a[i]][1] = ysj;
            pos[a[i]][2] = i;
        }
        if(a[i] == 11)
        {
            if(i < 28)
            {
                xsq = vuj(i);
                ysq = koti(i);
            }
            else
            {
                xsq = 200;
                ysq = 725;
            }
            pos[a[i]][0] = xsq;
            pos[a[i]][1] = ysq;
            pos[a[i]][2] = i;
        }
        if(a[i] == 12)
        {
            if(i < 28)
            {
                xsk = vuj(i);
                ysk = koti(i);
            }
            else
            {
                xsk = 200;
                ysk = 725;
            }
            pos[a[i]][0] = xsk;
            pos[a[i]][1] = ysk;
            pos[a[i]][2] = i;
        }
        if(a[i] == 13)
        {
            if(i < 28)
            {
                xcA = vuj(i);
                ycA = koti(i);
            }
            else
            {
                xcA = 200;
                ycA = 725;
            }
            pos[a[i]][0] = xcA;
            pos[a[i]][1] = ycA;
            pos[a[i]][2] = i;
        }
        if(a[i] == 14)
        {
            if(i < 28)
            {
                xc2 = vuj(i);
                yc2 = koti(i);
            }
            else
            {
                xc2 = 200;
                yc2 = 725;
            }
            pos[a[i]][0] = xc2;
            pos[a[i]][1] = yc2;
            pos[a[i]][2] = i;
        }
        if(a[i] == 15)
        {
            if(i < 28)
            {
                xc3 = vuj(i);
                yc3 = koti(i);
            }
            else
            {
                xc3 = 200;
                yc3 = 725;
            }
            pos[a[i]][0] = xc3;
            pos[a[i]][1] = yc3;
            pos[a[i]][2] = i;
        }
        if(a[i] == 16)
        {
            if(i < 28)
            {
                xc4 = vuj(i);
                yc4 = koti(i);
            }
            else
            {
                xc4 = 200;
                yc4 = 725;
            }
            pos[a[i]][0] = xc4;
            pos[a[i]][1] = yc4;
            pos[a[i]][2] = i;
        }
        if(a[i] == 17)
        {
            if(i < 28)
            {
                xc5 = vuj(i);
                yc5 = koti(i);
            }
            else
            {
                xc5 = 200;
                yc5 = 725;
            }
            pos[a[i]][0] = xc5;
            pos[a[i]][1] = yc5;
            pos[a[i]][2] = i;
        }
        if(a[i] == 18)
        {
            if(i < 28)
            {
                xc6 = vuj(i);
                yc6 = koti(i);
            }
            else
            {
                xc6 = 200;
                yc6 = 725;
            }
            pos[a[i]][0] = xc6;
            pos[a[i]][1] = yc6;
            pos[a[i]][2] = i;
        }
        if(a[i] == 19)
        {
            if(i < 28)
            {
                xc7 = vuj(i);
                yc7 = koti(i);
            }
            else
            {
                xc7 = 200;
                yc7 = 725;
            }
            pos[a[i]][0] = xc7;
            pos[a[i]][1] = yc7;
            pos[a[i]][2] = i;
        }
        if(a[i] == 20)
        {
            if(i < 28)
            {
                xc8 = vuj(i);
                yc8 = koti(i);
            }
            else
            {
                xc8 = 200;
                yc8 = 725;
            }
            pos[a[i]][0] = xc8;
            pos[a[i]][1] = yc8;
            pos[a[i]][2] = i;
        }
        if(a[i] == 21)
        {
            if(i < 28)
            {
                xc9 = vuj(i);
                yc9 = koti(i);
            }
            else
            {
                xc9 = 200;
                yc9 = 725;
            }
            pos[a[i]][0] = xc9;
            pos[a[i]][1] = yc9;
            pos[a[i]][2] = i;
        }
        if(a[i] == 22)
        {
            if(i < 28)
            {
                xc10 = vuj(i);
                yc10 = koti(i);
            }
            else
            {
                xc10 = 200;
                yc10 = 725;
            }
            pos[a[i]][0] = xc10;
            pos[a[i]][1] = yc10;
            pos[a[i]][2] = i;
        }
        if(a[i] == 23)
        {
            if(i < 28)
            {
                xcj = vuj(i);
                ycj = koti(i);
            }
            else
            {
                xcj = 200;
                ycj = 725;
            }
            pos[a[i]][0] = xcj;
            pos[a[i]][1] = ycj;
            pos[a[i]][2] = i;
        }
        if(a[i] == 24)
        {
            if(i < 28)
            {
                xcq = vuj(i);
                ycq = koti(i);
            }
            else
            {
                xcq = 200;
                ycq = 725;
            }
            pos[a[i]][0] = xcq;
            pos[a[i]][1] = ycq;
            pos[a[i]][2] = i;
        }
        if(a[i] == 25)
        {
            if(i < 28)
            {
                xck = vuj(i);
                yck = koti(i);
            }
            else
            {
                xck = 200;
                yck = 725;
            }
            pos[a[i]][0] = xck;
            pos[a[i]][1] = yck;
            pos[a[i]][2] = i;
        }
        if(a[i] == 26)
        {
            if(i < 28)
            {
                xdA = vuj(i);
                ydA = koti(i);
            }
            else
            {
                xdA = 200;
                ydA = 725;
            }
            pos[a[i]][0] = xdA;
            pos[a[i]][1] = ydA;
            pos[a[i]][2] = i;
        }
        if(a[i] == 27)
        {
            if(i < 28)
            {
                xd2 = vuj(i);
                yd2 = koti(i);
            }
            else
            {
                xd2 = 200;
                yd2 = 725;
            }
            pos[a[i]][0] = xd2;
            pos[a[i]][1] = yd2;
            pos[a[i]][2] = i;
        }
        if(a[i] == 28)
        {
            if(i < 28)
            {
                xd3 = vuj(i);
                yd3 = koti(i);
            }
            else
            {
                xd3 = 200;
                yd3 = 725;
            }
            pos[a[i]][0] = xd3;
            pos[a[i]][1] = yd3;
            pos[a[i]][2] = i;
        }
        if(a[i] == 29)
        {
            if(i < 28)
            {
                xd4 = vuj(i);
                yd4 = koti(i);
            }
            else
            {
                xd4 = 200;
                yd4 = 725;
            }
            pos[a[i]][0] = xd4;
            pos[a[i]][1] = yd4;
            pos[a[i]][2] = i;
        }
        if(a[i] == 30)
        {
            if(i < 28)
            {
                xd5 = vuj(i);
                yd5 = koti(i);
            }
            else
            {
                xd5 = 200;
                yd5 = 725;
            }
            pos[a[i]][0] = xd5;
            pos[a[i]][1] = yd5;
            pos[a[i]][2] = i;
        }
        if(a[i] == 31)
        {
            if(i < 28)
            {
                xd6 = vuj(i);
                yd6 = koti(i);
            }
            else
            {
                xd6 = 200;
                yd6 = 725;
            }
            pos[a[i]][0] = xd6;
            pos[a[i]][1] = yd6;
            pos[a[i]][2] = i;
        }
        if(a[i] == 32)
        {
            if(i < 28)
            {
                xd7 = vuj(i);
                yd7 = koti(i);
            }
            else
            {
                xd7 = 200;
                yd7 = 725;
            }
            pos[a[i]][0] = xd7;
            pos[a[i]][1] = yd7;
            pos[a[i]][2] = i;
        }
        if(a[i] == 33)
        {
            if(i < 28)
            {
                xd8 = vuj(i);
                yd8 = koti(i);
            }
            else
            {
                xd8 = 200;
                yd8 = 725;
            }
            pos[a[i]][0] = xd8;
            pos[a[i]][1] = yd8;
            pos[a[i]][2] = i;
        }
        if(a[i] == 34)
        {
            if(i < 28)
            {
                xd9 = vuj(i);
                yd9 = koti(i);
            }
            else
            {
                xd9 = 200;
                yd9 = 725;
            }
            pos[a[i]][0] = xd9;
            pos[a[i]][1] = yd9;
            pos[a[i]][2] = i;
        }
        if(a[i] == 35)
        {
            if(i < 28)
            {
                xd10 = vuj(i);
                yd10 = koti(i);
            }
            else
            {
                xd10 = 200;
                yd10 = 725;
            }
            pos[a[i]][0] = xd10;
            pos[a[i]][1] = yd10;
            pos[a[i]][2] = i;
        }
        if(a[i] == 36)
        {
            if(i < 28)
            {
                xdj = vuj(i);
                ydj = koti(i);
            }
            else
            {
                xdj = 200;
                ydj = 725;
            }
            pos[a[i]][0] = xdj;
            pos[a[i]][1] = ydj;
            pos[a[i]][2] = i;
        }
        if(a[i] == 37)
        {
            if(i < 28)
            {
                xdq = vuj(i);
                ydq = koti(i);
            }
            else
            {
                xdq = 200;
                ydq = 725;
            }
            pos[a[i]][0] = xdq;
            pos[a[i]][1] = ydq;
            pos[a[i]][2] = i;
        }
        if(a[i] == 38)
        {
            if(i < 28)
            {
                xdk = vuj(i);
                ydk = koti(i);
            }
            else
            {
                xdk = 200;
                ydk = 725;
            }
            pos[a[i]][0] = xdk;
            pos[a[i]][1] = ydk;
            pos[a[i]][2] = i;
        }
        if(a[i] == 39)
        {
            if(i < 28)
            {
                xhA = vuj(i);
                yhA = koti(i);
            }
            else
            {
                xhA = 200;
                yhA = 725;
            }
            pos[a[i]][0] = xhA;
            pos[a[i]][1] = yhA;
            pos[a[i]][2] = i;
        }
        if(a[i] == 40)
        {
            if(i < 28)
            {
                xh2 = vuj(i);
                yh2 = koti(i);
            }
            else
            {
                xh2 = 200;
                yh2 = 725;
            }
            pos[a[i]][0] = xh2;
            pos[a[i]][1] = yh2;
            pos[a[i]][2] = i;
        }
        if(a[i] == 41)
        {
            if(i < 28)
            {
                xh3 = vuj(i);
                yh3 = koti(i);
            }
            else
            {
                xh3 = 200;
                yh3 = 725;
            }
            pos[a[i]][0] = xh3;
            pos[a[i]][1] = yh3;
            pos[a[i]][2] = i;
        }
        if(a[i] == 42)
        {
            if(i < 28)
            {
                xh4 = vuj(i);
                yh4 = koti(i);
            }
            else
            {
                xh4 = 200;
                yh4 = 725;
            }
            pos[a[i]][0] = xh4;
            pos[a[i]][1] = yh4;
            pos[a[i]][2] = i;
        }
        if(a[i] == 43)
        {
            if(i < 28)
            {
                xh5 = vuj(i);
                yh5 = koti(i);
            }
            else
            {
                xh5 = 200;
                yh5 = 725;
            }
            pos[a[i]][0] = xh5;
            pos[a[i]][1] = yh5;
            pos[a[i]][2] = i;
        }
        if(a[i] == 44)
        {
            if(i < 28)
            {
                xh6 = vuj(i);
                yh6 = koti(i);
            }
            else
            {
                xh6 = 200;
                yh6 = 725;
            }
            pos[a[i]][0] = xh6;
            pos[a[i]][1] = yh6;
            pos[a[i]][2] = i;
        }
        if(a[i] == 45)
        {
            if(i < 28)
            {
                xh7 = vuj(i);
                yh7 = koti(i);
            }
            else
            {
                xh7 = 200;
                yh7 = 725;
            }
            pos[a[i]][0] = xh7;
            pos[a[i]][1] = yh7;
            pos[a[i]][2] = i;
        }
        if(a[i] == 46)
        {
            if(i < 28)
            {
                xh8 = vuj(i);
                yh8 = koti(i);
            }
            else
            {
                xh8 = 200;
                yh8 = 725;
            }
            pos[a[i]][0] = xh8;
            pos[a[i]][1] = yh8;
            pos[a[i]][2] = i;
        }
        if(a[i] == 47)
        {
            if(i < 28)
            {
                xh9 = vuj(i);
                yh9 = koti(i);
            }
            else
            {
                xh9 = 200;
                yh9 = 725;
            }
            pos[a[i]][0] = xh9;
            pos[a[i]][1] = yh9;
            pos[a[i]][2] = i;
        }
        if(a[i] == 48)
        {
            if(i < 28)
            {
                xh10 = vuj(i);
                yh10 = koti(i);
            }
            else
            {
                xh10 = 200;
                yh10 = 725;
            }
            pos[a[i]][0] = xh10;
            pos[a[i]][1] = yh10;
            pos[a[i]][2] = i;
        }
        if(a[i] == 49)
        {
            if(i < 28)
            {
                xhj = vuj(i);
                yhj = koti(i);
            }
            else
            {
                xhj = 200;
                yhj = 725;
            }
            pos[a[i]][0] = xhj;
            pos[a[i]][1] = yhj;
            pos[a[i]][2] = i;
        }
        if(a[i] == 50)
        {
            if(i < 28)
            {
                xhq = vuj(i);
                yhq = koti(i);
            }
            else
            {
                xhq = 200;
                yhq = 725;
            }
            pos[a[i]][0] = xhq;
            pos[a[i]][1] = yhq;
            pos[a[i]][2] = i;
        }
        if(a[i] == 51)
        {
            if(i < 28)
            {
                xhk = vuj(i);
                yhk = koti(i);
            }
            else
            {
                xhk = 200;
                yhk = 725;
            }
            pos[a[i]][0] = xhk;
            pos[a[i]][1] = yhk;
            pos[a[i]][2] = i;
        }
    }
    for(i=0; i<52; i++)
    {
        apex[i] = 0;
        clik[i] = 0;
    }
    for(i=0; i<52; i++)
    {
        re[i][0] = pos[i][0];
        re[i][1] = pos[i][1];
        re[i][2] = pos[i][2];
        re[i][3] = 0;
        fiar[i] = 1;
        acpy[i] = 0;
    }
    /*re[0][3] = 1;
    re[2][3] = 1;
    re[5][3] = 1;
    re[9][3] = 1;
    re[14][3] = 1;
    re[20][3] = 1;
    re[27][3] = 1;*/
    for(i=0; i<52; i++)
    {
        if(pos[i][2] == 0 || pos[i][2] == 2 || pos[i][2] == 5 || pos[i][2] == 9 || pos[i][2] == 14  || pos[i][2] == 20 || pos[i][2] == 27)
        {
            re[i][3] = 1;
        }
    }
    for(i=0; i<52; i++)
    {
        sthan[i] = 1;
        bp[i][0] = -1;
        bp[i][1] = -1;
        apex[i] = 0;
        fin[i] = 0;
    }
    for(i=0; i<20; i++)
    {
        for(j=0; j<7; j++)
        {
            biga[i][j] = 0;
        }
    }
    for(i=0; i<7; i++)
    {
        biga[i][i] = 1;
        for(j=i+1; j<7; j++)
        {
            biga[i][j] = 2;
        }
    }
    for(i=0; i<52; i++)
    {
        antcpy[i][0] = re[i][0];
        antcpy[i][01] = re[i][1];
        last[i] = 0;
    }

    for(i=0; i<52; i++)
    {
        if(re[i][0] == 100) bp[i][1] = 0;
        if(re[i][0] == 250) bp[i][1] = 1;
        if(re[i][0] == 400) bp[i][1] = 2;
        if(re[i][0] == 550) bp[i][1] = 3;
        if(re[i][0] == 700) bp[i][1] = 4;
        if(re[i][0] == 850) bp[i][1] = 5;
        if(re[i][0] == 1000) bp[i][1] = 6;
        if(re[i][0] == 200) bp[i][1] = -1;

        if(re[i][1] == 550) bp[i][0] = 0;
        if(re[i][1] == 525) bp[i][0] = 1;
        if(re[i][1] == 500) bp[i][0] = 2;
        if(re[i][1] == 475) bp[i][0] = 3;
        if(re[i][1] == 450) bp[i][0] = 4;
        if(re[i][1] == 425) bp[i][0] = 5;
        if(re[i][1] == 400) bp[i][0] = 6;
        if(re[i][1] == 375) bp[i][0] = 7;
        if(re[i][1] == 350) bp[i][0] = 8;
        if(re[i][1] == 325) bp[i][0] = 9;
        if(re[i][1] == 300) bp[i][0] = 10;
        if(re[i][1] == 275) bp[i][0] = 11;
        if(re[i][1] == 250) bp[i][0] = 12;
        if(re[i][1] == 225) bp[i][0] = 13;
        if(re[i][1] == 200) bp[i][0] = 14;
        if(re[i][1] == 175) bp[i][0] = 15;
        if(re[i][1] == 150) bp[i][0] = 16;
        if(re[i][1] == 125) bp[i][0] = 17;
        if(re[i][1] == 100) bp[i][0] = 18;

        /*if(re[i][1] == 450) bp[i][0] = 0;
         if(re[i][1] == 450) bp[i][0] = 0;
         if(re[i][1] == 450) bp[i][0] = 0;
         if(re[i][1] == 450) bp[i][0] = 0;*/
    }

    for(i=0; i<7; i++)
    {
        B[i][i] = 1;
        for(j=i+1; j<7; j++)
        {
            B[i][j] = 2;
        }
    }

    apex[0] = 1;
    apex[13] = 1;
    apex[26] = 1;
    apex[39] = 1;

    for(i=0; i<52; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n");
    for(i=0; i<52; i++)
        printf("%d   %d   %d   %d\n", pos[i][0], pos[i][1], pos[i][2], re[i][3]);

    for(i=0; i<52; i++)
        printf("%d %d\n", bp[i][0],  bp[i][1]);

    for(i=0; i<20; i++)
    {
        for(j=0; j<7; j++)
        {
            printf("%d ", biga[i][j]);
        }
        printf("\n");
    }

    iInitialize(1300, 900, "SOLITAIRE");

    return 0;
}






#include"Header.h"

void arm(int frame, char square[3])	//플레이어 팔 애니메이션 13프레임
{
	int xx, yy;

	switch(frame)
	{
	case -1:
		for(xx = 22, yy = 19; yy >= 13; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 13)
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
			Sleep(15);
		}
		break;
	case 0:
	case 1:
		for(xx = 22, yy = 19; yy >= 13; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 13)	
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
		}
		/*
				   ■■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■(22, 19)
			*/
		break;
	case 2:
		for(xx = 22, yy = 19; yy >= 12; yy--)
		{
			gotoxy(xx, yy);
			printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
			else if(yy == 13)
				xx += 2;
		}
		/*           ■ addx == 2
				   ■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 3:
		for(xx = 22, yy = 19; yy >= 12; yy--)
		{
			gotoxy(xx, yy);
			printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
			else if(yy == 13)
				xx++;
		}
		/*          ■
				   ■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 4:
		for(xx = 22, yy = 19; yy >= 12; yy--)
		{
			gotoxy(xx, yy);
			printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
		}
		/*         ■
				   ■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 5:
		for(xx = 22, yy = 19; yy >= 12; yy--)
		{
			gotoxy(xx, yy);
			printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
			else if(yy == 13)
				xx--;
		}
		/*        ■
				   ■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 6:
		for(xx = 22, yy = 19; yy >= 12; yy--)
		{
			gotoxy(xx, yy);
			printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
			else if(yy == 13)
				xx -= 2;
		}
		/*       ■
				   ■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 7:
		for(xx = 22, yy = 19; yy >= 12; yy--)
		{
			gotoxy(xx, yy);
			printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 15)
				xx++;
			else if(yy == 14)
				xx--;
			else if(yy == 13)
				xx -= 2;
		}
		/*      ■
				  ■
				   ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 8:
		for(xx = 22, yy = 19; yy >= 13; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 13)
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 16)
				xx++;
			else if(yy == 14)
				xx -= 4;
		}
		/*       
			  ■■
				  ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 9:
		for(xx = 22, yy = 19; yy >= 13; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 13)
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy >= 16)
				xx++;
			else if(yy == 15)
				xx--;
			else if(yy == 14)
				xx -= 4;
		}
		/*       
			 ■■
				 ■← yy == 14
				  ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 10:
		for(xx = 22, yy = 19; yy >= 13; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 13)
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy == 17)
				xx++;
			else if(yy == 15)
				xx--;
			else if(yy == 14)
				xx -= 4;
		}
		/*       
			■■
				■← yy == 14
				 ■
				 ■
				■
			  ■
			■
			*/
		break;
	case 11:
		for(xx = 22, yy = 19; yy >= 14; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 14)
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy == 16)
				xx--;
			else if(yy == 15)
				xx -= 4;
		}
		/*       
		   
		   ■■← yy == 14
			   ■
				■
				■
			  ■
			■
			*/
		break;
	case 12:
		for(xx = 22, yy = 19; yy >= 14; yy--)
		{
			gotoxy(xx, yy);
			if(yy == 14)
				printf("%s%s", square, square);
			else
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy == 16)
				xx -= 2;
			else if(yy == 15)
				xx -= 4;
		}
		/*       
			
		  ■■← yy == 14
			  ■
				■
				■
			  ■
			■
			*/
		break;
	default:
		for(xx = 22, yy = 19; yy >= 15; yy--)
		{
			gotoxy(xx, yy);
			if(yy == frame)
				printf("%s", square);
			if(yy >= 18)
				xx += 2;
			else if(yy == 16)
				xx -= 2;
		}
		break;
	}
		/*       
			
		      ← yy == 14
			   
				■
				■
			  ■
			■
			*/
		/*       
			
		      ← yy == 14
			    
				  
				■
			  ■
			■
			*/
		/*       
			
		      ← yy == 14
			    
				  
				  
			  ■
			■
			*/
		/*       
			
		      ← yy == 14
			    
				  
				  
			    
			■
			*/
		/*       
			
		      ← yy == 14
			    
				  
				  
			    
			  
			*/
}
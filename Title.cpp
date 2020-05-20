#include"Header.h"

int Title()	//타이틀화면을 띄워줍니다. 게임 시작/종료 선택이 가능합니다.
{
	int y = 23;
	char select = 0;

	textcolor(2);
	printf("\n");
	printf("                  ~<                                             \n");              
    printf("                  zBNNNBs                                        \n");          
    printf("                  B(   +z'    '+BNNND'   sh      +BN(       .D+	\n");          
    printf("                  D~   ss           N(   zs       BNDNN+    'B~	\n");          
    printf("                  B-   D+          -B-   D+           =N.   -B'	\n");          
    printf("                 -NzNNBN~          Ds    D~           (h    (B	\n");          
    printf("                  DNB~'D'         =Bz   =NNNND'       +z    <h	\n");          
    printf("                   'B~           ~N<B(  ~N-           B+    +z	\n");          
    printf("                   -B'          'N< ~B- <z            D(    s=	\n");          
    printf("                   hNNNNBB'    .B=   =z +z           ~B-    z<	\n");          
    printf("                <NNNB(   ~     ~N'      <s           ~B     D(	\n");           
    printf("                                        (-           =s    .D~	\n");          
    printf("                  -D+  s+            ss  -=          D<    'D-	\n");          
    printf("                  -B-  +=           'B~  (h          <     'D-	\n");          
    printf("                  +h  -BD           (N   BB'               'D'	\n");
	printf("                  +z-BNND<          <z-DBNN~               -N.	\n");
	printf("                  shB= =z           <DBs +s                'B'	\n");
	printf("                  zBN  B~           =NB- B<                 <'	\n");
	printf("                  +=BNNz'           ~+zNNs 						\n");
	textcolor(7);
	gotoxy(36, 23);
	printf("게임 시작");
	gotoxy(36, 24);
	printf("게임 종료");
	gotoxy(36, 23);

	while(select != 13)
	{
		select = _getch();	//_getch는 _getchar와 달리 문자를 입력하자마자 다음 문장으로 넘어가기 때문에 문자 입력 후 Enter키를 눌러줄 필요가 없습니다.
		switch(select)
		{
		case 72:	//위
			y = 23;
			break;
		case 80:	//아래
			y = 24;
			break;
		case 13:	//엔터
			if(y == 23)
			{
				Blink("게임 시작", 36, y, 14);
				system("cls");	//콘솔화면에 출력된 문장들을 지웁니다.
			}
			break;
		}
		gotoxy(36, y);
	}

	if(y == 23)
		return 0;
	else
		return 1;
}
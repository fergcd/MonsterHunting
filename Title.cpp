#include"Header.h"

int Title()	//Ÿ��Ʋȭ���� ����ݴϴ�. ���� ����/���� ������ �����մϴ�.
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
	printf("���� ����");
	gotoxy(36, 24);
	printf("���� ����");
	gotoxy(36, 23);

	while(select != 13)
	{
		select = _getch();	//_getch�� _getchar�� �޸� ���ڸ� �Է����ڸ��� ���� �������� �Ѿ�� ������ ���� �Է� �� EnterŰ�� ������ �ʿ䰡 �����ϴ�.
		switch(select)
		{
		case 72:	//��
			y = 23;
			break;
		case 80:	//�Ʒ�
			y = 24;
			break;
		case 13:	//����
			if(y == 23)
			{
				Blink("���� ����", 36, y, 14);
				system("cls");	//�ܼ�ȭ�鿡 ��µ� ������� ����ϴ�.
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
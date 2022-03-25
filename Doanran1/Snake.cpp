#include<iostream>
#include<ctime>
#include<string.h>
#include"console.h"
using namespace std;
struct Toado
{
	short x;
	short y;
};
struct Highscore
{
	char Name[15];
	short diem;
};
struct NamPlayer
{
	char Name[15];
};
#define ConsoleWidth 80
#define ConsoleHeight 45
#define MAX 100
#define Sodotgoc 4
#define Dauran 4
#define Dotran 254
#define KytuMoi 3
#define KytuMoiDB 6
#define Quatrai 1
#define Quaphai 2
#define Dilen 3
#define Dixuong 4
#define Tuongtren 10
#define Tuongtrai 5
#define Tuongphai 73
#define Tuongduoi 30
short  Sodot1 = 4, Sodot2 = 4, diem1 = 0, diem2 = 0, dem = 0, demmoi = 0, demmoiDB = 0, tiep = 1, dempause = 0;
short i = 200;

Toado Ran1[MAX];
Toado Ran2[MAX];
Highscore User[100];
NamPlayer TWOUser[2];
void Loading();
void Vetieude();
void Tuong();
void Menu();
void Khoitaoran1();
void Khoitaoran2();
void Veran1(Toado);
void Veran2(Toado);
void Batsukien1(short &);
void Batsukien2(short &, short &);
Toado Randichuyen1(short);
Toado Randichuyen2(short);
Toado Hienthimoi1();
Toado Hienthimoi2();
Toado HienthimoiDB1();
Toado HienthimoiDB2();
Toado Hienmoilamcham();
void Reset1();
void Reset2();
void Nhapten1();
void Nhapten2();
void Nhandiem();
void Capnhatbangdiem();
void Xoatrung(short);
void Bangdiem();
void Hienthicapdo();
void Diem1();
void Diem2();
void Hienten1();
void Hienten2();
void Manhinhchoigame1();
void Manhinhchoigame2();
bool KTanmoi1(Toado);
bool KTanmoi2(Toado);
void Themdot1();
void Themdot2();
bool KTanmoiDB1(Toado);
bool KTanmoiDB2(Toado);
bool KTanmoicham(Toado);
bool Ktramoitrungthan1(short, short);
bool Ktramoitrungthan2(short, short);
bool KTthua1();
bool KTthua2();
void Xulythua1();
void Xulythua2();
void Xulyhoa();
void Xulythua();
void Chayran1(short);
void Chayran2();
void Choncapdo();
void Huongdan();
void HuongdanONE();
void HuongdanTWO();
void Info();
void Vetextsnake(short);

void Vetextsnake(short k)
{
	setTextColor(k);
	int l = 2;
	gotoXY(16 + l, 21);
	cout << "oooooooo";
	gotoXY(16 + l, 22);
	cout << "oooooooo";
	gotoXY(16 + l, 23);
	cout << "ooo";
	gotoXY(16 + l, 24);
	cout << "oooooooo";
	gotoXY(16 + l, 25);
	cout << "oooooooo";
	gotoXY(21 + l, 26);
	cout << "ooo";
	gotoXY(16 + l, 27);
	cout << "oooooooo";
	gotoXY(16 + l, 28);
	cout << "oooooooo";
	gotoXY(25 + l, 21);
	cout << "ooo";
	gotoXY(25 + l, 22);
	cout << "ooo";
	gotoXY(25 + l, 23);
	cout << "ooo";
	gotoXY(25 + l, 24);
	cout << "ooo";
	gotoXY(25 + l, 25);
	cout << "ooo";
	gotoXY(25 + l, 26);
	cout << "ooo";
	gotoXY(25 + l, 27);
	cout << "ooo";
	gotoXY(25 + l, 28);
	cout << "ooo";
	gotoXY(30 + l, 21);
	cout << "ooo";
	gotoXY(30 + l, 22);
	cout << "ooo";
	gotoXY(30 + l, 23);
	cout << "ooo";
	gotoXY(30 + l, 24);
	cout << "ooo";
	gotoXY(30 + l, 25);
	cout << "ooo";
	gotoXY(30 + l, 26);
	cout << "ooo";
	gotoXY(30 + l, 27);
	cout << "ooo";
	gotoXY(30 + l, 28);
	cout << "ooo";
	gotoXY(28 + l, 22);
	cout << "o";
	gotoXY(28 + l, 23);
	cout << "o";
	gotoXY(29 + l, 23);
	cout << "o";
	gotoXY(29 + l, 24);
	cout << "o";
	gotoXY(34 + l, 21);
	cout << "ooooo";
	gotoXY(34 + l, 22);
	cout << "ooooo";
	gotoXY(34 + l, 23);
	cout << "ooo";
	gotoXY(34 + l, 24);
	cout << "ooooo";
	gotoXY(34 + l, 25);
	cout << "ooooo";
	gotoXY(34 + l, 26);
	cout << "ooo";
	gotoXY(34 + l, 27);
	cout << "ooo";
	gotoXY(34 + l, 28);
	cout << "ooo";
	gotoXY(39 + l, 21);
	cout << "ooo";
	gotoXY(39 + l, 22);
	cout << "ooo";
	gotoXY(39 + l, 23);
	cout << "ooo";
	gotoXY(39 + l, 24);
	cout << "ooo";
	gotoXY(39 + l, 25);
	cout << "ooo";
	gotoXY(39 + l, 26);
	cout << "ooo";
	gotoXY(39 + l, 27);
	cout << "ooo";
	gotoXY(39 + l, 28);
	cout << "ooo";
	gotoXY(43 + l, 21);
	cout << "ooo";
	gotoXY(43 + l, 22);
	cout << "ooo";
	gotoXY(43 + l, 23);
	cout << "ooo";
	gotoXY(43 + l, 24);
	cout << "oooooo";
	gotoXY(43 + l, 25);
	cout << "oooooo";
	gotoXY(43 + l, 26);
	cout << "ooooo";
	gotoXY(43 + l, 27);
	cout << "ooo";
	gotoXY(43 + l, 28);
	cout << "ooo";
	gotoXY(47 + l, 23);
	cout << "ooo";
	gotoXY(48 + l, 22);
	cout << "ooo";
	gotoXY(49 + l, 21);
	cout << "ooo";
	gotoXY(48 + l, 26);
	cout << "oo";
	gotoXY(48 + l, 27);
	cout << "ooo";
	gotoXY(49 + l, 28);
	cout << "ooo";
	gotoXY(53 + l, 21);
	cout << "oooooooo";
	gotoXY(53 + l, 22);
	cout << "oooooooo";
	gotoXY(53 + l, 23);
	cout << "ooo";
	gotoXY(53 + l, 24);
	cout << "oooooooo";
	gotoXY(53 + l, 25);
	cout << "oooooooo";
	gotoXY(53 + l, 26);
	cout << "ooo";
	gotoXY(53 + l, 27);
	cout << "oooooooo";
	gotoXY(53 + l, 28);
	cout << "oooooooo";
}
void Tuong()
{
	for (int i = Tuongtrai; i <= Tuongphai; i++)
	{
		gotoXY(i, Tuongtren);
		cout << (char)220;
	}
	for (int i = Tuongtren + 1; i <= Tuongduoi; i++)
	{
		gotoXY(Tuongtrai, i);
		cout << (char)221;
	}
	for (int i = Tuongtren + 1; i <= Tuongduoi; i++)
	{
		gotoXY(Tuongphai, i);
		cout << (char)222;
	}
	for (int i = Tuongtrai; i <= Tuongphai; i++)
	{
		gotoXY(i, Tuongduoi);
		cout << (char)223;
	}
}
void Khoitaoran1()
{
	Ran1[0].x = Tuongtrai + 4;
	Ran1[1].x = Tuongtrai + 3;
	Ran1[2].x = Tuongtrai + 2;
	Ran1[3].x = Tuongtrai + 1;
	Ran1[0].y = Ran1[1].y = Ran1[2].y = Ran1[3].y = Tuongtren + 1;
}
void Khoitaoran2()
{
	Ran2[0].x = Tuongphai - 4;
	Ran2[1].x = Tuongphai - 3;
	Ran2[2].x = Tuongphai - 2;
	Ran2[3].x = Tuongphai - 1;
	Ran2[0].y = Ran2[1].y = Ran2[2].y = Ran2[3].y = Tuongtren + 1;
}
void Veran1(Toado Dotcuoicu1)
{
	for (short i = 0; i < Sodot1; i++)
	{
		gotoXY(Ran1[i].x, Ran1[i].y);
		if (i == 0)
		{
			setTextColor(12);
			cout << (char)Dauran;
		}
		else
		{
			setTextColor(10);
			cout << (char)Dotran;
		}
		gotoXY(Dotcuoicu1.x, Dotcuoicu1.y);
		cout << " ";
		noCursorType();
	}
}
void Veran2(Toado Dotcuoicu2)
{
	for (short i = 0; i < Sodot2; i++)
	{
		gotoXY(Ran2[i].x, Ran2[i].y);
		if (i == 0)
		{
			setTextColor(13);
			cout << (char)Dauran;
		}
		else
		{
			setTextColor(9);
			cout << (char)Dotran;
		}
		gotoXY(Dotcuoicu2.x, Dotcuoicu2.y);
		cout << " ";
		noCursorType();
	}
}
Toado Randichuyen1(short huong1)
{
	Toado Dotcuoicu = Ran1[Sodot1 - 1];
	for (short i = Sodot1 - 1; i >= 1; i--)
	{
		Ran1[i] = Ran1[i - 1];
	}
	switch (huong1)
	{
	case Quatrai:
		Ran1[0].x--;
		break;
	case Quaphai:
		Ran1[0].x++;
		break;
	case Dilen:
		Ran1[0].y--;
		break;
	case Dixuong:
		Ran1[0].y++;
		break;
	}
	return Dotcuoicu;
}
Toado Randichuyen2(short huong2)
{
	Toado Dotcuoicu2 = Ran2[Sodot2 - 1];
	for (short i = Sodot2 - 1; i >= 1; i--)
	{
		Ran2[i] = Ran2[i - 1];
	}
	switch (huong2)
	{
	case Quatrai:
		Ran2[0].x--;
		break;
	case Quaphai:
		Ran2[0].x++;
		break;
	case Dilen:
		Ran2[0].y--;
		break;
	case Dixuong:
		Ran2[0].y++;
		break;
	}
	return Dotcuoicu2;
}
void Batsukien1(short &huong1)
{
	short Key = inputKey();
	if (Key == KEY_UP && huong1 != Dixuong)
		huong1 = Dilen;
	else if (Key == KEY_DOWN && huong1 != Dilen)
		huong1 = Dixuong;
	else if (Key == KEY_RIGHT && huong1 != Quatrai)
		huong1 = Quaphai;
	else if (Key == KEY_LEFT && huong1 != Quaphai)
		huong1 = Quatrai;
	else if (Key == 32 && dempause == 0)
	{
		tiep = 2;
		dempause++;
	}
	else if (Key == 32 && dempause == 1)
	{
		tiep = 1;
		dempause = 0;
	}
	else if (Key == 27)
	{
		tiep = 3;
	}
}
void Batsukien2(short &huong1, short&huong2)
{
	short Key = inputKey();
	if ((Key == 'w' || Key == 'W') && huong1 != Dixuong)
		huong1 = Dilen;
	else if ((Key == 's' || Key == 'S') && huong1 != Dilen)
		huong1 = Dixuong;
	else if ((Key == 'd' || Key == 'D') && huong1 != Quatrai)
		huong1 = Quaphai;
	else if ((Key == 'a' || Key == 'A') && huong1 != Quaphai)
		huong1 = Quatrai;
	if (Key == KEY_UP  && huong2 != Dixuong)
		huong2 = Dilen;
	else if (Key == KEY_DOWN && huong2 != Dilen)
		huong2 = Dixuong;
	else if (Key == KEY_RIGHT && huong2 != Quatrai)
		huong2 = Quaphai;
	else if (Key == KEY_LEFT && huong2 != Quaphai)
		huong2 = Quatrai;
}
bool KTthua()
{
	if (Ran1[0].y == Tuongtren || Ran1[0].y == Tuongduoi)
		return true;
	else if (Ran1[0].x == Tuongtrai || Ran1[0].x == Tuongphai)
		return true;
	else
	{
		for (short i = Sodot1 - 1; i > 0; i--)
		if (Ran1[0].x == Ran1[i].x&&Ran1[0].y == Ran1[i].y)
			return true;
	}
	return false;
}
bool KTthua1()
{
	if (Ran1[0].y == Tuongtren || Ran1[0].y == Tuongduoi)
		return true;
	else if (Ran1[0].x == Tuongtrai || Ran1[0].x == Tuongphai)
		return true;
	else if (Ran1[0].x == Ran2[0].x&&Ran1[0].y == Ran2[0].y)
	{
		if (diem1<diem2)
			return true;
		else if (diem1 == diem2)
			return true;
	}
	else if (diem2 == 15)
		return true;
	else
	{
		for (short i = Sodot1 - 1; i > 0; i--)
		{
			if (Ran1[0].x == Ran1[i].x&&Ran1[0].y == Ran1[i].y)
				return true;
			if (Ran1[0].x == Ran2[i].x&&Ran1[0].y == Ran2[i].y)
				return true;
		}
	}
	return false;
}
bool KTthua2()
{
	if (Ran2[0].y == Tuongtren || Ran2[0].y == Tuongduoi)
		return true;
	else if (Ran2[0].x == Tuongtrai || Ran2[0].x == Tuongphai)
		return true;
	else if (Ran1[0].x == Ran2[0].x&&Ran1[0].y == Ran2[0].y)
	{
		if (diem2<diem1)
			return true;
		else if (diem1 == diem2)
			return true;
	}
	else if (diem1 == 15)
		return true;
	else
	{
		for (short i = Sodot2 - 1; i > 0; i--)
		{
			if (Ran2[0].x == Ran2[i].x&&Ran2[0].y == Ran2[i].y)
				return true;
			if (Ran2[0].x == Ran1[i].x&&Ran2[0].y == Ran1[i].y)
				return true;
		}
	}
	return false;
}
void Xulythua()
{
	Sleep(250);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 4, 5);
	setTextColor(15);
	cout << "GAME OVER\n";
	gotoXY(ConsoleWidth / 2 - 2, 7);
	cout << "SCORE\n";
	gotoXY(ConsoleWidth / 2, 9);
	cout << diem1;
	Sleep(1500);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "PLAY AGAIN\n";
	gotoXY(ConsoleWidth / 2 - 2, 7);
	cout << "HOME\n";
	dem++;
	short x = ConsoleWidth / 2 - 7, y = 5;
	while (1)
	{
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 7)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 7;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
		}
		else if (key == 13)
		{
			if (y == 5)
			{
				Chayran1(i);
				break;
			}
			else
			{
				Menu();
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 7;
		else
			x = ConsoleWidth / 2 - 4;
	}
}
void Xulyhoa()
{
	Sleep(150);
	clrscr();
	gotoXY(ConsoleWidth / 2 - 4, 18);
	setTextColor(15);
	cout << "HOA  NHE";
	Sleep(2500);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "PLAY AGAIN\n";
	gotoXY(ConsoleWidth / 2 - 2, 7);
	cout << "HOME\n";
	short x = ConsoleWidth / 2 - 7, y = 5;
	while (1)
	{
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 7)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 7;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
		}
		else if (key == 13)
		{
			if (y == 5)
			{
				Chayran1(i);
				break;
			}
			else
			{
				Menu();
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 7;
		else
			x = ConsoleWidth / 2 - 4;
	}
}
void Xulythua1()
{
	Sleep(150);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 3, 15);
	setTextColor(14);
	cout << "WINNER\n";
	gotoXY(ConsoleWidth / 2 - (strlen(TWOUser[1].Name) / 2), 17);
	setTextColor(15);
	cout << TWOUser[1].Name;
	Sleep(2000);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "PLAY AGAIN\n";
	gotoXY(ConsoleWidth / 2 - 2, 7);
	cout << "HOME\n";
	short x = ConsoleWidth / 2 - 7, y = 5;
	while (1)
	{
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 7)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 7;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
		}
		else if (key == 13)
		{
			if (y == 5)
			{
				Chayran2();
				break;
			}
			else
			{
				Menu();
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 7;
		else
			x = ConsoleWidth / 2 - 4;
	}
}
void Xulythua2()
{
	Sleep(150);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 3, 15);
	setTextColor(14);
	cout << "WINNER\n";
	gotoXY(ConsoleWidth / 2 - strlen(TWOUser[0].Name) / 2, 17);
	setTextColor(15);
	cout << TWOUser[0].Name;
	Sleep(2000);
	clrscr();
	Vetieude();
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "PLAY AGAIN\n";
	gotoXY(ConsoleWidth / 2 - 2, 7);
	cout << "HOME\n";
	short x = ConsoleWidth / 2 - 7, y = 5;
	while (1)
	{
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 7)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 7;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
		}
		else if (key == 13)
		{
			if (y == 5)
			{
				Chayran2();
				break;
			}
			else
			{
				Menu();
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 7;
		else
			x = ConsoleWidth / 2 - 4;
	}
}
Toado Hienthimoi1()
{
	short x, y;
	do
	{
		srand(time(NULL));
		x = (Tuongtrai + 1) + rand() % ((Tuongphai - 1) - (Tuongtrai + 1));
		y = (Tuongtren + 1) + rand() % ((Tuongduoi - 1) - (Tuongtren + 1));
	} while (Ktramoitrungthan1(x, y));
	gotoXY(x, y);
	setTextColor(14);
	cout << (char)KytuMoi;
	return Toado{ x, y };
}
Toado Hienthimoi2()
{
	short x, y;
	do
	{
		srand(time(NULL));
		x = (Tuongtrai + 1) + rand() % ((Tuongphai - 1) - (Tuongtrai + 1));
		y = (Tuongtren + 1) + rand() % ((Tuongduoi - 1) - (Tuongtren + 1));
	} while (Ktramoitrungthan1(x, y) == true || Ktramoitrungthan2(x, y) == true);
	gotoXY(x, y);
	setTextColor(14);
	cout << (char)KytuMoi;
	return Toado{ x, y };
}
bool KTanmoi1(Toado Moi)
{
	if (Ran1[0].x == Moi.x&&Ran1[0].y == Moi.y)
		return true;
	return false;
}
bool KTanmoi2(Toado Moi)
{
	if (Ran2[0].x == Moi.x&&Ran2[0].y == Moi.y)
		return true;
	return false;
}
void Themdot1()
{
	Ran1[Sodot1] = Ran1[Sodot1 - 1];
	Sodot1++;
}
void Themdot2()
{
	Ran2[Sodot2] = Ran2[Sodot2 - 1];
	Sodot2++;
}
void Reset1()
{
	Sodot1 = Sodotgoc;
	demmoi = 0;
	demmoiDB = 0;
	diem1 = 0;
	tiep = 1;
}
void Reset2()
{
	Sodot1 = Sodotgoc;
	Sodot2 = Sodotgoc;
	demmoi = 0;
	diem1 = 0;
	diem2 = 0;
	tiep = 1;
}
void Menu()
{
	clrscr();
	Vetieude();
	short x = 33, y = 5, k = 10;
	setTextColor(11);
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "ONE PLAYER\n";
	setTextColor(9);
	gotoXY(ConsoleWidth / 2 - 5, 7);
	cout << "TWO PLAYER\n";
	setTextColor(14);
	gotoXY(ConsoleWidth / 2 - 5, 9);
	cout << "BANG  DIEM\n";
	setTextColor(3);
	gotoXY(ConsoleWidth / 2 - 3, 11);
	cout << "CHE DO\n";
	setTextColor(13);
	gotoXY(ConsoleWidth / 2 - 2, 13);
	cout << "HELP\n";
	setTextColor(10);
	gotoXY(ConsoleWidth / 2 - 2, 15);
	cout << "INFO\n";
	setTextColor(12);
	gotoXY(ConsoleWidth / 2 - 2, 17);
	cout << "QUIT\n";
	while (1)
	{
		Vetextsnake(k);
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 17)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
			k++;
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 17;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
			k++;
		}
		else if (key == 13)
		{
			if (y == 5)
			{
				Chayran1(i);
				break;
			}
			else if (y == 7)
			{
				Chayran2();
				break;
			}
			else if (y == 9)
			{
				Bangdiem();
				break;
			}
			else if (y == 11)
			{
				Choncapdo();
				break;
			}
			else if (y == 13)
			{
				Huongdan();
				break;
			}
			else if (y == 15)
			{
				Info();
				break;
			}
			else
			{
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 7;
		else if (y == 7)
			x = ConsoleWidth / 2 - 7;
		else if (y == 9)
			x = ConsoleWidth / 2 - 7;
		else if (y == 11)
			x = ConsoleWidth / 2 - 5;
		else if (y == 13)
			x = ConsoleWidth / 2 - 4;
		else if (y == 15)
			x = ConsoleWidth / 2 - 4;
		else
			x = ConsoleWidth / 2 - 4;
		if (k == 15)
			k = 10;
	}

}
void Choncapdo()
{
	clrscr();
	Vetieude();
	setTextColor(12);
	gotoXY(ConsoleWidth / 2 - 1, 5);
	cout << "KHO\n";
	setTextColor(10);
	gotoXY(ConsoleWidth / 2 - 5, 7);
	cout << "TRUNG BINH\n";
	setTextColor(13);
	gotoXY(ConsoleWidth / 2 , 9);
	cout << "DE\n";
	short x = ConsoleWidth / 2 - 3, y = 9;
	if (i == 100)
		y = 5;
	else if (i == 150)
		y = 7;
	else
		y = 9;
	if (y == 5)
		x = ConsoleWidth / 2 - 4;
	else if (y == 7)
		x = ConsoleWidth / 2 - 7;
	else
		x = ConsoleWidth / 2 - 3;
	while (1)
	{
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 9)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 9;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
		}
		else if (key == 13)
		{
			if (y == 5)
			{
				i = 100;
				break;
			}
			else if (y == 7)
			{
				i = 150;
				break;
			}
			else
			{
				i = 200;
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 4;
		else if (y == 7)
			x = ConsoleWidth / 2 - 7;
		else
			x = ConsoleWidth / 2 - 3;

	}
	Menu();
}
void Diem1()
{
	setTextColor(15);
	gotoXY(ConsoleWidth - 10, 4);
	cout << "Diem: " << diem1;
}
void Diem2()
{
	setTextColor(15);
	gotoXY(2, 5);
	cout << "SCORE: " << diem1;
	gotoXY(60, 5);
	cout << "SCORE: " << diem2;
}
void Nhapten1()
{
	Vetieude();
	setTextColor(10);
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "NAME PLAYER\n";
	setTextColor(15);
	gotoXY(ConsoleWidth / 2 - 1, 6);
	cin.getline(User[dem].Name, 15);
}
void Nhapten2()
{
	Vetieude();
	setTextColor(10);
	gotoXY(ConsoleWidth / 2 - 6, 5);
	cout << "NAME PLAYER 1\n";
	setTextColor(15);
	gotoXY(ConsoleWidth / 2 - 1, 6);
	cin.getline(TWOUser[0].Name, 15);
	setTextColor(9);
	gotoXY(ConsoleWidth / 2 - 6, 8);
	cout << "NAME PLAYER 2\n";
	setTextColor(15);
	gotoXY(ConsoleWidth / 2 - 1, 9);
	cin.getline(TWOUser[1].Name, 15);
}
void Vetieude()
{
	clrscr();
	gotoXY(ConsoleWidth / 2 - 5, 1);
	setTextColor(11);
	cout << "RAN SAN MOI\n";
	setTextColor(7);
	for (short i = 0; i < ConsoleWidth; i++)
	{
		setTextColor(7);
		gotoXY(i, 0);
		cout << (char)45;
		gotoXY(i, 2);
		cout << (char)45;
	}
}
void Loading()
{
	setTextColor(15);
	short i = 0, x = 29, y = 1000;
	do
	{
		gotoXY(ConsoleWidth / 2 - 12, 13);
		noCursorType();
		cout << "Loading:          " << i << " %";
		for (short i = 28; i <= 50; i++)
		{
			gotoXY(i, 14);
			noCursorType();
			cout << (char)220;
			gotoXY(i, 16);
			noCursorType();
			cout << (char)223;
		}
		for (short i = 15; i < 16; i++)
		{
			gotoXY(28, i);
			noCursorType();
			cout << (char)221;
			gotoXY(50, i);
			noCursorType();
			cout << (char)222;
		}
		Sleep(y);
		gotoXY(x, 15);
		cout << (char)254;
		i += 5;
		x++;
		y -= 50;
	} while (i <= 100);
	Sleep(1500);
}
void Hienthicapdo()
{
	if (i == 200)
	{
		gotoXY(2, 6);
		cout << "Cap do: DE\n";
	}
	else if (i == 150)
	{
		gotoXY(2, 6);
		cout << "Cap do: TRUNNG BINH\n";
	}
	else if (i == 100)
	{
		gotoXY(2, 6);
		cout << "Cap do: KHO\n";
	}
}
void Xoatrung(short x)
{
	for (short i = x; i < dem - 1; i++)
	{
		User[i].diem = User[i + 1].diem;
		strcpy_s(User[i].Name, User[i + 1].Name);
	}
	dem--;
}
void Bangdiem()
{
	Vetieude();
	Capnhatbangdiem();
	while (1)
	{
		gotoXY(ConsoleWidth / 2 - 4, 5);
		setTextColor(14);
		cout << "BANG DIEM";
		setTextColor(15);
		if (dem == 0)
		{
			gotoXY(ConsoleWidth / 2 - 4, 8);
			cout << "NO PLAYER\n";
		}
		else
		{
			short y = 9;
			gotoXY(ConsoleWidth / 2 - 16, 8);
			cout << "NAME PLAYER\n";
			gotoXY(ConsoleWidth / 2 + 6, 8);
			cout << "SCORE\n";
			for (short i = 0; i < dem; i++)
			{
				gotoXY(ConsoleWidth / 2 - 16, y);
				cout << i + 1 << ". " << User[i].Name;
				gotoXY(ConsoleWidth / 2 + 8, y);
				cout << User[i].diem;
				y++;
			}
		}
		int key = inputKey();
		if (key == 27)
			break;
	}
	Menu();
}
void Capnhatbangdiem()
{
	char a[15];
	for (short i = 0; i < dem; i++)
	{
		for (short j = 0; j < i; j++)
		{
			if (strcmp(User[i].Name, User[j].Name) == 0)
			{
				if (User[i].diem > User[j].diem)
				{
					Xoatrung(j);
					i--;
				}
				else
				{
					User[i].diem = User[j].diem;
					Xoatrung(j);
					i--;
				}
			}
		}
	}
	for (short i = 0; i < dem; i++)
	{
		for (short j = 0; j < i; j++)
		{
			if (User[i].diem > User[j].diem)
			{
				short tam = User[j].diem;
				User[j].diem = User[i].diem;
				User[i].diem = tam;
				strcpy_s(a, User[j].Name);
				strcpy_s(User[j].Name, User[i].Name);
				strcpy_s(User[i].Name, a);
			}
		}
	}
}
bool Ktramoitrungthan1(short x, short y)
{
	for (short i = 0; i < Sodot1; i++)
	if (Ran1[i].x == x&&Ran1[i].y == y)
		return true;
	return false;
}
bool Ktramoitrungthan2(short x, short y)
{
	for (short i = 0; i < Sodot2; i++)
	if (Ran2[i].x == x&&Ran2[i].y == y)
		return true;
	return false;
}
void Hienten1()
{
	setTextColor(15);
	gotoXY(2, 4);
	cout << "Name Player: " << User[dem].Name;
}
void Hienten2()
{
	setTextColor(15);
	gotoXY(2, 4);
	cout << "PLAYER 1: " << TWOUser[0].Name;
	gotoXY(60, 4);
	cout << "PLAYER 2: " << TWOUser[1].Name;
}
void Manhinhchoigame1()
{
	Hienten1();
	Hienthicapdo();
	Diem1();
}
void Manhinhchoigame2()
{
	Hienten2();
	Diem2();
}
Toado HienthimoiDB1()
{
	short a, b;
	do
	{
		srand(time(NULL));
		a = (Tuongtrai + 2) + rand() % ((Tuongphai - 2) - (Tuongtrai + 2));
		b = (Tuongtren + 2) + rand() % ((Tuongduoi - 2) - (Tuongtren + 2));
	} while (Ktramoitrungthan1(a, b));
	gotoXY(a, b);
	setTextColor(13);
	cout << (char)KytuMoiDB;
	return{ a, b };
}
Toado HienthimoiDB2()
{
	short a, b;
	do
	{
		srand(time(NULL));
		a = (Tuongtrai + 2) + rand() % ((Tuongphai - 2) - (Tuongtrai + 2));
		b = (Tuongtren + 2) + rand() % ((Tuongduoi - 2) - (Tuongtren + 2));
	} while (Ktramoitrungthan1(a, b) == true || Ktramoitrungthan2(a, b) == true);
	gotoXY(a, b);
	setTextColor(13);
	cout << (char)KytuMoiDB;
	return{ a, b };
}
Toado Hienmoilamcham()
{
	short a, b;
	do
	{
		srand(time(NULL));
		a = (Tuongtrai + 1) + rand() % ((Tuongphai - 1) - (Tuongtrai + 1));
		b = (Tuongtren + 1) + rand() % ((Tuongduoi - 1) - (Tuongtren + 1));
	} while (Ktramoitrungthan1(a, b));
	gotoXY(a, b);
	setTextColor(11);
	cout << (char)5;
	return{ a, b };
}
bool KTanmoiDB1(Toado MoiDB)
{
	if (Ran1[0].x == MoiDB.x&&Ran1[0].y == MoiDB.y)
		return true;
	return false;
}
bool KTanmoiDB2(Toado MoiDB)
{
	if (Ran2[0].x == MoiDB.x&&Ran2[0].y == MoiDB.y)
		return true;
	return false;
}
bool KTanmoicham(Toado MOICHAM)
{
	if (Ran1[0].x == MOICHAM.x&&Ran1[0].y == MOICHAM.y)
		return true;
	return false;
}
void Nhandiem()
{
	User[dem].diem = diem1;
}
void Chayran1(short i)
{
	Reset1();
	Nhapten1();
	Khoitaoran1();
	Vetieude();
	Tuong();
	Manhinhchoigame1();
	short x = i;
	short huong1 = Quaphai;
	Toado Moi = Hienthimoi1();
	Toado MOIDB = { 0, 0 };
	Toado MOICHAM = { 0, 0 };
	int key, dempause = 0;
	while (1)
	{
		Batsukien1(huong1);
		if (tiep == 1)
		{
			Toado Dotcuoicu1 = Randichuyen1(huong1);
			Veran1(Dotcuoicu1);
			if (KTanmoi1(Moi) == true)
			{
				Moi = Hienthimoi1();
				Themdot1();
				diem1++;
				demmoi++;
				if (demmoi == 5)
					MOIDB = HienthimoiDB1();
			}
			if (KTanmoiDB1(MOIDB) == true)
			{
				for (int i = 0; i < 2; i++)
					Themdot1();
				MOIDB = { 0, 0 };
				diem1 = diem1 + 2;
				x -= 25;
				demmoi = 0;
				demmoiDB++;
				if (demmoiDB == 3)
					MOICHAM = Hienmoilamcham();
			}
			if (KTanmoicham(MOICHAM) == true)
			{
				x += 30;
				demmoiDB = 0;
				MOICHAM = { 0, 0 };
			}
			Diem1();
			Nhandiem();
			if (KTthua() == true)
			{
				Xulythua();
				break;
			}
			Sleep(x);
		}
		if (tiep == 3)
		{
			dem++;
			break;
		}
	}
	Menu();
}
void Chayran2()
{
	Reset2();
	Nhapten2();
	Khoitaoran1();
	Khoitaoran2();
	Vetieude();
	Tuong();
	Manhinhchoigame2();
	short huong1 = Quaphai;
	short huong2 = Quatrai;
	Toado Moi = Hienthimoi2();
	Toado MOIDB = { 0, 0 };
	while (1)
	{
		Batsukien2(huong1, huong2);
		Toado Dotcuoicu1 = Randichuyen1(huong1);
		Toado Dotcuoicu2 = Randichuyen2(huong2);
		Veran1(Dotcuoicu1);
		Veran2(Dotcuoicu2);
		if (KTanmoi1(Moi) == true)
		{
			Moi = Hienthimoi2();
			Themdot1();
			diem1++;
			if (demmoi == 5)
				MOIDB = HienthimoiDB2();
			demmoi++;
		}
		else if (KTanmoi2(Moi) == true)
		{
			Moi = Hienthimoi2();
			Themdot2();
			diem2++;
			if (demmoi == 5)
				MOIDB = HienthimoiDB2();
			demmoi++;
		}
		if (KTanmoiDB1(MOIDB) == true)
		{
			for (int i = 0; i < 2; i++)
				Themdot1();
			diem1 = diem1 + 2;
			MOIDB = { 0, 0 };
			demmoi = 1;
		}
		else if (KTanmoiDB2(MOIDB) == true)
		{
			for (int i = 0; i < 2; i++)
				Themdot2();
			diem2 = diem2 + 2;
			MOIDB = { 0, 0 };
			demmoi = 1;
		}
		Diem2();
		if (KTthua1() == true && KTthua2() == true)
		{
			Xulyhoa();
			break;
		}
		else if (KTthua1() == true)
		{
			Xulythua1();
			break;
		}
		else if (KTthua2() == true)
		{
			Xulythua2();
			break;
		}
		Sleep(200);
	}
}
void Huongdan()
{
	Vetieude();
	setTextColor(10);
	gotoXY(ConsoleWidth / 2 - 5, 5);
	cout << "ONE PLAYER\n";
	setTextColor(9);
	gotoXY(ConsoleWidth / 2 - 5, 7);
	cout << "TWO PLAYER\n";
	short x = ConsoleWidth / 2 - 7, y = 5;
	while (1)
	{
		gotoXY(x, y);
		setTextColor(15);
		cout << (char)16;
		noCursorType();
		short key = inputKey();
		if (key == KEY_DOWN)
		{
			if (y == 7)
			{
				gotoXY(x, y);
				cout << " ";
				y = 5;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y += 2;
			}
		}
		else if (key == KEY_UP)
		{
			if (y == 5)
			{
				gotoXY(x, y);
				cout << " ";
				y = 7;
			}
			else
			{
				gotoXY(x, y);
				cout << " ";
				y -= 2;
			}
		}
		else if (key == 27)
			break;
		else if (key == 13)
		{
			if (y == 5)
			{
				HuongdanONE();
				break;
			}
			else
			{
				HuongdanTWO();
				break;
			}
		}
		if (y == 5)
			x = ConsoleWidth / 2 - 7;
		else
			x = ConsoleWidth / 2 - 7;
	}
	Menu();
}
void HuongdanONE()
{
	Vetieude();
	while (1)
	{
		for (short i = 29; i < 52; i++)
		{
			setTextColor(15);
			gotoXY(i, 5);
			cout << (char)45;
			gotoXY(i, 7);
			cout << (char)45;
		}
		gotoXY(ConsoleWidth / 2 - 16, 6);
		setTextColor(14);
		cout << "HUONG DAN SU DUNG TRUOC KHI DUNG";
		setTextColor(15);
		gotoXY(1, 9);
		cout << "Su dung cac phim ";
		gotoXY(18, 9);
		cout << (char)17;
		gotoXY(20, 8);
		cout << (char)30;
		gotoXY(20, 10);
		cout << (char)31;
		gotoXY(22, 9);
		cout << (char)16;
		gotoXY(24, 9);
		cout << "De di chuyen con ran den vi tri con moi, moi lan an moi ";
		gotoXY(1, 11);
		cout << "ran dai ra, ran se chet khi dung tuong hoac dung than. Khi an con moi ";
		setTextColor(14);
		cout << (char)KytuMoi;
		setTextColor(15);
		cout << " ran se";
		gotoXY(1, 13);
		cout << "tang len 1 dot va 1 diem. Khi an con moi dac biet ";
		setTextColor(13);
		cout << (char)KytuMoiDB;
		setTextColor(15);
		cout << " ran se tang len 2 dot va 2 ";
		gotoXY(1, 15);
		cout << "diem, dong thoi giup ran di chuyen nhanh hon mot chut. Con moi ";
		setTextColor(11);
		cout << (char)5;
		setTextColor(15);
		cout << " se khong tang";
		gotoXY(1, 17);
		cout << "diem va dot, nhung no se giup ban di chuyen cham lai.";
		gotoXY(1, 19);
		cout << "Su dung phim ESC de thoat khoi cac trang BANG DIEM, HELP, INFO.";
		gotoXY(1, 21);
		cout << "Trong qua trinh choi game neu muon dung de lam 1 viec gi do, thi co the nhan ";
		gotoXY(1, 23);
		cout << "phim SPACE de dung, de tiep tuc vui long nhan lai 1 lan phim SPACE nua, hoac";
		gotoXY(1, 25);
		cout << "muon thoat khoi game tro ve menu chinh thi co the nhan phim ESC.";
		short key = inputKey();
		if (key == 27)
			break;
	}
	Huongdan();
}
void HuongdanTWO()
{
	Vetieude();
	while (1)
	{
		for (short i = 29; i < 52; i++)
		{
			setTextColor(15);
			gotoXY(i, 5);
			cout << (char)45;
			gotoXY(i, 7);
			cout << (char)45;
		}
		gotoXY(ConsoleWidth / 2 - 16, 6);
		setTextColor(14);
		cout << "HUONG DAN SU DUNG TRUOC KHI DUNG";
		setTextColor(15);
		gotoXY(32, 9);
		cout << "Su dung cac phim";
		gotoXY(20, 11);
		setTextColor(10);
		cout << "PLAYER 1";
		gotoXY(21, 14);
		cout << 'A';
		gotoXY(23, 13);
		cout << 'W';
		gotoXY(23, 15);
		cout << 'S';
		gotoXY(25, 14);
		cout << 'D';
		gotoXY(53, 11);
		setTextColor(9);
		cout << "PLAYER 2";
		gotoXY(54, 14);
		cout << (char)17;
		gotoXY(56, 13);
		cout << (char)30;
		gotoXY(56, 15);
		cout << (char)31;
		gotoXY(58, 14);
		cout << (char)16;
		setTextColor(15);
		gotoXY(1, 17);
		cout << "De di chuyen con ran den vi tri con moi, moi lan an moi ran dai ra, ran se";
		gotoXY(1, 19);
		cout << "chet khi dung tuong hoac dung than. Khi an con moi ";
		setTextColor(14);
		cout << (char)KytuMoi;
		setTextColor(15);
		cout << " ran se tang len 1 dot";
		gotoXY(1, 21);
		cout << "va 1 diem. Con con moi dac biet ";
		setTextColor(13);
		cout << (char)KytuMoiDB;
		setTextColor(15);
		cout << " khi an se duoc tang 2 dot va 2 diem.";
		gotoXY(1, 23);
		cout << "Ai co the an nhanh nhat dat duoc 15 diem, thi nguoi do se chien thang. Hai ";
		gotoXY(1, 25);
		cout << "nguoi choi bang diem dung dau nhau hoac hai nguoi choi cung dung tuong thi";
		gotoXY(1, 27);
		cout << "se hoa. Hai nguoi dung dau ma so diem khong bang nhau thi nguoi nhieu diem";
		gotoXY(1, 29);
		cout << "hon se chien thang. Neu dung than doi thu hoac dung tuong truoc se thua.";
		gotoXY(1, 31);
		cout << "Su dung phim ESC de thoat khoi cac trang BANG DIEM, HELP, INFO.";
		short key = inputKey();
		if (key == 27)
			break;
	}
	Huongdan();
}
void Info()
{
	Vetieude();
	while (1)
	{
		for (short i = 30; i < 52; i++)
		{
			setTextColor(15);
			gotoXY(i, 4);
			cout << (char)45;
			gotoXY(i, 6);
			cout << (char)45;
		}
		gotoXY(ConsoleWidth / 2 - 4, 5);
		setTextColor(14);
		cout << (char)36 << " CODER " << (char)36;
		setTextColor(14);
		gotoXY(ConsoleWidth / 2 - 9, 9);
		cout << (char)11 << " VO TRAN MINH TRI " << (char)11;
		gotoXY(ConsoleWidth / 2 - 9, 11);
		cout << (char)11 << " DANG KHANG THAI " << (char)11;
		int key = inputKey();
		if (key == 27)
			break;
	}
	Menu();
}
int main()
{
	resizeConsole(ConsoleWidth, ConsoleHeight);
	SetConsoleTitle(TEXT("Ran San Moi"));
	//Loading();
	Menu();
	return 0;
	_getch();
}
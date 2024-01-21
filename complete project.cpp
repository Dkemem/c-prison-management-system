#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class prisoners {
public:
	string name[20];
	int id[20];
	int cage[20];
public:
	int l;
	void setname() {
		cout << "ENTER NUMBER OF CRIMINALS YOU WANT TO ENTER :" << endl;
		int c;
		cin >> c;
		cin.ignore();
		string* p = new string[c];
		cout << "ENTER NAMES OF THE CRIMINALS :" << endl;
		for (int k = 0; k < c; k++) {
			cout << k + 1 << ")";
			getline(cin, p[k]);
		}
		for (int i = 0; i < c; i++) {
			name[i] = p[i];
		}
		l = c;
	}
	void setcage(int k[]) {
		for (int i = 0; i < l; i++) {
			cage[i] = k[i];
		}
	}
	void setid(int b[]) {
		for (int i = 0; i < l; i++) {
			id[i] = b[i];
		}
	}
	void getcage() {
		for (int i = 0; i < l; i++) {
			cout << "NAME :";
			cout << name[i];
			cout << " ";
			cout << "CAGE NUMBER : ";
			cout << cage[i];
			cout << endl;
		}
	}
	void getnameid() {
		for (int i = 0; i < l; i++) {
			cout << "NAME : ";
			cout << name[i];
			cout << " ";
			cout << "ID :";
			cout << id[i];
			cout << endl;
		}
	}
};
class seriouscase :public prisoners {
public:
	string crime[20];
	string punishment[20];
public:
	void setcrime(string k[]) {
		for (int i = 0; i < l; i++) {
			crime[i] = k[i];
		}
	}
	void setpunishment(string m[]) {
		for (int i = 0; i < l; i++) {
			punishment[i] = m[i];
		}
	}
	void getcrimepunish() {
		for (int i = 0; i < l; i++) {
			cout << "NAME : ";
			cout << name[i];
			cout << "  ";
			cout << "CRIME : ";
			cout << crime[i];
			cout << "  ";
			cout << "PUNISHMENT : ";
			cout << punishment[i];
			cout << endl;

		}

	}
};
class lightcase :public seriouscase {
public:

};
class cop :public prisoners {
private:
	float salary[20];
	string names2[20];
public:
	int m;
	void setcops() {
		cout << "ENTER NUMBER OF COPS YOU WANT TO ENTER :" << endl;
		int f;
		cin >> f;
		m = f;
		cout << "ENTER NAMES OF COPS" << endl;
		cin.ignore();
		string* p = new string[f];
		for (int k = 0; k < f; k++) {
			cout << k + 1 << ")";
			getline(cin, p[k]);
		}
		for (int i = 0; i < f; i++) {
			names2[i] = p[i];
		}
	}
	void setsalary(float a[]) {
		for (int i = 0; i < m; i++) {
			salary[i] = a[i];
		}
	}

	void getsalary() {
		for (int i = 0; i < m; i++) {
			cout << "COP NAME :";
			cout << names2[i];
			cout << " ";
			cout << "SALARY :$";
			cout << salary[i];
			cout << endl;
		}
	}
};
int main() {
	prisoners obj1;
	seriouscase obj2;
	lightcase obj3;
	cop obj4;
	system("color 0B");
	cout << endl;
	cout << "\t\t\t\t\t\tPROGRAM BY HAMID,KAIF AND SHAN " << endl << endl;
menu:
	cout << "\t\t\t\t\t ENTER YOUR USERNAME OR PASSWORD TO LOGIN";
	cout << endl << endl;
	cout << "\t\t\t\t\t USERNAME : ";
	string username;
	getline(cin, username);
	cout << endl;
	cout << "\t\t\t\t\t PASSWORD : ";
	string password;
	getline(cin, password);
	cout << endl;
	cout << "\t\t\t\t (LOADING";
	for (int i = 0; i < 30; i++) {
		cout << ".";
		Sleep(50);
	}cout << ")";
	cout << endl << endl;
	if (username == "PROGRAM" && password == "PASSWORD") {
		cout << endl;
		cout << "\t\t\t\t\t(WELCOME";
		Sleep(300);
		cout << " TO";
		Sleep(300);
		cout << " THE";
		Sleep(300);
		cout << " PRISON";
		Sleep(300);
		cout << " MANAGEMENT";
		Sleep(300);
		cout << " SYSTEM)";
		cout << endl << endl;
	}
	else {
		cout << "\t\t\t\t\t WRONG USERNAME OR PASSWORD" << endl << endl;
		goto menu;
	}
menu1:
	cout << endl;
	cout << "\t\t\t\t PRESS ANY OF FOLLOWING TO DONE YOUR TASK" << endl;
	cout << endl;
	cout << "\t\t\t\t 1) ENTER 1 TO ENTER THE DETAILS OF PRISONERS" << endl;
	cout << "\t\t\t\t 2) ENTER 2 TO GET THE DETAILS OF PRISONERS" << endl;
	cout << "\t\t\t\t 3) ENTER 3 TO ENTER THE DETAILS OF SERIOUS CASE PRISONERS " << endl;
	cout << "\t\t\t\t 4) ENTER 4 TO GET THE DETAILS OF SERIOUS CASE PRISONERS" << endl;
	cout << "\t\t\t\t 5) ENTER 5 TO ENTER THE DETAILS OF LIGHT CASE PRISONERS" << endl;
	cout << "\t\t\t\t 6) ENTER 6 TO GET THE DETAILS OF LIGHT CASE PRISONERS" << endl;
	cout << "\t\t\t\t 7) ENTER 7 TO ENTER THE DATA OF COP IN JAIL" << endl;
	cout << "\t\t\t\t 8) ENTER 8 TO GET THE DATA OF COP IN JAIL" << endl;
	cout << "\t\t\t\t 9) ENTER 9 FOR HELP" << endl;
	cout << "\t\t\t\t10) ENTER 10 TO SEARCH ANY CRIMINAL" << endl;
	cout << "\t\t\t\t11) ENTER 11 TO EXIT" << endl;
	int m;
	cin >> m;
	switch (m) {
	case 1:
	{
		obj1.setname();
		int id[20];
		for (int i = 0; i < obj1.l; i++) {
			cout << "ENTER ID FOR  " << i + 1 << " :";
			cin >> id[i];
		}
		int cage[20];
		for (int i = 0; i < obj1.l; i++) {
			cout << "ENTER CAGE NUMBER FOR " << i + 1 << " :";
			cin.ignore();
			cin >> cage[i];
		}
		obj1.setcage(cage);
		obj1.setid(id);
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 3:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "\t\t\t\t\t(WELCOME";
		Sleep(300);
		cout << " TO";
		Sleep(300);
		cout << " SERIOUS CASE";
		Sleep(300);
		cout << " PRISONERS";
		Sleep(300);
		cout << " OFFICE)";
		cout << endl << endl;
		obj2.setname();
		int id2[20];
		for (int i = 0; i < obj2.l; i++) {
			cout << "ENTER ID FOR CRIMINALS " << i + 1 << " :";
			cin >> id2[i];
		}
		int cage2[20];
		for (int i = 0; i < obj2.l; i++) {
			cout << "ENTER CAGE NUMBER FOR " << i + 1 << " :";
			cin.ignore();
			cin >> cage2[i];
		}
		obj2.setcage(cage2);
		string pun[20];
		string cr[20];
		cout << "\t\t(ENTER CRIME AND PUNISHMENT FOR PRISONERS)" << endl;
		cin.ignore();
		for (int i = 0; i < obj2.l; i++) {
			cout << "CRIME OF " << i + 1 << " :";
			getline(cin, cr[i]);
			cout << "PUNISHMENT OF :" << i + 1 << " :";
			getline(cin, pun[i]);
			cout << endl;
		}

		obj2.setcrime(cr);
		obj2.setid(id2);
		obj2.setpunishment(pun);
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 5:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "\t\t\t\t\t(WELCOME";
		Sleep(300);
		cout << " TO";
		Sleep(300);
		cout << " LIGHT CASE";
		Sleep(300);
		cout << " PRISONERS";
		Sleep(300);
		cout << " OFFICE)";
		cout << endl << endl;
		obj3.setname();
		int id3[20];
		for (int i = 0; i < obj3.l; i++) {
			cout << "ENTER ID FOR CRIMINALS ";
			cin >> id3[i];
		}
		obj3.setid(id3);
		int cage3[20];
		for (int i = 0; i < obj3.l; i++) {
			cout << "ENTER CAGE NUMBER FOR " << i + 1 << " :";
			cin.ignore();
			cin >> cage3[i];
		}
		obj2.setcage(cage3);
		cout << "\t\t(ENTER CRIME AND PUNISHMENT FOR PRISONERS)" << endl;
		string pun2[20];
		string cr2[20];
		cin.ignore();
		for (int i = 0; i < obj3.l; i++) {
			cout << "CRIME OF " << i + 1 << " :";
			getline(cin, cr2[i]);
			cout << "PUNISHMENT OF :" << i + 1 << " :";
			getline(cin, pun2[i]);
		}
		obj3.setcrime(cr2);
		obj3.setpunishment(pun2);
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 6:
	{
		obj3.getcrimepunish();
		obj3.getnameid();
		system("pause");
		system("cls");
		goto menu1;
		break;

	}
	case 2:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << " (YOUR ENTERED NAME CRIMINALS ARE )" << endl;
		obj1.getnameid();
		obj1.getcage();
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 4:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "YOUR DATA FOR SERIOUS CRIMINALS IS : " << endl;
		obj2.getnameid();
		obj2.getcrimepunish();
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 7:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "\t\t\t\t\t(WELCOME";
		Sleep(300);
		cout << " TO";
		Sleep(300);
		cout << " THE";
		Sleep(300);
		cout << " COPS";
		Sleep(300);
		cout << " OFFICE)";
		cout << endl << endl;
		obj4.setcops();
		int id4[20];
		for (int i = 0; i < obj4.m; i++) {
			cout << "ENTER ID FOR COP " << i + 1 << " :";
			cin >> id4[i];
		}
		obj4.setid(id4);
		float salary[20];
		for (int i = 0; i < obj4.m; i++) {
			cout << " ENTER SALARY FOR : " << i + 1 << " :$";
			cin.ignore();
			cin >> salary[i];

		}
		obj4.setsalary(salary);
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 8:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "YOUR ENTERED DATA FOR COPS :" << endl;
		obj4.getnameid();
		obj4.getsalary();
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 9:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "\t\t\t\t\t(WELCOME";
		Sleep(300);
		cout << " TO";
		Sleep(300);
		cout << " THE";
		Sleep(300);
		cout << " HELP";
		Sleep(300);
		cout << " CENTER)";
		cout << endl << endl;
		cout << "IN CASE OF ANY QUERY :" << endl;
		cout << "CONTACT : 0321-7526440";
		cout << "G-MAIL:" << endl;
		cout << "shanealisa456@gmail.com";
		system("pause");
		system("cls");
		goto menu1;
		break;
	}
	case 11:
	{
		exit;
		cout << "THANKS FOR USING THIS PROGRAM............:-)";
		break;
	}
	case 10:
	{
		cout << "\t\t\t\t (LOADING";
		for (int i = 0; i < 30; i++) {
			cout << ".";
			Sleep(50);
		}cout << ")";
		cout << endl;
		cout << "\t\t\t\t\t(WELCOME";
		Sleep(300);
		cout << " TO";
		Sleep(300);
		cout << " THE";
		Sleep(300);
		cout << " SEARCH";
		Sleep(300);
		cout << " OFFICE)";
		cout << endl << endl;
		cout << "ENTER A NAME TO SEARCH CRIMINAL :" << endl;
		string k;
		cin.ignore();
		getline(cin, k);
		int p = 0;
		for (int i = 0; i < 20; i++) {
			if (obj1.name[i] == k) {
				cout << "CONGRATS YOUR CRIMINAL IS FOUND" << endl;
				p++;
				cout << "ID :";
				cout << obj1.id[i] << endl;
				cout << "CAGE :";
				cout << obj1.cage[i] << endl;
			}
			else if (obj2.name[i] == k) {
				cout << "CONGRATS YOUR CRIMINAL IS FOUND" << endl;
				p++;
				cout << "ID :";
				cout << obj2.id[i] << endl;
				cout << "CAGE :";
				cout << obj2.cage[i] << endl;
				cout << "CRIME :";
				cout << obj2.crime[i] << endl;
				cout << "PUNISHMENT :";
				cout << obj2.punishment[i] << endl;
			}
			else if (obj3.name[i] == k) {
				cout << "CONGRATS YOUR CRIMINAL IS FOUND" << endl;
				p++;
				cout << "ID :";
				cout << obj3.id[i] << endl;
				cout << "CAGE :";
				cout << obj3.cage[i] << endl;
				cout << "CRIME :";
				cout << obj3.crime[i] << endl;
				cout << "PUNISHMENT :";
				cout << obj3.punishment[i] << endl;
			}
		}
		if (p == 0) {
			cout << "CRIMINAL IS NOT FOUND IN THE RECORD" << endl;
		}
	}
	system("pause");
	system("cls");
	goto menu1;
	break;
	}
	return 0;
}
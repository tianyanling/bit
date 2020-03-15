#include"rsa.h"
#include "windows.h"

void menu()
{
	RSA rsa;
	int choose;
	DataType prime1 = rsa.getPrime();
	DataType prime2 = rsa.getPrime();
	DataType orla = rsa.getOrla(prime1, prime2);
	DataType ekey = rsa.getEkey(orla);
	DataType dkey = rsa.getDkey(ekey, orla);

	while (1)
	{
		system("cls");
		cout << "\t\t\t*************************************************" << endl;
		cout << "\t\t\t***            RSA 加密工具菜单选择           ***" << endl;
		cout << "\t\t\t***                1、获取素数                ***" << endl;
		cout << "\t\t\t***                2、获取欧拉函数            ***" << endl;
		cout << "\t\t\t***                3、获取公钥                ***" << endl;
		cout << "\t\t\t***                4、获取私钥                ***" << endl;
		cout << "\t\t\t***                5、获取加密文件            ***" << endl;
		cout << "\t\t\t***                6、获取解密文件            ***" << endl;
		cout << "\t\t\t***                7、退出程序                ***" << endl;
		cout << "\t\t\t*************************************************" << endl;
		cout << "\t\t\t请输入你的选择：";
		cin >> choose;
		if (choose == 1)
		{
			cout << "\t\t\tprime1 = " << rsa.getPrime() << endl;
			cout << "\t\t\tprime2 = " << rsa.getPrime() << endl;
			Sleep(1000);
		}
		else if (choose == 2)
		{
			cout << "\t\t\torla = " << orla << endl;
			Sleep(1000);
		}
		else if (choose == 3)
		{
			cout << "\t\t\tekey = " << ekey << endl;
			Sleep(1000);

		}
		else if (choose == 4)
		{
			cout << "\t\t\tdkey = " << dkey << endl;
			Sleep(1000);
		}
		else if (choose == 5)
		{
			rsa.ecrept("test.txt", "test.ecrept.txt");
			Sleep(1000);
		}
		else if (choose == 6)
		{
			rsa.decrept("test.ecrept.txt", "test.decrept.txt");
			Sleep(1000);
		}
		else
		{
			cout << "\t\t\t退出成功！" << endl;
			Sleep(1000);
			break;
		}
	}
}

int main()
{
	menu();
	system("pause");
	return 0;
}
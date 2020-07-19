#include <iostream>
#include <string>

using namespace std;

int main()
{
	size_t i;	//位置
	string str;	//字符串
	char cmd;	//命令
	char ch1, ch2;	//要操作的字符
	bool flag = false;	//用户的命令是否被正确执行

	getline(cin, str);
	cin >> cmd;
	switch (cmd) {
	case 'D':
		cin >> ch1;
		//如果找到ch1，则删除该字符
		if ((i = str.find(ch1)) != str.npos) {
			str.erase(i, 1);
			flag = true;
		}
		else {	//找不到则给出提示
			cout << "找不到要删除的" << ch1 << "字符" << endl;
		}
		break;
	case 'I':
		cin >> ch1 >> ch2;
		//从后往前找ch1，如果找到则在它前面插入ch2
		if ((i = str.find_last_of(ch1)) != str.npos) {
			str.insert(i, 1, ch2);
			flag = true;
		}
		else {	//找不到则给出提示信息
			cout << "找不到字符" << ch1 << endl;
		}
		break;
	case 'R':
		cin >> ch1 >> ch2;
		//如果找到ch1，则进入循环，替换
		while ((i = str.find(ch1)) != str.npos) {
			str.replace(i, 1, "O");
			flag = true;
		}
		if (!flag) {	//找不到则给出提示信息
			cout << "找不到要替换的字符" << ch1 << endl;
		}
		break;
	default:
		break;
	}
	if (flag) {
		cout << str << endl;
	}

	return 0;
}
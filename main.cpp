#include <iostream>
#include <string>

using namespace std;

int main()
{
	size_t i;	//λ��
	string str;	//�ַ���
	char cmd;	//����
	char ch1, ch2;	//Ҫ�������ַ�
	bool flag = false;	//�û��������Ƿ���ȷִ��

	getline(cin, str);
	cin >> cmd;
	switch (cmd) {
	case 'D':
		cin >> ch1;
		//����ҵ�ch1����ɾ�����ַ�
		if ((i = str.find(ch1)) != str.npos) {
			str.erase(i, 1);
			flag = true;
		}
		else {	//�Ҳ����������ʾ
			cout << "�Ҳ���Ҫɾ����" << ch1 << "�ַ�" << endl;
		}
		break;
	case 'I':
		cin >> ch1 >> ch2;
		//�Ӻ���ǰ��ch1������ҵ�������ǰ�����ch2
		if ((i = str.find_last_of(ch1)) != str.npos) {
			str.insert(i, 1, ch2);
			flag = true;
		}
		else {	//�Ҳ����������ʾ��Ϣ
			cout << "�Ҳ����ַ�" << ch1 << endl;
		}
		break;
	case 'R':
		cin >> ch1 >> ch2;
		//����ҵ�ch1�������ѭ�����滻
		while ((i = str.find(ch1)) != str.npos) {
			str.replace(i, 1, "O");
			flag = true;
		}
		if (!flag) {	//�Ҳ����������ʾ��Ϣ
			cout << "�Ҳ���Ҫ�滻���ַ�" << ch1 << endl;
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
/*
�ִ������� �ּҰ���� Level 1
�� ���� �Է¹޾� �� ���� �ִ������� �ּҰ������ ��ȯ���ִ� gcdlcm �Լ��� �ϼ��� ������.
�迭�� �� �տ� �ִ�����, �� ���� �ּҰ������ �־� ��ȯ�ϸ� �˴ϴ�.
���� ��� gcdlcm(3,12) �� �ԷµǸ�, [3, 12]�� ��ȯ���ָ� �˴ϴ�.
*/
#include<vector>
#include<iostream>
using namespace std;
vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	int z;
	int x = a;
	int y = b;


	//��Ŭ���� ȣ����
	while (true) {

		z = x %y;
		if (0 == z)
			break;

		x = y;
		y = z;

	}
	
	answer.push_back(y);
	answer.push_back(a*b/y);

	return answer;
}

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);//��Ŭ���� ȣ���� Ȯ��

	cout << testAnswer[0] << " " << testAnswer[1];
	//�ִ����� �ּҰ���� ���
	return 0;
}
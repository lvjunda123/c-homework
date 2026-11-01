#include<iostream>
using namespace std;

int main(){
	int m;
	cin>>m;
		for(int a = 3; a <= m / 2; a += 2)
		{
			int b = m - a;
			int j;
			// ===== 判断a是不是素数 =====
			for(j = 2; j * j <= a; j++)
			{
				if(a % j == 0)
					break;          // 找到因数，说明a不是素数，跳出
			}
			if(j * j <= a)          // 如果是因为找到因数跳出的
				continue;           // 那a不是素数，直接试下一个a
			// ===== 判断b是不是素数 =====
			for(j = 2; j * j <= b; j++)
			{
				if(b % j == 0)
					break;
			}
			if(j * j <= b)
				continue;           // b也不是素数，试下一个a
			// ===== 能走到这里，说明a和b都是素数 =====
			cout << m << "=" << a << "+" << b << endl;
			break;
		}
	return 0;
}


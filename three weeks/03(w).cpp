#include <stdio.h>

int main()
{
	int m, p, q, k, flag1, flag2;
	
	
	while (scanf("%d", &m) != EOF) {
		for (p = 3; p <= m - 2; p = p + 2) {
			
			flag1 = 1;  // 假设 p 是素数
			
			// 判断 p 是不是素数
			for (k = 2; k * k <= p; k++) {
				if (p % k == 0) {
					flag1 = 0;
					break;
				}
			}
			
			if (flag1 == 0) {
				continue;
			}
			
			q = m - p;
			flag2 = 1;
			
			// 判断 q 是不是素数
			for (k = 2; k * k <= q; k++) {
				if (q % k == 0) {
					flag2 = 0;
					break;
				}
			}
			
			// 两个都是素数，输出
			if (flag2 == 1) {
				printf("%d=%d+%d\n", m, p, q);
			}
		}
	}
	
	return 0;
}

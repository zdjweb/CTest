/*
在X星系的广袤空间中漂浮着许多X星人造“炸弹”，用来作为宇宙中的路标。
每个炸弹都可以设定多少天之后爆炸。
比如：阿尔法炸弹2015年1月1日放置，定时为15天，则它在2015年1月16日爆炸。
有一个贝塔炸弹，2014年11月9日放置，定时为1000天，请你计算它爆炸的准确日期。

请填写该日期，格式为 yyyy-mm-dd 即4位年份2位月份2位日期。比如：2015-02-19
请严格按照格式书写。不能出现其它文字或符号。
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, year = 2014, month = 11 ,day = 9, set = 1000, f;
	while (set-- > 0) {
		if (month == 1) {
			if (!(year % 400)) {
				f = 1;
			}
			else if (!(year % 4) && year % 100) {
				f = 1;
			}
			else {
				f = 0;
			}
			days[1] = f ? 29 : 28;
		}
		day++;
		if (day > days[month - 1]) {
			day = 1;
			month++;
		}
		if (month > 12) {
			month = 1;
			year++;
		}
	}
	printf_s("%d-%02d-%02d\n", year, month, day);
	return 0;
}
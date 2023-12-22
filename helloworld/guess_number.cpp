#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void Start();
void GetResults();

int i, j, life, maxrand;
char c;

void Start() {
	i = 0;
	j = 0;
	life = 0;
	maxrand = 6;
	
	cout << "选择难度:\n"; /*用户选择关卡难易程度*/
	cout << "1 : 容易 (0-15)\n";
	cout << "2 : 简单 (0-30)\n";
	cout << "3 : 困难 (0-50)\n";
	cout << "或者按下其他任意键退出\n";
	c = 30;

	cin >> c;                  //用户选择关卡
	cout << "\n";

	switch (c) {
		case '1':
			maxrand = 15;  // 选择关卡后，设置最大数
			break;
		case '2':
			maxrand = 30;
			break;
		case '3':
			maxrand = 50;
			break;
		default:
			exit(0);
		break;
	}

	life = 5;         //玩家生命数
	srand((unsigned)time(NULL)); //通过时间设置随机数种子
	j = rand() % maxrand;  // 获取随机数
	
	GetResults();
}

void GetResults() {
	if (life <= 0) { //如果用户没有生命数了，游戏失败
		cout << "你失败了 !\n\n";
		Start();
	}

	cout << "请猜测一个数字: \n";
	cin >> i;
	
	if((i>maxrand) || (i<0)) { // 用户输入错误数字，重启游戏
		cout << "错误：你输入的数字小于 0 或者大于关卡最大值 \n" << maxrand;
		GetResults();
	}

	if(i == j) {
		cout << "恭喜你，你赢了\n\n"; // 玩家找到了数字
		Start();
	} else if(i>j) {
		cout << "输入数字大于你要猜的数字\n";
		life = life - 1;
		cout << "你生命值还剩下: " << life << "\n\n";
		GetResults();
	} else if(i<j) {
		cout << "输入数字小于你要猜的数字\n";
		life = life - 1;
		cout << "你生命值还剩下: " << life << "\n\n";
		GetResults();
	}
}

int main() {
	cout << "** 猜数字游戏 **\n";
	cout << "这个游戏需要猜测一个数字.\n";
	cout << "游戏会提示你输入的数字是大于或者小于要猜测的数字\n";
	cout << "你在生命值还剩下的时候猜中数字，你就赢了.\n\n";
	Start();
	return 0;
}
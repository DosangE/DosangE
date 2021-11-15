/*스탯(확률, 친화력 스탯 조절)
친화력 스탯 조절 아이템(미로의 어디에 아이템을 둘것인지, 아이템 개수 제한) 
*/
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int g_stat_intellect;
int g_stat_physical;
int g_stat_social;
int g_reverse_time;

void stat_setting();
int stat_intellect_value();
int trap_check();	//함정밟았는지 반환함수
void trap_effect();	//함정효과 발생
int social_check();
int stage1_interact();

int main() {

}

void stat_setting() {	//초기스탯설정함수
	srand(time(NULL));
	g_stat_intellect = (rand() % 10) + 1;	//1~10사이의 변수로 임의설정
	g_stat_physical = (rand() % 10) + 1;
	g_stat_social = (rand() % 10) + 1;
}

int stat_intellect_value() {	//현재 지성스탯
	int count;
	/*
	현재 지성스탯... 깜빡이는정도
	*/
	return count;
}

int trap_check() {	//함정밟았는지 반환함수
	int check;	//밟았으면 1, 안밟았으면 0 반환

	/*

	밟았는지 체크

	*/

	return check;
}

void trap_effect() {	//함정 효과 발생
	srand(time(NULL));
	int probability = (rand() % 2) + 1;
	if (probability == 1) {			//키반전
		g_reverse_time = 10;			

		/*
		...
		*/

	}

	else {							

		/*
		//90도 회전
		*/

	}
}

int social_check() {	//친화력 +아이템 밟았는지 반환함수
	int check;	//+밟았으면 2, -밟았으면 1, 안밟았으면 0 반환

	/*

	밟았는지 체크

	*/

	if (check == 2) {
		g_stat_social++;
	}
	else if (check == 1) {
		g_stat_social--;
	}

	return check;
}

int stage1_interact() {
	int probability;
	srand(time(NULL));

	if (trap_check() == 1) {				//트랩을 밟았을때 

		if (g_stat_social <= 4) {
			trap_effect();
		}
		else if (g_stat_social <= 7) {
			probability = (rand() % 10) + 1;	//10개의 임의 난수중 3이하이면 함정무시
			if (probability >= 7) {			//7이상이면 함정무시
				trap_effect();				//30%함정무시,70%함정효과발생
			}
		}
		else {
			probability = (rand() % 10) + 1;	//10개의 임의 난수중 7이하이면 함정무시
			if (probability <= 3) {			//3이하면 함정발동
				trap_effect();				//70%함정무시,30%함정효과발생
			}
		}
	}

	if(social_check() == 2){				// 친화력 + 아이템을 먹었을 때
		probability = (rand() % 2) + 1;	//확률 50% 따지기 위해 랜덤 1 or 2
		if (probability == 1 && g_stat_social >= 8 && g_stat_intellect != 1) {	//확률 50%, 친화력 스탯이 높고, 지성이 1이상일경우
			g_stat_intellect--;
		}
	}

}
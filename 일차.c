/*����(Ȯ��, ģȭ�� ���� ����)
ģȭ�� ���� ���� ������(�̷��� ��� �������� �Ѱ�����, ������ ���� ����) 
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
int trap_check();	//������Ҵ��� ��ȯ�Լ�
void trap_effect();	//����ȿ�� �߻�
int social_check();
int stage1_interact();

int main() {

}

void stat_setting() {	//�ʱ⽺�ȼ����Լ�
	srand(time(NULL));
	g_stat_intellect = (rand() % 10) + 1;	//1~10������ ������ ���Ǽ���
	g_stat_physical = (rand() % 10) + 1;
	g_stat_social = (rand() % 10) + 1;
}

int stat_intellect_value() {	//���� ��������
	int count;
	/*
	���� ��������... �����̴�����
	*/
	return count;
}

int trap_check() {	//������Ҵ��� ��ȯ�Լ�
	int check;	//������� 1, �ȹ������ 0 ��ȯ

	/*

	��Ҵ��� üũ

	*/

	return check;
}

void trap_effect() {	//���� ȿ�� �߻�
	srand(time(NULL));
	int probability = (rand() % 2) + 1;
	if (probability == 1) {			//Ű����
		g_reverse_time = 10;			

		/*
		...
		*/

	}

	else {							

		/*
		//90�� ȸ��
		*/

	}
}

int social_check() {	//ģȭ�� +������ ��Ҵ��� ��ȯ�Լ�
	int check;	//+������� 2, -������� 1, �ȹ������ 0 ��ȯ

	/*

	��Ҵ��� üũ

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

	if (trap_check() == 1) {				//Ʈ���� ������� 

		if (g_stat_social <= 4) {
			trap_effect();
		}
		else if (g_stat_social <= 7) {
			probability = (rand() % 10) + 1;	//10���� ���� ������ 3�����̸� ��������
			if (probability >= 7) {			//7�̻��̸� ��������
				trap_effect();				//30%��������,70%����ȿ���߻�
			}
		}
		else {
			probability = (rand() % 10) + 1;	//10���� ���� ������ 7�����̸� ��������
			if (probability <= 3) {			//3���ϸ� �����ߵ�
				trap_effect();				//70%��������,30%����ȿ���߻�
			}
		}
	}

	if(social_check() == 2){				// ģȭ�� + �������� �Ծ��� ��
		probability = (rand() % 2) + 1;	//Ȯ�� 50% ������ ���� ���� 1 or 2
		if (probability == 1 && g_stat_social >= 8 && g_stat_intellect != 1) {	//Ȯ�� 50%, ģȭ�� ������ ����, ������ 1�̻��ϰ��
			g_stat_intellect--;
		}
	}

}
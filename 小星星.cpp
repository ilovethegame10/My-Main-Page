#include <iostream>
#include <Windows.h>

/*����ʹ�������֪���Ǻ�������ʲô�Ķ��� 
	��Ҫ��Ϊ����� "Beep" */
using namespace std;

int main(){
	int result = MessageBox(NULL,"���������Ქ�š�С���ǡ����Ƿ񲥷ţ�","����ɽ����ƾ�",MB_YESNO|MB_ICONEXCLAMATION);
	
	if (result == IDYES) 
	{
		system("color 1F");
		//�ӳ�+������� 
		Sleep(300);
		cout <<"�������š�С���ǡ�"<<endl;

		//һ�οհף�������	
		Sleep(750);
		printf("��Ů����......\n");
		Sleep(2500);
	
	
		//С��������+��� 
		printf("Twinkle twinkle little star\n");
		Beep(530,450);
		Beep(530,450);
		Beep(800,450);
		Beep(800,450);
		Beep(888,450);
		Beep(888,450);
		Beep(800,800);
		printf("How I wonder what you are\n");
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,450);
		Beep(598,450);
		Beep(530,800);
		printf("Up above the world so high\n");
		Beep(800,450);
		Beep(800,450);
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,800);
		printf("Like a diamond in the sky\n");
		Beep(800,450);
		Beep(800,450);
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,800);
		printf("Twinkle twinkle little star\n");
		Beep(530,450);
		Beep(530,450);
		Beep(800,450);
		Beep(800,450);
		Beep(888,450);
		Beep(888,450);
		Beep(800,800);
		printf("How I wonder what you are\n");
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,450);
		Beep(598,450);
		Beep(530,800);
		cout <<"���Ž���"<<endl;
		MessageBox(NULL,"лл���ͣ�����Ǹ��ܵʹ����Ǻ���Ȥ��һ��С����ϣ������ϲ����","����ɽ����ƾ�",NULL);
	
		system("pause");
	}
	
	else if (result == IDNO)
	{
		MessageBox(NULL,"�ð�...�����ź���......","����ɽ����ƾ�",NULL);
		int result1 = MessageBox(NULL,"���򼴽��˳����Ƿ�Ҫ���š�С���ǡ���","����ɽ����ƾ�",MB_YESNO|MB_ICONEXCLAMATION);
		if (result1 == IDYES) 
		{
		system("color 1F");
		//�ӳ�+������� 
		Sleep(300);
		cout <<"�������š�С���ǡ�"<<endl;

		//һ�οհף�������	
		Sleep(750);
		printf("��Ů����......\n");
		Sleep(2500);
	
	
		//С��������+��� 
		printf("Twinkle twinkle little star\n");
		Beep(530,450);
		Beep(530,450);
		Beep(800,450);
		Beep(800,450);
		Beep(888,450);
		Beep(888,450);
		Beep(800,800);
		printf("How I wonder what you are\n");
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,450);
		Beep(598,450);
		Beep(530,800);
		printf("Up above the world so high\n");
		Beep(800,450);
		Beep(800,450);
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,800);
		printf("Like a diamond in the sky\n");
		Beep(800,450);
		Beep(800,450);
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,800);
		printf("Twinkle twinkle little star\n");
		Beep(530,450);
		Beep(530,450);
		Beep(800,450);
		Beep(800,450);
		Beep(888,450);
		Beep(888,450);
		Beep(800,800);
		printf("How I wonder what you are\n");
		Beep(705,450);
		Beep(705,450);
		Beep(675,450);
		Beep(675,450);
		Beep(598,450);
		Beep(598,450);
		Beep(530,800);
		cout <<"���Ž���"<<endl;
		MessageBox(NULL,"лл���ͣ�����Ǹ��ܵʹ����Ǻ���Ȥ��һ��С����ϣ������ϲ����","����ɽ����ƾ�",NULL);
	
		system("pause");
		}
		
		else if (result1 == IDNO) 
		{
			MessageBox(NULL,"�ð�...�����ź���......","����ɽ����ƾ�",NULL);

		}

	}
	
	return 0;
	
}

#include <iostream>
#include <Windows.h>

/*用来使用这个不知道是函数还是什么的东西 
	主要是为了这个 "Beep" */
using namespace std;

int main(){
	int result = MessageBox(NULL,"接下来将会播放《小星星》，是否播放？","亚历山大设计局",MB_YESNO|MB_ICONEXCLAMATION);
	
	if (result == IDYES) 
	{
		system("color 1F");
		//延迟+输出内容 
		Sleep(300);
		cout <<"即将播放《小星星》"<<endl;

		//一段空白，整个活	
		Sleep(750);
		printf("少女祈祷中......\n");
		Sleep(2500);
	
	
		//小星星曲谱+歌词 
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
		cout <<"播放结束"<<endl;
		MessageBox(NULL,"谢谢欣赏！这个是个很低创但是很有趣的一个小程序，希望你能喜欢！","亚历山大设计局",NULL);
	
		system("pause");
	}
	
	else if (result == IDNO)
	{
		MessageBox(NULL,"好吧...真是遗憾啊......","亚历山大设计局",NULL);
		int result1 = MessageBox(NULL,"程序即将退出，是否还要播放《小星星》？","亚历山大设计局",MB_YESNO|MB_ICONEXCLAMATION);
		if (result1 == IDYES) 
		{
		system("color 1F");
		//延迟+输出内容 
		Sleep(300);
		cout <<"即将播放《小星星》"<<endl;

		//一段空白，整个活	
		Sleep(750);
		printf("少女祈祷中......\n");
		Sleep(2500);
	
	
		//小星星曲谱+歌词 
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
		cout <<"播放结束"<<endl;
		MessageBox(NULL,"谢谢欣赏！这个是个很低创但是很有趣的一个小程序，希望你能喜欢！","亚历山大设计局",NULL);
	
		system("pause");
		}
		
		else if (result1 == IDNO) 
		{
			MessageBox(NULL,"好吧...真是遗憾啊......","亚历山大设计局",NULL);

		}

	}
	
	return 0;
	
}

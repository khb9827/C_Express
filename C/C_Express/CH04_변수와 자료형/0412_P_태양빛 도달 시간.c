/*

실습. 태양빛 도달 시간

태양에서 오는 빛이 몇 분 만에 지구에 도착하는 지를 컴퓨터로 계산해보고자 한다.
빛은 1초에 30만 km를 이동한다.
또 태양과 지구 사이의 거리는 약 1억 4960만 km이다.

*/

#include <stdio.h>

int main(void)
{
	double light_speed = 300000; // 빛의 속도를 저장하는 변수(300000km/sec)
	double distance = 149600000; // 태양과 지구 사이 거리를 저장하는 변수
								 // 149600000km로 초기화한다.
	double time; // 시간을 나타내는 변수

	time = distance / light_speed; // 거리를 빛의 속도로 나눈다.

	printf("빛의 속도는 %fkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %fkm \n", distance);
	printf("도달 시간은 %f초\n", time);

	// 도전문제
	int min, sec;
	min = time / 60;
	sec = (int)time % 60;
	printf("도달 시간은 %d초 %d분 \n", min,sec);

	return 0;
}
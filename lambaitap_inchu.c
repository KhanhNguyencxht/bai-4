#include<stdio.h>
#include<Windows.h>

WINAPI hamchay(LPVOID chuongtrinh) {

	while (1) {
		printf("xin chao\r\n");
		Sleep(2000);
	}
}

void main() {
	HANDLE chaychinh = CreateThread(0, 32,hamchay, 0, 0, 0);
	while (1) {
		printf("Say hello\r\n");
		Sleep(1000);
	}
}

#include<stdio.h>

// VW 와 VH 를 PX로 변환하여 출력해주는 

float vhPx(float view) {
	float vh;
	printf("[0]. 나가기\n");
	printf("PX로 변환하고 싶은 VH 입력: ");
	scanf("%f", &vh);
	printf("===================\n");
	if (vh == 0) { // 나가기를 판별 나가기 면 나가줌
		return 0;
	}
	else {
		float px = (view / 100)*vh;
		printf("\n");
		printf(">> %.0f PX\n", px);
		printf("\n");
		printf("===================\n");
		vhPx(view); // 나가기를 안눌렀기 때문에 다시 호출한다
	}
}

float vwPx(float view) {
	float vw;
	printf("[0]. 나가기\n");
	printf("PX로 변환하고 싶은 VW 입력: ");
	scanf("%f", &vw);
	printf("===================\n");
	if (vw == 0) {
		return 0; // 나가기를 누르면 0 을 반환해줌으로써 나가줌
	}
	else {
		float px = (view / 100) * vw;
		printf("\n");
		printf(">> %.0f PX\n", px);
		printf("\n");
		printf("===================\n");
		vwPx(view); // 나가기를 안눌렀으니 다시 호출하여 다른 값도 변환하여 볼수있게함
	}
}

int main(void) {
	int choice;
	printf("===================\n");
	printf("\n");
	printf("[1]. VH -> PX 변환하기\n");
	printf("[2]. VW -> PX 변환하기\n");
	printf("\n");
	printf("선택 >> ");
	scanf("%d", &choice);
	printf("===================\n");
	if (choice == 1) {
		float view;
		printf("\n");
		printf("View Port 입력: ");
		scanf("%f", &view);
		printf("\n");
		printf("===================\n");
		vhPx(view); // View Port 값을 vhPx에게 인자값으로 전달
	}
	else if (choice == 2) {
		float view;
		printf("\n");
		printf("View Port 입력: ");
		scanf("%f", &view);
		printf("\n");
		printf("===================\n");
		vwPx(view);// View Port 값을 vwPx에게 인자값으로 전달
	}
}

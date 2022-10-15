#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define BLACK_COLOR			0
#define DARK_BLUE_COLOR		1
#define DARK_GREEN_COLOR	2
#define DARK_CYAN_COLOR		3
#define DARK_RED_COLOR		4
#define DARK_PINK_COLOR		5
#define DARK_YELLOW_COLOR	6
#define DARK_WHITE_COLOR	7
#define GREY_COLOR			8
#define BLUE_COLOR			9
#define GREEN_COLOR			10
#define CYAN_COLOR			11
#define RED_COLOR			12
#define PINK_COLOR			13
#define YELLOW_COLOR		14
#define WHITE_COLOR			15

#define DOT_RAN 12 	//Hình ảnh của 1 đốt rắn
#define MAX 100			//Số đốt rắn tối đa
#define LEN 1			//Mã hướng của rắn
#define XUONG 2			//Mã hướng của rắn
#define TRAI 3			//Mã hướng của rắn
#define PHAI 4			//Mã hướng của rắn
#define TUONG_TREN 1	//Vị trí của tường
#define TUONG_DUOI 13	//Vị trí của tường
#define TUONG_TRAI 3	//Vị trí của tường
#define TUONG_PHAI 53	//Vị trí của tường

#define KEY_UP		1072
#define KEY_DOWN	1080
#define KEY_LEFT	1075
#define KEY_RIGHT	1077
#define KEY_NONE	-1


//Tọa độ console
struct ToaDo
{
	int x, y;

};

// Lấy nút bàn phím do người dùng bấm
// Trả về: Mã của phím
int inputKey();

// Xóa màn hình
void clrscr();

// Di chuyển con trỏ console đến vị trí có tọa độ (x, y)
void gotoXY(int x, int y);

// Khởi tạo độ dài và vị trí thân rắn ban đầu
void KhoiTaoRan();

//Cập nhật tọa độ của các đốt rắn khi rắn di chuyển 1 bước
ToaDo DiChuyen(int huong);

//Hiển thị rắn theo tọa độ đã được lưu trong mảng
void HienThiRan(ToaDo x);

//Bắt sự kiện bàn phím để xác định hướng mới
void BatSuKien(int& huong);

//Hàm dùng để vẽ tường
void VeTuong();

//Kiển tra những trường hợp thua
bool KtraThua();

//Xử lí khi game over
void XuLyThua();

//Hiển thị mồi random
ToaDo HienThiMoi();

//Kiểm tra rắn đã ăn mồi hay chưa
bool KtraDaAnMoi(ToaDo moi);

//Thêm 1 đốt mới khi rắn ăn trúng mồi
void ThemDot();


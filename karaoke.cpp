#define use_CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <iostream>
using namespace std;
#define giomocua 8
#define mocgiovang 17
#define giodongcua 24

int main()
{
	int giobd, giokt;
	int phutbd, phutkt;
	int sotien;

	cout << "----------------------------------------------------------------" << endl;
	cout << "Gio mo cua: 8h00ph" << endl;
	cout << "Gio dong cua: 24h00ph" << endl;
	cout << "Thanh toan: 30000d/ 1gio" << endl;
	cout << "Sau khi hat duoc 3 gio, thoi gian hat them duoc khuyen mai 30%" << endl;
	cout << "DAC BIET: Khuyen mai them 10% tu 8-17h" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Nhap vao thoi gian bat dau: " << endl;
	cout << "Gio bat dau: ";
	cin >> giobd;
	cout << "Phut: ";
	cin >> phutbd;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Nhap thoi gian ket thuc: " << endl;
	cout << "Gio ket thuc: ";
	cin >> giokt;
	cout << "Phut: ";
	cin >> phutkt;
	cout << "----------------------------------------------------------------" << endl;
	//kiểm tra giờ bắt đầu, kết thúc có hợp lệ hay không
	if (giobd < giomocua || giobd >= giodongcua || giokt < giomocua || giokt > giodongcua)
	{
		cout << "Thoi gian khong hop le! Vui long kiem tra lai!" << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		return 0;
	}
	//kiểm tra phút có hợp lệ hay không
	if (phutbd < 0 || phutbd > 59 || phutkt < 0 || phutkt > 59)//kiểm tra lại
	{
		cout << "Thoi gian khong hop le! Vui long kiem tra lai!" << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		return 0;
	}

	if (giokt == 24 && phutkt != 00)
	{
		cout << "Thoi gian khong hop le! Vui long kiem tra lai!" << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		return 0;
	}

	if (giobd > giokt)
	{
		cout << "Thoi gian khong hop le! Vui long kiem tra lai!" << endl;
		cout << "----------------------------------------------------------------" << endl;
		system("pause");
		return 0;
	}
	if ( giobd == giokt && phutkt < phutbd )
	{
		cout << "vo ly";
		return 0;
	}
	int tongtg;//tính bằng phút
	int temp1, temp2;
	int temp3, temp4;
	int temp5;

	temp1 = giokt - giobd;
	temp2 = phutkt - phutbd;

	if (temp2 < 0)
	{
		temp2 += 60;
		temp1 -= 1;
		cout << "Tong thoi gian la: " << temp1 << " gio " << temp2 << " phut" << endl;
		tongtg = temp1 * 60 + temp2;
	}
	else
	{
		cout << "Tong thoi gian la: " << temp1 << " gio " << temp2 << " phut" << endl;
		tongtg = temp1 * 60 + temp2;
	}
	if (giokt < mocgiovang)
	{
		if (tongtg <= 180)
		{
			sotien = tongtg * 450;
			cout << "So tien phai tra: " << sotien << " dong" << endl;
			cout << "----------------------------------------------------------------" << endl;
			system("pause");
			return 0;
		}
		else
		{
			sotien = 81000 + (tongtg - 180) * 315;
			cout << "So tien phai tra: " << sotien << " dong" << endl;
			cout << "----------------------------------------------------------------" << endl;
			system("pause");
			return 0;
		}
	}
	// thời gian bắt đầu/kết thúc nằm trong khoảng từ 17-24h
	else if (giobd >= mocgiovang)
	{
		//thời gian ít hơn 3 giờ
		if (tongtg <= 180)
		{
			sotien = tongtg * 500;
			cout << "So tien phai tra: " << sotien << " dong" << endl;
			cout << "----------------------------------------------------------------" << endl;
			system("pause");
			return 0;
		}
		//ngược lại
		else
		{
			sotien = 90000 + (tongtg - 180) * 350;
			cout << "So tien phai tra: " << sotien << " dong" << endl;
			cout << "----------------------------------------------------------------" << endl;
			system("pause");
			return 0;
		}
	}
	// thời gian bắt đầu trong khoảng 8-17h, thời gian kết thúc trong khoảng 17-24h
	else if ((giobd < mocgiovang) && (giokt >= mocgiovang))
	{
		//thời gian ít hơn 3 giờ
		if (tongtg < 180)
		{
			temp3 = mocgiovang - giobd;
			if (phutbd != 0)
			{
				temp3 -= 1;
				temp3 *= 60;
				temp3 += (60 - phutbd);
			}
			else
			{
				temp3 *= 60;
			}
			temp3 *= 450;
			temp4 = giokt - mocgiovang;
			if (phutkt != 0)
			{
				temp4 *= 60;
				temp4 += phutkt;
			}
			else
			{
				temp4 *= 60;
			}
			temp4 *= 500;
			sotien = temp3 + temp4;
			cout << "So tien phai tra: " << sotien << " dong" << endl;
			cout << "----------------------------------------------------------------" << endl;
			system("pause");
			return 0;
		}
		//ngược lại
		else
		{
			//3 giờ đầu trong khoảng 8-17h (giờ bắt đầu là 14h)
			if (giobd == 14 && phutbd == 0)
			{
				sotien = 81000 + (tongtg - 180) * 350;
				cout << "So tien phai tra: " << sotien << " dong" << endl;
				cout << "----------------------------------------------------------------" << endl;
			}
			//hơn 3 giờ đầu trong khoảng 8-17h (giờ bắt đầu trước 14h)
			else if (giobd < 14)
			{
				//temp3 là số phút ở khoảng 8-17h (trước và sau 3 giờ)
				temp3 = mocgiovang - giobd;
				if (phutbd != 0)
				{
					temp3 -= 1;
					temp3 *= 60;
					temp3 += (60 - phutbd);
				}
				else
				{
					temp3 *= 60;
				}
				//temp5 là số phút ở khoảng 17-24h (sau 3 giờ)
				temp5 = giokt - mocgiovang;
				if (phutkt != 0)
				{
					temp5 *= 60;
					temp5 += phutkt;
				}
				else
				{
					temp5 *= 60;
				}
				//temp4 là số phút sau 3 giờ ở khoảng 8-17h
				temp4 = temp3 - 180;
				//gán lại temp3 là 3 giờ đầu
				temp3 = 180;
				sotien = (temp3 * 450) + (temp4 * 315) + (temp5 * 350);
				cout << "So tien phai tra: " << sotien << " dong" << endl;
				cout << "----------------------------------------------------------------" << endl;
			}
			//ngược lại (3 giờ đầu nằm ở cả 2 khoảng 8-17h và 17-24h)
			else
			{
				//temp5 là số phút sau 3 giờ ở khoảng 17-24h
				temp5 = tongtg - 180;
				//temp3 là số phút trước 3 giờ ở khoảng 8-17h
				temp3 = mocgiovang - giobd;
				if (phutbd != 0)
				{
					temp3 -= 1;
					temp3 *= 60;
					temp3 += (60 - phutbd);
				}
				else
				{
					temp3 *= 60;
				}
				//temp4 + temp3 = 3 giờ, temp4 ở khoảng 17-24h
				temp4 = tongtg - temp3 - temp5;
				sotien = (temp3 * 450) + (temp4 * 500) + (temp5 * 350);
				cout << "So tien phai tra: " << sotien << " dong" << endl;
				cout << "----------------------------------------------------------------" << endl;
			}
			system("pause");
			return 0;
		}
	}

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");

	//?????? 1
	//???? ????????(hp) ????? ??? ?????? ????, ?? ???????? false, ? ????????? ?????? true
	//??????? ?????? : ???????? ???? ????? ????? ? ??????? ???????? ?????????
	//??????? ?????? : ???????? ?????????? ????????? true ??? false.
	//int hp;
	//cin >> hp;
	/*if (hp <= 0) {
		cout << "false" << endl;
	}
	else cout << "true" << endl;
}*/
//?????? 2
	//??????????? ??????????, ???? ? ??????? ??????????? ?????? 20 ????????; ???? ?? ??????????? 20 ???????? ??? ????, 
	//??????????? ???????????.???????? ?????????, ??????? ?????????, ??? ????? ?????? ???????????.
	//??????? ?????? : ???????? ???? ????? ????? ? ??????? ??????????? ? ???????.
	//??????? ?????? : ???????? ?????? on, ???? ??????????? ?????????, ? off, ???? ??????????.
	/*int conditioner;

	cin >> conditioner;
	if (conditioner >= 20) {
		cout << "on" << endl;
	}
	else cout << "off" << endl;
}*/
/*?????? 3
	????? ?????? ???????????? ????????? ??? ? ????????? ? ?????????.
	????????? ??? ?????????? ????????? ??????????,
	?? ??????????? ?? ? ???? ?????? ?? ??????????,
	???? ????????? ? ????????? ????????? 80 % .
	????? ???????, ???? ???????????? ???????? ? ?????? ??????????? T  ????????,
	?? ??????????? ??????????, ???? ??????????? ? ??????? ?????? ?????? T,
	? ????????? 80 % ??? ????.???? ?? ???? ?? ???? ?? ??????? ?? ???????????, ?? ??????????? ???????????.

	??????? ?????? : ?? ????? ?????? ???????? ??? ????? ????? ? ???????????? ????????????? ??????????? T,
	??????? ??????????? ? ??????? ? ??????? ????????? ? ???????.
	??????????? ??????? ? ????????, ????????? ? ? ?????????.
	??????? ?????? : ???????? ?????? on, ???? ??????????? ?????????, ? off, ???? ??????????.*/
	int t, v, c;
	cin >> t >> v >> c;
	if ((t >= c) && (v <= 80)) {
		cout << "on" << endl;
	}
	if ((t < c) && (v > 80)) {
		cout << "off" << endl;
	}
	if ((t < c) && (v > 80)) {
		cout << "off" << endl;
	}
	if ((t > c) && (v < 80)) {
		cout << "off" << endl;
	}


}
/*?????? 4
	????????? ???????? ?????????, ??????????? ???????? ??????? ? = f(x) :
	? = x - 2, ???? x > 0,
	y = 0, ???? x = 0,
	y = | x | , ???? x < 0.
	??????? ?????? : ???? ???????????? ?????, ?
	???????? ?????? : ???? ???????????? ?????, y
	*/
	/*?????? 5
		???????????? ?????? ?????????? ????? ?????? ????(?? 1? ?????? ??????? ????? ? ?.?.).
		?????????? ??????? ??? ???????? ?? ?????.???? ????? ???????????? - ??????? ????????.
		??????? ?????? : ???? ????? ????? - ????? ??????
		???????? ?????? : ?????? ? ????????? ?????? ??? ?????? ????????(????? ??????? ?error?,
		???? ?? ??????? ??? ?????????? ??????? ?????)
*/
/*	int a;
	cin >> a;
	if (a == 1) {
		cout << "???????" << endl;
	}
	if (a == 2) {
		cout << "????????????" << endl;
	}
	if (a == 3) {
		cout << "???????" << endl;
	}
	if (a == 4) {
		cout << "????????????" << endl;
	}
	if (a == 5) {
		cout << "???????" << endl;
	}
	if (a > 5) {
		cout << "??????" << endl;
	}*/


#include <iostream>

using namespace std;
int main() {
	char in[101], out[101];
	int function, add, times = 101;

	cout << "請輸入需要的功能(1.為加密，2.為解密):";
	cin >> function;
	if (function == 1){
		cout << "歡迎使用加密功能 \n 請輸入加密公式(欲增加或減少幾個字母，需加上負號):";
		cin >> add;
		cout << "接著請輸入欲加密的內容:";
		cin >> in;
		for (int t = 0; in[t] != '\0'; t++){
			out[t] = in[t] + add;
			cout << out[t];
		}
	}
	else if (function == 2){
		cout << "歡迎使用解密功能 \n 請輸入加密公式(欲增加或減少幾個字母，需加上負號):";
		cin >> add;
		cout << "接著請輸入欲解密的內容:";
		cin >> in;
		for (int t = 0; in[t] != '\0'; t++){
			out[t] = in[t] - add;
			cout << out[t];
		}
	}
	system("PAUSE");
	return 0;
}


// DLLTestApplication.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "myDLL.h"

int main()
{
	int arr[] = { 3,6,7,8 };
	int nLen = sizeof(arr) / sizeof(int);
	int nTotal = convert_array(arr, nLen);
	std::cout << "数组元素求和结果：" << nTotal << std::endl;
	std::cout << "数组元素新值：" << std::endl;
	for (int i = 0; i < nLen; i++) {
		std::cout << arr[i] << ",";
	}
}


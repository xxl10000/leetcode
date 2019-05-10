////#include<iostream>
////using namespace std;
//// 
////
////int main()
////{
////	int A[] = { 4, -5, 3,-7,8,4,-10,2,7,-2,6 };
////	int N = sizeof(A) / sizeof(A[0]);
////	int thisSum = 0, Sum = 0;
////	for (int i = 0; i < N; i++)
////	{
////		thisSum += A[i];
////		if (thisSum > Sum)
////		{
////			Sum = thisSum;
////		}
////
////		if (thisSum < 0)
////		{
////			thisSum = 0;
////		}
////
////	}
////	cout << Sum << endl;
////	system("pause");
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//// reference: http://www.cplusplus.com/reference/unordered_map/unordered_map/at/
//typedef std::unordered_map<std::string, std::string> stringmap;
//
//// 将 a, b 融合为一个 unordered_map
//stringmap merge(stringmap a, stringmap b) {
//	// unordered_map 复制构造函数
//	stringmap temp(a);
//	// 范围插入，将 b 全部插入进 a 中
//	temp.insert(b.begin(), b.end());
//	return temp;
//}
//using namespace std;
//int main()
//{
//	//============================
//	//   1. unordered_map 元素计算与基础遍历
//	//============================
//	// 定义第一个 unordered_map
//	std::unordered_map<std::string, int> mymap = { { "Mars", 3000 }, { "Saturn", 60000 }, { "Jupiter", 70000 } };
//	//插入
//	mymap.insert(pair<string, int>("good", 2));
//	mymap["Earth"] = 23;
//	auto It = mymap.end();
//	It--;
//	//bug:mymap.insert(It, (unordered_map<string, int>)("good1", 3));
//	mymap.insert(It, pair<string, int>("good1", 3));
//
//	//查找
//	It = mymap.find("Mars");
//	if (It != mymap.end())
//	{
//		cout << "Success Find" << It->first << endl;
//	}
//
//	//删除
//	mymap.erase("Mars");
//	It = mymap.begin();
//	cout << "erase find"<<It->first << endl;
//	
//	mymap.erase(It);  
//	// erased : It->first but;cout << "erase"<<It->first << endl;
//	
//	system("pause");
//	cin.get();
//
//	// 对元素进行计算
//	mymap.at("Mars") = 3396;
//	mymap.at("Saturn") += 272;
//	mymap.at("Jupiter") = mymap.at("Saturn") + 9638;
//	//swap(mymap["Mars"], mymap["saturn"]);
//	auto It1 = mymap.end();
//	//cout << It->first << It->second << endl;
//
//	//It++;
//	//It++;
//	//mymap.erase(It);
//	cout << "good"<<mymap.size() << endl;
//
//	// auto：自动判断类型
//	// 基于范围的 for 循环，遍历 mymap
//	for (auto& x : mymap) {
//		std::cout << x.first << ": " << x.second << std::endl;
//	}
//	std::cout << "mymap.size() is " << mymap.size() << std::endl << std::endl;
//
//	//============================
//	//   2. iterator, 迭代器遍历
//	//============================
//	// 定义第二个 unordered_map
//	std::unordered_map<std::string, std::string> mymap2 = { { "Australia", "Canberra" }, { "U.S.", "Washington" }, { "France", "Paris" } };
//	std::cout << "mymap2 contains:" << std::endl;
//
//	// 遍历 mymap2
//	for (auto it = mymap2.begin(); it != mymap2.end(); ++it)
//		std::cout << " " << it->first << ":" << it->second << std::endl;
//	std::cout << std::endl;
//	cout << mymap.max_size() << endl;
//	// mymap2 分配的各桶中的元素
//	std::cout << "mymap2's buckets contain:\n";
//	for (unsigned i = 0; i < mymap2.bucket_count(); ++i) {
//		std::cout << "bucket #" << i << " contains:";
//		for (auto local_it = mymap2.begin(i); local_it != mymap2.end(i); ++local_it)
//			std::cout << " " << local_it->first << ":" << local_it->second;
//		std::cout << std::endl;
//	}
//
//	//============================
//	//   3. bucker, 桶操作
//	//============================
//	// 定义第三个 unordered_map
//	std::unordered_map<std::string, std::string> mymap3 = {
//			{ "us", "United States" },
//			{ "uk", "United Kingdom" },
//			{ "fr", "France" },
//			{ "de", "Germany" }
//	};
//
//	// 遍历 mymap3
//	for (auto& x : mymap3) {
//		std::cout << "Element [" << x.first << ":" << x.second << "]";
//		// 返回元素所在桶号
//		std::cout << " is in bucket #" << mymap3.bucket(x.first) << std::endl;
//	}
//
//	//============================
//	//   4. count ，判断元素是否在容器中
//	//============================
//	// 定义第四个 unordered_map
//	std::unordered_map<std::string, double> mymap4 = {
//			{ "Burger", 2.99 },
//			{ "Fries", 1.99 },
//			{ "Soda", 1.50 } };
//
//	// 遍历 mymap4
//	for (auto& x : { "Burger", "Pizza", "Salad", "Soda" })
//	{
//		// 判断 x 是否在容器中
//		if (mymap4.count(x) > 0)
//			std::cout << "mymap4 has " << x << std::endl;
//		else
//			std::cout << "mymap4 has no " << x << std::endl;
//	}
//
//	//============================
//	//   5. erase ，删除操作
//	//============================
//	// 定义第五个 unordered_map
//	std::unordered_map<std::string, std::string> mymap5;
//	mymap5["U.S."] = "Washington";
//	mymap5["U.K."] = "London";
//	mymap5["France"] = "Paris";
//	mymap5["Russia"] = "Moscow";
//	mymap5["China"] = "Beijing";
//	mymap5["Germany"] = "Berlin";
//	mymap5["Japan"] = "Tokyo";
//
//	// 通过迭代器删除
//	mymap5.erase(mymap5.begin());
//	// 通过 Key 值删除
//	mymap5.erase("France");
//	// 通过迭代器范围删除
//	mymap5.erase(mymap5.find("China"), mymap5.end());
//
//	// 基于范围的 for 循环，遍历展示删除后的 mymap
//	for (auto& x : mymap5)
//		std::cout << x.first << ": " << x.second << std::endl;
//
//	//============================
//	//   6. find ，搜索操作
//	//============================
//	// 定义第六个 unordered_map
//	std::unordered_map<std::string, double> mymap6 = {
//			{ "mom", 5.4 },
//			{ "dad", 6.1 },
//			{ "bro", 5.9 } };
//
//	std::string input;
//	std::cout << "who? ";
//	// 输入 mom, dad, bro 中的一个，否则搜索失败返回 Not Found
//	getline(std::cin, input);
//
//	// 根据输入参数 Key 值进行搜索，返回一个迭代器
//	std::unordered_map<std::string, double>::const_iterator got = mymap6.find(input);
//
//	// find 返回值若为 unordered_map 的尾部，则没有在容器中找到
//	if (got == mymap6.end())
//		std::cout << "not found";
//	else
//		std::cout << got->first << " is " << got->second;
//	std::cout << std::endl;
//
//	//============================
//	//   6. insert ，插入操作
//	//============================
//	// 定义第七、八个 unordered_map
//	std::unordered_map<std::string, double>
//		myrecipe,
//		mypantry = { { "milk", 2.0 }, { "flour", 1.5 } };
//
//	// 定义插入元素，类型为 pair 的对象
//	std::pair<std::string, double> myshopping("baking powder", 0.3);
//
//	// 复制插入
//	myrecipe.insert(myshopping);
//	// 移动插入
//	myrecipe.insert(std::make_pair<std::string, double>("eggs", 6.0));
//	// 范围插入
//	myrecipe.insert(mypantry.begin(), mypantry.end());  // range insertion
//	// 初始化列表插入
//	myrecipe.insert({ { "sugar", 0.8 }, { "salt", 0.1 } });    // initializer list insertion
//
//	std::cout << "myrecipe contains:" << std::endl;
//	for (auto& x : myrecipe)
//		std::cout << x.first << ": " << x.second << std::endl;
//
//	std::cout << std::endl;
//
//	//============================
//	//   7. 等于运算符 = 操作
//	//============================
//	// 初始化列表
//	stringmap first = { { "AAPL", "Apple" }, { "MSFT", "Microsoft" } };
//	stringmap second = { { "GOOG", "Google" }, { "ORCL", "Oracle" } };
//	// 移动
//	stringmap third = merge(first, second);
//	// 复制
//	first = third;
//
//	std::cout << "first contains:";
//	for (auto& elem : first) std::cout << " " << elem.first << ":" << elem.second;
//	std::cout << std::endl;
//
//	return 0;
//}
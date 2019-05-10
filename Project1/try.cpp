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
//// �� a, b �ں�Ϊһ�� unordered_map
//stringmap merge(stringmap a, stringmap b) {
//	// unordered_map ���ƹ��캯��
//	stringmap temp(a);
//	// ��Χ���룬�� b ȫ������� a ��
//	temp.insert(b.begin(), b.end());
//	return temp;
//}
//using namespace std;
//int main()
//{
//	//============================
//	//   1. unordered_map Ԫ�ؼ������������
//	//============================
//	// �����һ�� unordered_map
//	std::unordered_map<std::string, int> mymap = { { "Mars", 3000 }, { "Saturn", 60000 }, { "Jupiter", 70000 } };
//	//����
//	mymap.insert(pair<string, int>("good", 2));
//	mymap["Earth"] = 23;
//	auto It = mymap.end();
//	It--;
//	//bug:mymap.insert(It, (unordered_map<string, int>)("good1", 3));
//	mymap.insert(It, pair<string, int>("good1", 3));
//
//	//����
//	It = mymap.find("Mars");
//	if (It != mymap.end())
//	{
//		cout << "Success Find" << It->first << endl;
//	}
//
//	//ɾ��
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
//	// ��Ԫ�ؽ��м���
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
//	// auto���Զ��ж�����
//	// ���ڷ�Χ�� for ѭ�������� mymap
//	for (auto& x : mymap) {
//		std::cout << x.first << ": " << x.second << std::endl;
//	}
//	std::cout << "mymap.size() is " << mymap.size() << std::endl << std::endl;
//
//	//============================
//	//   2. iterator, ����������
//	//============================
//	// ����ڶ��� unordered_map
//	std::unordered_map<std::string, std::string> mymap2 = { { "Australia", "Canberra" }, { "U.S.", "Washington" }, { "France", "Paris" } };
//	std::cout << "mymap2 contains:" << std::endl;
//
//	// ���� mymap2
//	for (auto it = mymap2.begin(); it != mymap2.end(); ++it)
//		std::cout << " " << it->first << ":" << it->second << std::endl;
//	std::cout << std::endl;
//	cout << mymap.max_size() << endl;
//	// mymap2 ����ĸ�Ͱ�е�Ԫ��
//	std::cout << "mymap2's buckets contain:\n";
//	for (unsigned i = 0; i < mymap2.bucket_count(); ++i) {
//		std::cout << "bucket #" << i << " contains:";
//		for (auto local_it = mymap2.begin(i); local_it != mymap2.end(i); ++local_it)
//			std::cout << " " << local_it->first << ":" << local_it->second;
//		std::cout << std::endl;
//	}
//
//	//============================
//	//   3. bucker, Ͱ����
//	//============================
//	// ��������� unordered_map
//	std::unordered_map<std::string, std::string> mymap3 = {
//			{ "us", "United States" },
//			{ "uk", "United Kingdom" },
//			{ "fr", "France" },
//			{ "de", "Germany" }
//	};
//
//	// ���� mymap3
//	for (auto& x : mymap3) {
//		std::cout << "Element [" << x.first << ":" << x.second << "]";
//		// ����Ԫ������Ͱ��
//		std::cout << " is in bucket #" << mymap3.bucket(x.first) << std::endl;
//	}
//
//	//============================
//	//   4. count ���ж�Ԫ���Ƿ���������
//	//============================
//	// ������ĸ� unordered_map
//	std::unordered_map<std::string, double> mymap4 = {
//			{ "Burger", 2.99 },
//			{ "Fries", 1.99 },
//			{ "Soda", 1.50 } };
//
//	// ���� mymap4
//	for (auto& x : { "Burger", "Pizza", "Salad", "Soda" })
//	{
//		// �ж� x �Ƿ���������
//		if (mymap4.count(x) > 0)
//			std::cout << "mymap4 has " << x << std::endl;
//		else
//			std::cout << "mymap4 has no " << x << std::endl;
//	}
//
//	//============================
//	//   5. erase ��ɾ������
//	//============================
//	// �������� unordered_map
//	std::unordered_map<std::string, std::string> mymap5;
//	mymap5["U.S."] = "Washington";
//	mymap5["U.K."] = "London";
//	mymap5["France"] = "Paris";
//	mymap5["Russia"] = "Moscow";
//	mymap5["China"] = "Beijing";
//	mymap5["Germany"] = "Berlin";
//	mymap5["Japan"] = "Tokyo";
//
//	// ͨ��������ɾ��
//	mymap5.erase(mymap5.begin());
//	// ͨ�� Key ֵɾ��
//	mymap5.erase("France");
//	// ͨ����������Χɾ��
//	mymap5.erase(mymap5.find("China"), mymap5.end());
//
//	// ���ڷ�Χ�� for ѭ��������չʾɾ����� mymap
//	for (auto& x : mymap5)
//		std::cout << x.first << ": " << x.second << std::endl;
//
//	//============================
//	//   6. find ����������
//	//============================
//	// ��������� unordered_map
//	std::unordered_map<std::string, double> mymap6 = {
//			{ "mom", 5.4 },
//			{ "dad", 6.1 },
//			{ "bro", 5.9 } };
//
//	std::string input;
//	std::cout << "who? ";
//	// ���� mom, dad, bro �е�һ������������ʧ�ܷ��� Not Found
//	getline(std::cin, input);
//
//	// ����������� Key ֵ��������������һ��������
//	std::unordered_map<std::string, double>::const_iterator got = mymap6.find(input);
//
//	// find ����ֵ��Ϊ unordered_map ��β������û�����������ҵ�
//	if (got == mymap6.end())
//		std::cout << "not found";
//	else
//		std::cout << got->first << " is " << got->second;
//	std::cout << std::endl;
//
//	//============================
//	//   6. insert ���������
//	//============================
//	// ������ߡ��˸� unordered_map
//	std::unordered_map<std::string, double>
//		myrecipe,
//		mypantry = { { "milk", 2.0 }, { "flour", 1.5 } };
//
//	// �������Ԫ�أ�����Ϊ pair �Ķ���
//	std::pair<std::string, double> myshopping("baking powder", 0.3);
//
//	// ���Ʋ���
//	myrecipe.insert(myshopping);
//	// �ƶ�����
//	myrecipe.insert(std::make_pair<std::string, double>("eggs", 6.0));
//	// ��Χ����
//	myrecipe.insert(mypantry.begin(), mypantry.end());  // range insertion
//	// ��ʼ���б����
//	myrecipe.insert({ { "sugar", 0.8 }, { "salt", 0.1 } });    // initializer list insertion
//
//	std::cout << "myrecipe contains:" << std::endl;
//	for (auto& x : myrecipe)
//		std::cout << x.first << ": " << x.second << std::endl;
//
//	std::cout << std::endl;
//
//	//============================
//	//   7. ��������� = ����
//	//============================
//	// ��ʼ���б�
//	stringmap first = { { "AAPL", "Apple" }, { "MSFT", "Microsoft" } };
//	stringmap second = { { "GOOG", "Google" }, { "ORCL", "Oracle" } };
//	// �ƶ�
//	stringmap third = merge(first, second);
//	// ����
//	first = third;
//
//	std::cout << "first contains:";
//	for (auto& elem : first) std::cout << " " << elem.first << ":" << elem.second;
//	std::cout << std::endl;
//
//	return 0;
//}
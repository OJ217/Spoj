#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
#include <cstring>
#include <cmath>
#include <vector>
#include <typeinfo>
#include <algorithm>
#include <iomanip>
// #include <array>

using namespace std;

void threeDigitNum();
void secondsToHourMinuteSecond();
void sumIfGreaterThanEighty();
int oddMultiplication();
int notDividedByEleven();
int evenYes();
int aTimesN();
int numToGrade();
int numToSeason();
int multiplicationTable();
int exponentationTable();
int floorAndDoor();
int blockFloorDoor();
int sumUntilN();
int sumSquareUntilN();
int oddSumUntilNOdd();
int digitSum();
int evenDigitSum();
int oddDigitCount();
int nRepetition();
int maxDigit();
int minDigit();
int reversedNum();
int isPalindrome();
int isSquareOfInteger();
int divideByLargestThreePower();
int divideByLargestThreePowerSimple();
int checkIfFactorial();
int minimumGeneralDivisor();
int greatestCommonDivisor();
int simplifyFractions();
int repeatNtimes();
int printUntilN();
int fromNineToN();
int doubleLoop();
int secondDoubleLoop();
int thirdDoubleLoop();
int fourthDoupleLoop();
int fifthDoupleLoop();
int sixthDoubleLoop();
int addOneAndSquare();
int typeOfTriangle();
int leastCommonMultipleForThreeNums();
int hypotenuse();
int triangleArea();
int circleArea();
int arithmeticAndGeometricMean();
int sumOfCubes();
int circleAreaAndCircumference();
int massiveSum();
int sumOfPositiveIntegeresInArray();
int checkBadGrades();
int evenAndOdd();
int maxNum();
int minNum();
int numRepInArray();
int maxAndNumOfMax();
int maxAndMaxRep();
int lengthBetweenTwoPoints();

int main(){
	leastCommonMultipleForThreeNums();
    return 0;
}

int printNums() {
    // Complete the code.
    int a; 
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << "\n" << b << "\n" << c << "\n";
    // cout <<fixed<<setprecision(3)<<d<<"\n";
    // cout <<fixed<<setprecision(9)<<e<<"\n";
    return 0;
}

void lastDigit(){
    int a;
	cin >> a;
	cout << ((a % 100) - (a % 10)) / 10 << endl;
}

void threeDigitNum(){
    int a;
	cin >> a;
	cout << (a / 100) + (a % 100 / 10) + (a % 10) << endl;
}

void secondsToHourMinuteSecond() {
	int a;
	cin >> a;
	cout << a / 3600 << " " << (a % 3600) / 60 << " " << (a % 3600) % 60 << endl; 
}

void sumIfGreaterThanEighty() {
	int sum = 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int nums[4] = {a, b, c, d};
	for(int i = 0; i < 4; i++){
		if(nums[i] > 80) {
			sum += nums[i];
		} else {
			continue;
		}
	}
	cout << sum << endl;
}

int oddMultiplication() {
	int multiplication = 1;
	int a, b, c;
	cin >> a >> b >> c;
	int nums[3] = {a, b, c};
	for(int i = 0; i < 3; i++){
		if(nums[i] %2 != 0) {
			multiplication *= nums[i];
		} else {
			continue;
		}
	}
	cout << multiplication << endl;
	return 0;
}

int notDividedByEleven() {
	int sum = 0;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int nums[4] = {a, b, c, d};
	for(int i = 0; i < 4; i++) {
		if((nums[i] < 11) || ((nums[i] % 11) != 0)) {
			sum += nums[i];
		} else {
			continue;
		}
	}
    cout << sum << endl;
	return 0;
}

int evenYes(){
    int a, b, c;
	cin >> a >> b >> c;
	int nums[3] = {a, b, c};
	for(int i = 0; i < 3; i++){
		if((nums[i] % 2) == 0) {
			cout << "YES" << "\n";
		} else {
			cout << "NO" << "\n";
		}
	}

	return 0;
}

int aTimesN(){
    int sum = 0;
	int a, b;
	cin >> a >> b;
	for(int i = 1; i <= b; i++) {
		sum += a;
	}
	cout << sum << endl;
	return 0;
}

int numToGrade() {
	int a;
	cin >> a;
	if(a > 89) {
        cout << "A" << endl;
    } else if (a > 79) {
        cout << "B" << endl;
    } else if (a > 69) {
        cout << "C" << endl;
    } else if (a > 59) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }

	return 0;
}

int numToSeason() {
	int a;
	cin >> a;
	if(a >= 2 && a <= 5) {
		cout << "Spring" << endl;
	} else if(a >= 6 && a <= 8) {
		cout << "Summer" << endl;
	} else if(a >= 9 && a <= 11) {
		cout << "Autumn" << endl;
	} else if (a == 12 || a == 1){
		cout << "Winter" << endl;
	}
	return 0;
}

int multiplicationTable() {
	int a;
	cin >> a;
	for(int i = 1; i <= 10; i++){
		cout << a << "*" << i << "=" << (a * i) << "\n";
	}
	return 0;
}

int exponentationTable(){
    int a, b;
	cin >> a >> b;
	for (int i = 1; i <= b; i++){
		cout << fixed << a << "^" << i << "=" << pow(a, i) << "\n";
	}
	return 0;
}

int floorAndDoor() {
	int a, b, c;
	cin >> a >> b;
	cin >> c;
	int floorNumber;
	if((c % b) != 0) {
		floorNumber = (c / b) + 1;
	} else {
		floorNumber = c / b;
	}
	int numberAtFloor;
    if((c % b) == 0) {
        numberAtFloor = b;
    } else {
        numberAtFloor = b - ((b * floorNumber) - c);
    }
	cout << floorNumber << " " << numberAtFloor << endl;
	return 0;
}

int blockFloorDoor() {
	int numOfFloors, blocks, numOfHousesAtFloor, num;
	cin >> numOfFloors >> blocks >> numOfHousesAtFloor;
    cin >> num;
    //block, floor, numAtFloor
    int block, floor, numAtFloor, housesInBlock;
    housesInBlock = numOfHousesAtFloor * numOfFloors;
    if((num % housesInBlock) == 0) {
        block = num / housesInBlock;
    } else {
        block = num / housesInBlock + 1;
    }
    int numAtBlock = num - ((block - 1) * housesInBlock);
    if((numAtBlock % numOfHousesAtFloor) == 0) {
        floor = numAtBlock / numOfHousesAtFloor;
    } else {
        floor = (numAtBlock / numOfHousesAtFloor) + 1;
    }
    numAtFloor = numAtBlock - ((floor-1) * numOfHousesAtFloor);
    cout << block << " " << floor << " " << numAtFloor << endl;
	return 0;
}

int sumUntilN(){
    int sum = 0;
    int n;
    cin >> n;
    for(int i = 1; i <=n; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

int sumSquareUntilN(){
    int sum = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        sum += pow(i, 2);
    }
    cout << sum << endl;
    return 0;
}

int oddSumUntilNOdd(){
    int sum = 0;
    int n; 
    cin >> n;
    for (int i = 1; i <= n; i++){
        if((i % 2) == 1) {
            sum += i;
        } else {
            continue;
        }
    }
    cout << sum << endl;
    return 0;
}

int digitSum() {
	int n;
	int sum = 0;
	cin >> n;
	while (n > 0) {
		if(n <= 9) {
			sum += n;
			break;
		} else {
			sum += (n % 10);
			n /= 10;
		}
	}
	cout << sum << endl;
	return 0;
}

int evenDigitSum(){
	int n, lastDigit;
	cin >> n;
	int sum = 0;
	while (n > 0) {
		lastDigit = n % 10;
		if(lastDigit % 2 == 0) {
			if(n <= 9) {
				sum += lastDigit;
				break;
			} else {
				sum += lastDigit;
				n /= 10;
				continue;
			}
		} else if(n <= 9){
			break;
		} else {
			n /= 10;
			continue;
		}
	}
	cout << sum << endl;
	return 0;
}

int oddDigitCount() {
	int n, lastDigit, count = 0;
	cin >> n;
	while (n > 0)
	{
		lastDigit = n % 10;
		if(lastDigit % 2 == 1) {
			if(n <= 9) {
				count += 1;
				break;
			} else {
				count += 1;
				n /= 10;
				continue;
			}
		} else if( n <= 9) {
			break;
		} else {
			n /= 10;
			continue;
		}
	}
	cout << count << endl;
	return 0;
}

int nRepetition(){
	int n, digit, lastDigit, rep = 0;
	cin >> n >> digit;
	while (n > 0)
	{
		lastDigit = n % 10;
		if(lastDigit == digit) {
			if(n <= 9) {
				rep += 1;
				break;
			} else {
				rep += 1;
				n /= 10;
				continue;
			}
		} else if (n <= 9)
		{
			break;
		} else {
			n /= 10;
			continue;
		}
		
	}
	cout << rep << endl;
	return 0;
}

int maxDigit(){
	int n, max, lastDigit;
	cin >> n;
	max = n % 10;
	n /= 10;
	while (n > 0) {
		lastDigit = n % 10;
		if(lastDigit > max) {
			max = lastDigit;
			if(n <= 9) {
				break;
			} else {
				n /= 10;
				continue;
			}
		} else if (n <= 9){
			break;
		} else {
			n /= 10;
			continue;
		}
	}
	cout << max << endl;
	return 0;
}

int minDigit(){
	int n, min, lastDigit;
	cin >> n;
	min = n % 10;
	n /= 10;
	while (n > 0) {
		lastDigit = n % 10;
		if(lastDigit < min) {
			min = lastDigit;
			if(n <= 9) {
				break;
			} else {
				n /= 10;
				continue;
			}
		} else if (n <= 9){
			break;
		} else {
			n /= 10;
			continue;
		}
	}
	cout << min << endl;
	return 0;
}

int reversedNum(){
	int lastDigit, n, rev = 0;
	cin >> n;
	while (n > 0)
	{
		lastDigit = n % 10;
		rev = rev * 10 + lastDigit;
		if(n <= 9) {
			break;
		} else {
			n /= 10;
			continue;
		}
	}
	cout << rev << endl;
	return 0;
}

int isPalindrome(){
	int lastDigit, n, rev = 0;
	cin >> n;
	int originalNum = n;
	while (n > 0)
	{
		lastDigit = n % 10;
		rev = rev * 10 + lastDigit;
		if(n <= 9) {
			break;
		} else {
			n /= 10;
			continue;
		}
	}
	if(originalNum == rev) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

int isSquareOfInteger() {
	double n, squareRoot, rounded;
	cin >> n;
	squareRoot = sqrt(n);
	rounded = round(squareRoot);
	if (squareRoot == rounded) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

int divideByLargestThreePower() {
	double n, divider = 3;
	cin >> n;
	while ((n / divider) == round(n / divider)) {
		divider *= 3;
	}
	cout << round(n / divider * 3) << endl;
	return 0;
}

int divideByLargestThreePowerSimple() {
	int n;
	cin >> n;
	while (n % 3==0){
		n /= 3;
	}
	cout << n << endl;
	return 0;
}

int checkIfFactorial(){
	int n;
	cin >> n;
	int i = 1;
	while (n % i == 0) {
		if (n / i == 1) {
			cout << i << endl;
			break;
		} else {
			n /= i;
			i+=1;
			continue;
		}
	}
	bool equalsZero = (n % i == 0);
	if(!equalsZero) {
		cout << "No" << endl;
	}

	return 0;
}

int minimumGeneralDivisor(){
	int a, b, divisor;
	cin >> a >> b;
	divisor = max(a, b);
	while (!(((divisor % a) == 0) && ((divisor % b) == 0))) {
		divisor += 1;
	}
	cout << divisor << endl;
	return 0;
}

int greatestCommonDivisor(){
	int a, b, divisor;
	cin >> a >> b;
	divisor = min(a, b);
	while(!((a % divisor == 0) && (b % divisor == 0))){
		divisor -= 1;
	}
	cout << divisor << endl;
	return 0;
}

int simplifyFractions(){
	int a, b, divisor;
	cin >> a >> b;
	divisor = a;
	while(!((a % divisor == 0) && (b % divisor == 0))){
		divisor -= 1;
	}
	cout << a / divisor << "/" << b / divisor << endl;
	return 0;
}

int repeatNtimes(){
	int a, answer;
	cin >> a;
	answer = 0;
	for(int i = 0; i < a; i++){
		answer = answer * 10 + a;
	}
	cout << answer << endl;
	return 0;
}

int printUntilN(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		if(i == (n-1)){
			cout << i << endl;
		} else {
			cout << i << " ";
		}
	}
	return 0;
}

int fromNineToN(){
	int n;
	cin >> n;
	for (int i = 9; i >= n; i--){
		cout << i << endl;
	}
	return 0;
}

int doubleLoop(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 1; j <= n; j++){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}

int secondDoubleLoop(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		for(int j = n; j >=1; j--){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int thirdDoubleLoop(){
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int fourthDoupleLoop(){
	int n;
	cin >> n;
	for(int i = n; i >=1; i--){
		for(int j = 1; j<= i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int fifthDoupleLoop(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = n; j > (n-i); j--){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int sixthDoubleLoop(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = n; j>= i; j--){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

int addOneAndSquare(){
	long long a, b = 10;
	cin >> a;
	a = a * 10 + 1;
	while (a > b) {
		b *= 10;
	}
	a = (a + b) * (a + b);
	cout << a << endl;
	return 0;
}

int typeOfTriangle(){
	int a, b, c, maxNum, sum;
	cin >> a >> b >> c;
	maxNum = max(max(a, b), c);
	if(maxNum == a) {
		sum = pow(b, 2) + pow(c, 2);
	}  else if(maxNum == b) {
		sum = pow(a, 2) + pow(c, 2);
	} else {
		sum = pow(a, 2) + pow(b, 2);
	}
	maxNum = pow(maxNum, 2);
	if(maxNum == sum){
		cout << "Right" << endl;
	} else if (maxNum > sum) {
		cout << "Obtuse" << endl;
	} else {
		cout << "Acute" << endl;
	}
	return 0;
}

int leastCommonMultipleForThreeNums(){
	int a, b, c, maxNum;
	cin >> a >> b >> c;
	maxNum = max(max(a, b), c);
	bool d = (maxNum % a == 0) && (maxNum % b == 0) && (maxNum % c == 0);
	while(!d){
		maxNum += 1;
	}
	cout << maxNum << endl;
	return 0;
}

int hypotenuse(){
	double a, b, c;
	cin >> a >> b;
	c = sqrt(a*a + b*b);
	cout << fixed << setprecision(1) << c << endl;
	return 0;
}

int triangleArea(){
	double a, b, c, area, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	area = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << fixed << setprecision(2) << area << endl;
	return 0;
}

int circleArea(){
	double c, r;
	const double pi = 3.141592;
	cin >> c;
	r = c / (2 * pi);
	cout << fixed << setprecision(4) << (pi * r * r) << endl;
	return 0;
}

int arithmeticAndGeometricMean(){
	double a, b, aMean, gMean;
	cin >> a >> b;
	aMean = (a+b) / 2;
	gMean = sqrt(a*b);
	cout << fixed << setprecision(2) << aMean << " " << gMean << endl;
	return 0;
}

int sumOfCubes(){
	int n, sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		sum = sum + (i * i * i);
	}
	cout << sum << endl;
	return 0;
}

int circleAreaAndCircumference(){
	double r, a, c, pi = 3.141592;
	cin >> r;
	a = pi * r * r;
	c = 2 * pi * r;
	cout << fixed << setprecision(1) << a << " " << c << endl;
	return 0;
}

int massiveSum(){
	int n, sum = 0;
	cin >> n;
	int numArray[n];
	for(int i = 0; i < n; i++){
		cin >> numArray[i];
	}
	for(int j = 0; j < n; j++){
		sum += numArray[j];
	}
	cout << sum << endl;
	return 0;
}

int sumOfPositiveIntegeresInArray(){
	int n, sum = 0, num;
	cin >> n;
	int numArray[n];
	for(int i = 0; i < n; i++){
		cin >> numArray[i];
	}
	for(int j = 0; j < n; j++){
		num = numArray[j];
		if(num > 0) {
			sum += num;
		}
	}
	cout << sum << endl;
	return 0;
}

int checkBadGrades(){
	int n, sum = 0, num;
	cin >> n;
	int numArray[n];
	for(int i = 0; i < n; i++){
		cin >> numArray[i];
	}
	for(int j = 0; j < n; j++){
		num = numArray[j];
		if(num < 60) {
			sum += 1;
		}
	}
	cout << sum << endl;
	return 0;
}

int evenAndOdd(){
	int n, evenSum = 0, oddSum = 0, num;
	cin >> n;
	int numArray[n];
	for(int i = 0; i < n; i++){
		cin >> numArray[i];
	}
	for(int j = 0; j < n; j++){
		num = numArray[j];
		if(num % 2 == 0){
			evenSum += 1;
		} else {
			oddSum += 1;
		}
	}
	if(evenSum < oddSum){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}

int maxNum(){
	int n, max, num;
	cin >> n;
	int arrayNum[n];
	for (int i = 0; i < n; i++){
		cin >> arrayNum[i];
	}
	for(int j = 0; j < n; j++){
		num = arrayNum[j];
		if (j == 0){
			max = num;
		} else {
			if(num > max){
				max = num;
			}
		}
	}
	cout << max << endl;
	return 0;
}

int minNum(){
	int n, min, num;
	cin >> n;
	int arrayNum[n];
	for (int i = 0; i < n; i++){
		cin >> arrayNum[i];
	}
	for(int j = 0; j < n; j++){
		num = arrayNum[j];
		if (j == 0){
			min = num;
		} else {
			if(num < min){
				min = num;
			}
		}
	}
	cout << min << endl;
	return 0;
}

int numRepInArray(){
	long long n, target, num, sum;
	cin >> n;
	long long arrayNum[n];
	for(long long i = 0; i < n; i++){
		cin >> arrayNum[i];
	}
	cin >> target;
	for(long long j = 0; j < n; j++){
		num = arrayNum[j];
		if(num == target){
			sum +=1;
		}
	}
	cout << target << " " << sum << endl;
	return 0;
}

int maxAndNumOfMax(){
	int n, num, index, max;
	cin >> n;
	int numArray[n];
	for(int i = 0; i < n; i++){
		cin >> numArray[i];
	}
	for(int j = 0; j < n; j++){
		num = numArray[j];
		if(j == 0) {
			max = num;
			index = j + 1;
		} else {
			if(num > max){
				max = num;
				index = j + 1;
			}
		}
	}
	cout << max << " " << index << endl;
	return 0;
}

int maxAndMaxRep(){
	int n, max, sum = 0, num;
	cin >> n;
	int numArray[n];
	for(int i = 0; i < n; i++){
		cin >> numArray[i];
	}
	for(int j = 0; j < n; j++){
		num = numArray[j];
		if(j == 0){
			max = num;
			sum += 1;
		} else {
			if(num > max){
				max = num;
				sum = 1;
			} else if (num == max) {
				sum += 1;
			}
		}
	}
	cout << max << " " << sum << endl;
	return 0;
}

int lengthBetweenTwoPoints(){
	double aax, abx, bax, bay, bbx, bby, cax, cay, caz, cbx, cby, cbz, al, bl, cl;
	cin >> aax >> abx >> bax >> bay >> bbx >> bby >> cax >> cay >> caz >> cbx >> cby >> cbz;
	al = aax - abx;
	if(al < 0){
		al = al * (-1);
	}
	bl = sqrt(pow(bby - bay, 2) + pow(bbx - bax, 2));
	cl = sqrt(pow(cby - cay, 2) + pow(cbx - cax, 2) + pow(cbz-caz, 2));
	cout << fixed << setprecision(3) << al << endl;
	cout << fixed << setprecision(3) << bl << endl;
	cout << fixed << setprecision(3) << cl << endl;
	return 0;
}


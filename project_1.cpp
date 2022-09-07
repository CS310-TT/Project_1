#include <iostream>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

//printing array values
void printArray(int n, float myArray[]){
      for(int i = 0; i < n; i++){
  cout << myArray[i] << ", ";
    }
}
// Q1. searching of array
bool searchArray(float myArray[], int n, int userInput){
    for(int k = 0; k != n ; k++){
      for (int j = 0; j < n; j++) {
     if(myArray[j] == userInput){
        return true;
            }  
        else
        return false;
        }
    }
}
//Q2. find the minimum number in the array
void minNum(float myArray[],int n){
    int absoluteMin = myArray[0];
    for (int a = 0; a < n; a++) {
        if (myArray[a] < absoluteMin) {
            absoluteMin = myArray[a];
        }
    }
    cout << absoluteMin;
}
//Q3. find the max and min
void minMax(float myArray[],int n, int m){
        int absoluteMax = myArray[0];
    for (int a = 0; a < n; a++) {
        if (myArray[a] > absoluteMax) {
            absoluteMax = myArray[a];
        }
    }
        int absoluteMin = myArray[0];
    for (int a = 0; a < m; a++) {
        if (myArray[a] < absoluteMin) {
            absoluteMin = myArray[a];
        }
    }
    cout << absoluteMin << absoluteMax;

}
//Q5. Standard deviation
float standardDeviation(float myArray[],int n)
{
    float sum = 0.0, mean, sd = 0.0;
    int i;
    for(i = 0; i < n; ++i)
    {
        sum = sum + myArray[i]; // calculating sum
    }
    mean = sum/n; // finding mean.
    for(i = 0; i < n; ++i)
        sd = sd + pow(myArray[i] - mean, 2); // calculating standard deviation
    return sqrt(sd / n);
}
//Q6. convert to upper case
void upperString(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters
			str[i] = str[i] - 32;        //converting lowercase to uppercase  
	}
	cout<<"\n The string in upper case: "<< str;
}
//Q7. return string reversed
void reverseString(string str_1,int n)
{   
    for(int i= n ;str_1[i] > 0 ; i-- ){
        cout << str_1[i] << endl;

    }

}
//Q10. convert to roman numerals
string romanNum(int rN){
    map<int,string>m;
    m[1] = "I";
    m[2] = "II";
    m[3] = "III";
    m[4] = "IV";
    m[5] = "V";
    m[6] = "VI";
    m[7] = "VII";
    m[8] = "VIII";
    m[9] = "IX";
    m[10] = "X";
    m[20] = "XX";
    m[30] = "XXX";
    m[40] = "XL";
    m[50] = "L";
    m[60] = "LX";
    m[70] = "LXX";
    m[80] = "LXXX";
    m[90] = "XC";
    m[100] = "C";
    m[200] = "CC";
    m[300] = "CCC";
    m[400] = "CD";
    m[500] = "D";
    m[600] = "DC";
    m[700] = "DCC";
    m[800] = "DCCC";
    m[900] = "CM";
    m[1000] = "M";
    m[2000] = "MM";
    m[3000] = "MMM";
    string ans="";
    int j = 1;
    while(rN>0){
        j = j*10;
        int k = rN%(j);
        ans = m[k] + ans;
        rN = rN-k;
    }
    return ans;
}
//Q11. reverse the characters in the string
void reverseChar(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){
    //variables
  string str_1;
  string str;
  int rN;
  int userInput;
  bool solve;
  int n;
  cout << "enter your number of values " << endl;
  cin >> n;
  int m = n;
  float myArray[n];

        // for loop to intake values
    for (int j = 0; j < n; j++) {
        cin >> myArray[j];
        }

    //asking for users input
    cout << " enter the number you want to check: " << endl;
    cin >> userInput;

        cout << " enter the sentence you want converted to uppercase: " << endl;
    cin >> str;

        cout << " enter the sentence you want reversed: " << endl;
    cin >> str_1;
       cout << " enter the numer you want converted to roman numerals: " << endl;
    cin >>  rN;


// calling of different functions
    printArray(n, myArray);
    solve = searchArray(myArray, n , userInput);
    minNum(myArray, n);
    minMax(myArray, n, m);
    upperString(str);
    standardDeviation(myArray, n);
    reverseString(str_1,n);
    romanNum(rN);
    reverseChar(str);

    return 0;
}

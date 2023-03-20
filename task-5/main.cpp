#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;


/*
task_1. 4 xonali manfiy yoki musbat son berilgan. O'rtadagi 2 raqamni o'rnini almashtirib chop eting.
1908 => 1098
-8922 => -8292
*/
//int main()
//{
//    int a;
//    cout << " Ixtiyoriy to'rt xonali sonni kiriting: a= " ; cin >> a;
//    int minglik = a/1000;
//    float yuzlik = (a /100)%10;
//    float onlik = (a%100)/10;
//    float birlik = (a%1000)%10;
//    if( a>999&& a<=9999){
//         cout << "result : " << minglik *1000 +onlik *100 + yuzlik *10 +birlik;
//    }
//    else if( a < -999  && a >= -9999 ){
//        cout << "result : " << minglik *1000 +onlik *100 + yuzlik *10 +birlik;
//    }else{
//        cout << " Siz to'rt xonali son kiritmadinggiz " ;
//    }
//    return 0;
//}


//task_2.4 ta berilgan sonlar bir-biriga teng bo'lsa Yes aks holda, No degan yozuv chiqaring


//1 2 3 4 =>  No
//1 1 1 1 => Yes

//int main(){
//   int   a, b, c , d ;
//   cout << " a= " ; cin >> a;
//   cout << " b= " ; cin >> b;
//   cout << " c= " ; cin >> c;
//   cout << " d= " ; cin >> d;
//   string check =(a == b && a == c && a == d)? "Yes ": "No";
//   cout << check;
//   return 0;
//
//}



//task_3.Shahboz, Muhammadrizo, Muhammadjon => Furqatning uyiga borish oldidan unga sovg'a olishmoqchi. Sovg'aning narxi N so'm.
//Shahbozda A so'm, Muhammadrizoda B so'm, Muhammadjonda C so'm pul bor. Ularning puli sovg'aga yetsa Yes, aks holda No degan yozuv chiqarilsin.
//
//
//5 => sovga narxi
//2 3 4 => ularning pullari  Output Yes  sovg'a

//int main(){
//    int n , a , b, c;
//    cout << " Sovg'a narxini kiriting:_"; cin >> n;
//    cout << " Shahbozning pulini  kiriting:_"; cin >> a;
//    cout << " Muhammadrizodaning  pulini  kiriting:_"; cin >> b;
//    cout << " Muhammadjonning pulini  kiriting:_"; cin >>c;
//
//    string  _sovga = ((a+b+c)/n >= 1)? "Yes" : "No";
//    cout <<_sovga;
//
//}


//task_4.Ko'p bolalar yoshliglarida gugurt cho'plardan foydalanib turli hil narsalar yasashgan.
// Masalan, Wahid amaki gugurt cho'plaridan uychalar yasashni yoqtirar edilar.
// Ularning yasagan uychalarini ko'rinishi quyidagiga o'xshar edi. 1 ta uycha yasash uchun 6 ta cho'p,
// 2 ta uycha uchun 11 ta cho'p, 3 ta uycha uchun 16 ta cho'p kerak bo'lar edi.
//KiritilganNta uycha uchun kerak bo'ladigan cho'plar sonini aniqlaydigan dastur tuzing.
//
//1 => 6
//5 => 26

//int main(){
//    int n;
//    cout << "uychalar sonini kiriting: "; cin >> n;
//    if(n>0){
//        cout << " cho'plar soni " << n*5+1 << " ta ";
//    }else{
//        cout << " Mavjud bo'lgan uylar sonni  kiriting ";
//    }
//    return 0;
//
//}


// task_5  4 ta A, B, C, D butun sonlari berilgan. Birinchi sonni to'rtinchisiga,
//uchinchi sonni ikkinchisiga bo'lgandagi qoldiqlar yig'indisini toping.


//9 2 7 4 => 2
//17 4 15 5 => 5

//int main(){
//   int a, b,c, d;
//    cout << " a= "; cin >> a;
//    cout << " b= "; cin >> b;
//    cout << " c= "; cin >> c;
//    cout << " d= "; cin >>d;
//    float bolinma1= a%d;
//    float bolinma2= c%b;
//    cout <<"qoldiqlar yig'indisi: " << bolinma1+bolinma2;
//    return 0;
//}



// Bitta musbatNsoni qabul qiling va balandigiNga bog'liq bo'lgan piramidani yulduzchalar orqali chop eting.

// Piramida markaziy qatorigacha bo'lgan balandligiNga teng bo'lishi kerak.
//
//int main(){
//    int i,j, balandlik;
//    cout << " Balandlikni kiriting : "; cin >> balandlik;
//    for( i=1; i<=balandlik; i++){
//        for(j=i; j<balandlik; j++){
//            cout << " ";
//        }
//        for( j=1; j<= ( 2*i -1); j++){
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}

//num_rows = int(input("Enter the number of rows: "))
//
//print("Regular Pyramid:")
//for i in range(num_rows):
//    for j in range(num_rows - i - 1):
//        print(" ", end="")
//    for k in range(2 * i + 1):
//        print("*", end="")
//    print()
//for i in range(num_rows):
//    for j in range(i):
//        print(" ", end="")
//    for k in range(2 * (num_rows - i) - 1):
//        print("*", end="")
//    print()



//int main() {
//    int num_rows;
//    cout << "Enter the number of rows  : ";
//    cin >> num_rows;
//
//    for (int i = 0; i < num_rows; i++) {
//        for (int j = 0; j < num_rows - i - 1; j++) {
//            cout << " ";
//        }
//        for (int k = 0; k < 2 * i + 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    for (int i = 0; i < num_rows; i++) {
//        for (int j = 0; j < i; j++) {
//            cout << " ";
//        }
//        for (int k = 0; k < 2 * (num_rows - i) - 1; k++) {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
//
//
//
//// for
//int main(){
//   int sum=0;
//   double k = 1;
//    for( int i=1; i <= 50; i++){
//         if(i%2==0){
//            sum +=i;
//            //cout << sum <<endl;
//         }
//         else {
//            k *=i;
//            //cout << k <<endl;
//         }
//
//        //cout << "sum" <<sum <<endl;
//    }
//    cout << k<<endl;
//    cout << sum<<endl;
//    return 0;
//}

// dastlan=bki n ta sonni kiritganda

//int main(){
//    int n;
//    cout << " n sonini kiriting "; cin >> n;
//    for( int i=2; i <= n; i++){
//        bool tub =true;
//        if(tub){
//            i++;
//            cout << i<<endl;
//        }
//        else{
//
//        }
//
//    }
//    return 0;
//}


//int main(){
//    string name;
//    cout << " name =";  cin >> name;
//    //astring  name="Nodira";
//    int  a=name.length();
//    cout << "name ";
//    for ( int i=0; i<= a; i++ ){
//         cout<< i<<endl;
//    }
//    return 0;

//    int n ;
//    cout << " n sonni kiriting:"; cin >>n;
//     for( int i= n; i >= 0; i--){
//        if( i%3==0){
//            cout << i<< endl;
//        }
//
//      }
//}


//int main(){
//    string name;
//    cout << " name =";  cin >> name;
//    //astring  name="Nodira";
//    int  a=name.length();
//    cout << "name ";
//
//    for ( int i=0; i<= a; i++ ){
//         //cout<< i<<endl;
//         for (int j=0; j<=i; j++){
//            cout << j<<endl;
//         }
//    }
//    return 0;
//}

// stact owerflow meme  sayt  xatoliklarni aniqlaydi










//int main()
//{
//    int n;
//
//    cout << "Son Kiriting = "; cin >> n;
//    cout << n << " gacha bo'lgan TUB sonlar :" << endl;
//
//    for (int i = 2; i <= n; i++)
//    {
//      bool tub = true;
//      for (int j = 2; j <= sqrt(i); j++)
//      {
//        if (i % j == 0)
//        {
//            tub = false;
//            break;

//        }
//      }
//      if (tub == true)
//          cout << i << endl;
//    }
//    return 0;
//}






//int main(){
//
//int i =1;
// while( i <= 30){
//    cout << i << endl;
//    i++;
//}
//return 0;
//}



//#############################################################################################################

//N gacha bolgan  tub sonlarni chiqazadigan dastur tuzing

//int main(){
//
//int n , res; //res => bo'luvchilar sonini sanaydi
//cout << " n ="; cin >> n;
//
//for (int i=1; i<=n; i++){
//      res=0;
//      for(int j=1; j<=i; j++){
//          if(i%j==0){
//              res++;
//          }
//     }
//     if(res == 2){
//        cout << i<<endl;
//     }
//}
//return 0;
//}

//1.10ta son o'qing va ulardan eng kattasini va unda keyingi eng kattasini chop eting.
//34 11 17 5 75 61 41 68 38 31  => 75 68
//55 45 82 26 65 19 36 84 72 0  => 84 82


//int main(){
//
//int  max , maxBefore, n, num;
//cout << " n= "; cin >> n;
//cout << " 1-son: ";cin >> num;
//maxBefore= num; max=num;
//for(int i=0; i< n-1; i++){
//    cout << i+2 << "- son: "; cin >> num;
//    if(num > max){
//        max = num;
//    }
//    if(num=max){
//        maxBefore = max-1;
//    }
//}
//cout <<" maxBefore: " << maxBefore <<endl;
//cout <<" max: " << max <<endl;
//return 0;
//
//}

//2.N-Fibonachi sonini chop etadigan dastur tuzing.

//int main(){
//    num1=0;
//    num2=1;
//
//}

//int main()
//{
//    int num1 = 0;
//    int num2 = 1;
//    int num_temp;
//    int num_next = 1;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++){
//        cout << num_next << "  ";
//        num_next = num1 + num2;
//        num1 = num2;
//        num_temp = num2;
//        num2 = num_next - num1;
//        num1 = num_temp;
//    }
//    return 0;
//}



//#Hard_task1
// Berilgan son Palindrom yo no Palindrom ekanligini aniqlaydigan dastur tuzing.
// Palindrom son deb teskarisiga o'qiganda ham qiymati o'zgarmaydigan songa aytiladi (1221)
//agar Palindrom bolsa true ni bolmasa falseni chiqazing ekranga

//int main(){
//int n, birlik, onlik, yuzlik , minglik;
//cout << " Berilgan sonni kiriting:"; cin >> n;
//    minglik = n/1000; yuzlik = (n%1000)/100; onlik = n %100/10;  birlik = n%10;
//
// if( n >999 && n<=9999){
//    if( minglik== birlik && yuzlik==onlik){
//       bool check = true; cout << boolalpha<< check; //1221=>palindrom
//   }
//   else if( minglik== yuzlik && yuzlik==birlik  && birlik==onlik){
//       bool check = true; cout << boolalpha <<check;  // 1111=>palindrom
//   }
//   else{
//      bool check = false; cout << boolalpha <<check;
//   }
//}else{
//    cout << " Siz 4 xonali son kiritmadiz!";
//}
//return 0;
//}


/*
2.Ikki int qiymat berilgan. Ikki qiymat bir xil bo'lmasa, ularning yig'indisini chiqazing,
aks holatda yigindisini ikkiga kopaytirib chiqazing. */
//int main(){
//int  a, b;
//cout << " a = "; cin >> a;
//cout << " b= "; cin >> b;
//1-usul
//int check = (a!=b)? (a+b):2*(a+b);
//cout << check;
//return 0;

//2-usul
//if( a!=b){
//    cout << "result: " << a+b << endl;
//}else{
//    cout << " result: " << 2*(a+b) << endl;
//}
//return 0;
//
//}


// 3#hard_task
/*Kiritilgan belgini unli harf yoki yoqligini aniqlaydigan dastur tuzing.

agar belgi unli harf bo'lsa unli deb chop eting.
agar belgi undosh bo'lsha undosh deb chop eting.
agar belgi harf bo'lmasa none deb chop eting.
Dastur katta va kichik harflar uchun bir xilda ishlashi kerak.

Unli harflar:a, A, e, E, i, I, o, O, u, U */





//4 #hard_task
//ATM mashinasi karta kiritilganda avval parol orqali foydalanuvchini shaxsini tasdiqlaydi.
 //ATM 4 yoki 6 xonali parollarni qabul qiladi.
//Parol kiritilganda u to'g'ri yoki no'to'gri formatda ekanini aniqlaydigan dastur tuzing.
//* argumenti bitta butun musbat son parol
//* agar kiritilgan parol 4 yoki 6 xonali bo'lsa 1 ni yo'qsa 0 ni qaytaradi

//int main(){
//string password;
//cout<<" Parolni kiriting: "; cin >> password;
//
//int passwordLenght=password.length();
//
//bool check =((passwordLenght >3 && passwordLenght <= 4) || (passwordLenght >5 && passwordLenght <= 6));
//if(check){
//    cout << boolalpha << check;
//}else{ cout << boolalpha <<check;
//}
//return 0;
////}
//int main(){
//int correctAnswersCount =0;
//string username;
//int n;
//cout<<" Hurmatli " << username << " siz matematikadan nechta testga qatnashmoqchisiz: "; cin >>n;
//cout << " sizga kim deb murojaat qilaylik :"; cin >>username;
//for (int i=0 ; i < n; i++){
//    int num1=rand()%10;
//    int num2=rand()/100;
//    int correct = 0;
//    //int correct2 = num1+num2;
//    int answer;
//    //int answer2;
//    //cout<< num1 << " * " <<num2 << " = "; cin >> answer;
//    //cout << num1 << " + " << num2 << " = "; cin >>answer;
//    if(i%3==0){
//        correct=num1*num2;
//        cout<< num1 << " * " <<num2 << " = "; cin >> answer;
//    }
//    else if(i%3==1){
//        correct=num1+num2;
//        cout<< num1 << " + " <<num2 << " = "; cin >> answer;
//
//    }
//    else{
//        correct=num1- num2;
//        cout<< num1 << " - " <<num2 << " = "; cin >> answer;
//
//    }

    //for(int i=0; i<n/2; i++){
//        for(int j=0; j<1;j++){
//            int num1=rand()%10;
//            int num2=rand()%10;
//            int correct = num1*num2;
//            cout << correct;
//
//        }
//         for(int j=0; j<1;j++){
//            int num1=rand()%10;
//            int num2=rand()%10;
//            int correct2 = num1+num2;
//            cout << correct2;
//
//        }
//
//    }


//   if(answer==correct){
//      correctAnswersCount=correctAnswersCount+1;
//    }
//
//}
//cout << username<< " Siz berilgan  " <<n << " ta savoldan "<<correctAnswersCount<<" tasiga to'g'ri javob berdiz: "<<"Xato belgilangan javoblar soni " << n-correctAnswersCount<<endl;

 //if(n/2 >= correctAnswersCount ){
       // cout << "Siz imtihondan o'tdiz";  // n*100/correctAnsersCount
 //}
    //else{
     //   cout << "yaxshiroq o'qing! ";
//}
//return 0;
//}

/////////////////////////////////////

//
//int main(){
////
//
//int n;
//cout << " n sonnini kiriting : "; cin >> n;
//int i = 0;
//while (i < n) {
//
//  cout << i << "\n";
//
//  i++;
//}
//return 0;
//
//}

//int main(){
//
//    string str;
//    cout << " Matn kiriting: "; getline(cin,str);
//    int count=1;
//    char  soz ='';
////    if( str.lenght<=128){
//       for(int i=0; i<str.length(); i++){
//        if(str[i]==soz){
//            count++;
//        }
//     }
//     cout << count <<endl;
//    return 0;
//}

// = "Assalomu alaykum hammaga "


//////////////////////////////////////
//1.Berilgan tekstda cat so'zi necha marta uchrashi aniqlovchi dastur tuzing
//int main(){
//string s = "Bu bir matn.";
//size_t found = s.find("bir"); // "bir" so'zini qidirish
//if (found != string::npos) {
//  cout << "So'z topildi. Indeksi: " << found << endl;
//} else {
//  cout << "So'z topilmadi." << endl;
//}
//return 0;
//}


//int main(){
//string text;
//cout << "Matn kiriting.__ "; getline(cin,text);
//int counter =0;
//size_t found = text.find("cat");
//for(int i=0; i<text.length(); i++){
//    if( found == string::npos){
//        counter++;
//        //cout << " Cat so'zi " << found <<" marta uchragan"<<endl;
//    }else{
//       cout << " Matnda bunqa so'z yo'q " << found <<endl;
//    }
//}
// return 0;
//}

//int main(){
//string text, word="cat"; // text-matn uchun va word qidiriladigan so'z uchun;
//cout << " Matnni kiriting "; getline(cin,text);
//cout << " qidirilayotgan so'zni  kiriting "; getline(cin,word);
//
//int counter=0, headWord=0;//headWord- topilgan so'zning 1-harfini matndagi indeksi, counter-takrorlanishlar soni
//
//while(text.find(word,headWord)<text.length())
//{
//   counter = text.find(word,headWord);
//    if(text.at(headWord+word.length())==' '){ // topilgan o'xshashlik so'z ekanligini aniqlaymiz
//        counter++; // so'zlar sonini 1 taga oshiramiz
//        headWord = text.find(word,headWord)+1; // keyinggi so'zni qidirish uchun
//    }
//}
//cout << " Matnda " << word << " so'zi" <<counter<<" marta uchragan" <<endl;
//return 0;
//
//}


//2. VipBrand magazinlar tarmog'ida 100 000 sumdan ortiq haridlar uchun 11% chegirma beriladi.
// Magazindagi har bir mahsulot (tovar) bir xilda 10 000 sumdan.
//Haridor nechta mahsulot sotib olganiga qarab (chegirmadan keyingi)
//necha pul to'lanishi kerakligini hisoblaydigan dastur tuzing.

//813 => 7235700.00
//3 => 30000.00
//int main(){
//int n;
//cout << " VipBrand magazinimizdan harid qilmoqchi bo'lgan \n mahsulotlar sonini kiriting: "; cin>>n;
//if(n<0){
//    cout << " harid qilmoqchi bo'lgan mahsulot  sonini to'g'ri kiritganliginggizni  qayta tekshiring! ";
//}
//else if(n>=10){
//    cout <<"Siz " <<n <<" ta mahsulot harid qilidinggiz\n "<<"Umumiy to'lov  "<< n*10000-n*0.11*10000 << " so'm "<<endl;
//}else{
//    cout << "Siz " <<n <<" ta mahsulot harid qilidinggiz\n "<<"Umumiy to'lov  "<<10000*n <<" so'm " <<endl;
//}
//return 0;
//
//}


//3.Berilgan son necha xonali ekanini aniqlaydigan dastur tuzing.
//12345678 => 8
//int main(){
//int num;
//int count = 0;
//cout << " Ixtiyoriy son kiriting men uni sizga nechchi xonali ekanligini aniqlab beraman n= ";
//cin >> num;
//while(num != 0){
//    num=num/10;
//    count++;
//}
//cout<<"Siz kiritgan son "<<count<<" xonali son";
//return 0;
//}


//4. Perfect Son deb o'zidan bo'lak barcha bo'luvchilari yig'indisiga teng songa aytiladi.
//
//Masalan: 6 --> 1 + 2 + 3 = 6, bo'luvchilari yig'indisi songa teng. 28 --> 1 + 2 + 4 + 7 + 14 = 28
//
//Kiritilgan son perfect son bo'lsa1ni yo'qsa0ni chop eting.


//int main(){
//int num;
//int sum = 0;
//cout << " Raqam kiriting ";cin >> num;
//for(int i=1; i<num; i++){
//    if(num%i==0){
//        sum = sum +i;
//    }
//}
//if(num == sum ){
//    cout <<" 1 ";
//}
//else{
//    cout << " 0 ";
//}
//return 0;
//}

////////////////////////////////////////////////////////////////////////////////////////

// Arrays // codingJs

//int main() {
//  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//  cars[0] = "Opel";
//  cout << cars[0];
//  return 0;
//}

//codingJsdagi 1-masala;
//int main(){
//bool weekend=false;
//bool vacation =false; //tatil bayramdagi tatil
//bool check=(weekend==vacation || vacation==true);
//cout << boolalpha << check;
//return 0;
//}

//if(weekend=true || vacation=true){
//   cout <<"True";
//}
//else if(vacation=true || weekend!=true){
//    cout << " false";
//}
//
//return 0;
//}


//2-masala
//int main(){

//bool birinchimaymunkulyapdimi=false;
//bool ikkinchimaymunkulyapdimi=false;
////bool check=(birinchimaymun==true && ikkinchimaymun==true ||birinchimaymun==false && ikkinchimaymun=false );
//bool check=(birinchimaymunkulyapdimi==ikkinchimaymunkulyapdimi);
//return 0;



//
//int a,b;
//cout <<"a= "; cin>>a;
//cout <<"b= "; cin>>b;
//bool check=((a==b)? ((a+b)*2):(a+b));
//cout <<check;
//return 0;

//int n;
//cout << " n ="; cin >>n;
//if(n<21){
//    cout<<21-n;
//}
//else{
//   cout <<(n-21)*2;
//}
//bool check=((n>=21)? ((n-21)*2):21-n);
//cout << check;
//return 0;

//float n;
//cout << " n ="; cin >>n;
// float hour=6 ;
// bool talking =true;
//cout << boolalpha << ((n<7 || n>20 && talking)? true:false);

//if( talking && n<7 || n>20){
//    cout <<"True";
//}
//else{
//    cout<< "false";
//}
//return 0;
//}

//
//a=10 || b=10   || a+b=10
//int main(){
//int a,b;
//cout << " a = "; cin >>a;
//cout << " b = "; cin >>b;
//cout << boolalpha << ((a==10 || b==10 || a+b==10)? true : false);
//return 0;
//}

//Given an int n, return true if it is within 10 of 100 or 200. Note: Math.abs(num) computes the absolute value of a number.

//int main(){
//int n;
//cout << " son kiriting: ";cin >>n;
//cout << boolalpha << (abs((n-100)<=10 || abs((n-200)<=10 ))
//return 0;
//}


//int main(){
//int n;
//cout << " 1- sonni kiriting:  "; cin >>n;
//
//int sum=0;
//for(int i=0; i<n; i++){
//     cout << i+2 << "- sonni kiriting : "; cin >> n;
//    if(i==10){
////        if( i>=100 && i<=200){
////           sum=sum+i;
////        }
//
//    }
//}
//cout << sum;
//return 0;
//
//}


/*

Given 2 int values, return true if one is negative and one is positive. Except if the parameter "negative" is true, then return true only if both are negative.

Examples

posNeg(1, -1, false) → true
posNeg(-1, 1, false) → true
posNeg(-4, -5, true) → true
*/

//int main(){
//int a,b;
//cout <<" a ="; cin >> a;
//cout << " b= "; cin >>b;
//bool negative=true;
// //bool check= (( a<0 && b<0 && negative)||(a>0 && b<0 && negative==false))? true :
//
//if(a<0 && b<0 && negative){
//    cout << boolalpha<<true;
//}
//else if(a>0 && b<0 && negative==false){
//    cout << boolalpha<<true;
//}
//else{
//   cout << boolalpha<<true;
//}
//return 0;
//}

//int main(){
//string str="  salom";
//char n='n';
//char o='o';
//char t='t';
//
//for(int i=0; i<=str.length(); i++){
//    if(str[0]==n && str[1]==o && str[2]==t){
//        cout << str;
//        break;
//    }
//    else{
//       cout << ("not"+str);
//       break;
//    }
//    //cout << sum ;
//}
//return 0;
//}

//homework_7

//1.Lapindrom string deb o'rtasidan ikkiga bo'linganda ikkala tarafda ham bir xil belgilar
//bir xil martadan uchraydigan stringga aytiladi. Agar stringning belgilari soni toq bo'lsa,
 //ikkiga bo'lganda o'rtadagi belgi inobatga olinmasdan Lapindromligi tekshiriladi.

//Masalan,gaga lapindromstring. Chunki, uni o'rtasidan bo'lganda ikkala ga va ga taraflaridagi
 //harflar bir xil va har bir harfi takrorlanishi soni ham ikkala tarafda bir xil.
 //Shunga o'xshab abccab, rotor va xyzxy lapindromstringga bir nechta misollar.

//Lekin,abbaab apindromstringemas. Uning ikkala yarmida bir xil harflar mavjud,
// ammo harflar takrorlanishi soni bir xil emas.

//Berilganstringlapindrom yoki yo'qligini aniqlaydigan dastur tuzing
//
//int main(){
//
//string text;
//string str="";
//cout <<"Matnni kiriting: "; getline(cin,text);
//for(int i=0; i<text.length()/2; i++){
//    if(text[i] = text[text.length()-i -1]){
//          str= "Palindrom";
//    }
//    else{
//        str = "Palindrom emas";
//    }
//}
//cout << "berilgan text " << str;
//return 0;
//
//}


//2.Bir sutkadagi ikki vaqt ko'rsatkichlarini foydalanuvchidan o'qib, ikki vaqt ko`rsatkichlari
//oralig'ida necha sekund borligini aniqlaydigan dastur tuzing.
//
//* Ikkinchi ko'rsatilgan vaqt birinchi ko'rsatilgan vaqtdan oldin kelmaganligi aniq.

//1 14 18
//6 32 2   => 19064


//int main(){
//float hour1 ,minut1, minut2, hour2, sekund1, sekund2,oraliqSekund;
//
//cout << " 1- vaqtni soatini  kiriting _ " ;cin >>hour1;
//cout << " 1- vaqtni  minutini  kiriting _ " ;cin >>minut1;
//cout << " 1- vaqtni  daqiqasini  kiriting _ " ;cin >>sekund1;
//cout << " 2- vaqtni  soatini kiriting _" ;cin >>hour2;
//cout << " 2- vaqtni  minutini  kiriting _ " ;cin >>minut2;
//cout << " 2- vaqtni  daqiqasini  kiriting _ " ;cin >>sekund2;cout << endl;
//
//if(hour1 >hour2 ||minut1 >minut2 || sekund1>sekund2 ){
//    cout << " Iltimos biz ikki vaqt oralig'idagi sekundni hisoblashimiz uchun\n ikkinchi vaqtni birinchsidan katta qilib kiriting :) "<<endl;
//}
//else{
//    oraliqSekund= (hour2*3600+minut2*60+sekund2)-(hour1*3600+minut1*60+sekund1);
//    cout << "Ikki vaqt oralig'idagi sekund " << oraliqSekund << " ga teng" << endl;
//}
//return 0;
//}


// 6.TenX IT maktabda 3 ta xona bor. Bu maktab o'qituvchisi o'quvchilar uchun parta sotib olishni reja qildi.
//Bitta partada ko'pi bilan ikkita bola o'tira oladi. Sizga har bir xonaning o'quvchilari soni beriladi.
// Umumiy hisobda bu maktab uchun eng kamida nechta parta kerak bo'ladi.
//Hamma o'quvchilar o'z xonalarida o'tiradi.

//Input => Bir qatorda 3 ta butun son A, B, C o'quvchilar soni. (Har bir xona uchun)
//Output => Eng kamida kerak bo'ladigan partalar miqdori.
//example =>  20 22 22 Natija : 32

//int main(){
//int  A, B, C;
//cout << " 1-xonadagi bolalar sonini kiriting "; cin >>A;
//cout << " 2-xonadagi bolalar sonini kiriting "; cin >>B;
//cout << " 3-xonadagi bolalar sonini kiriting "; cin >>C;
//int yigindi = (A+B+C);
//
// if (  yigindi%2==0 && A>0 && B > 0 && C> 0){
//    cout << "TenX IT maktabga  eng kamida " << yigindi/2<< " ta parta kerak bo'ladi.";
//}
//else if( yigindi%2==1 && A>0 && B > 0 && C> 0 ){
//    cout << "TenX IT maktabga  eng kamida " << (yigindi/2)+1 << " ta parta kerak bo'ladi.";
//}
//else{
//    cout << " O'quvchilar soni manfiy bo'lmaydiku :) "<<endl;
//}
//return 0;
//}


//7.Sherbekga uyga vazifa sifatida sonlarni xuddi bank beradigan kvitansiyalardagi
//kabi so'zma-so'z chop etadigan dasturni yozib kelish berildi. U sonni o'zgaruvchiga o'qish va
//natija stringini chop etish qismlarini qilib bo'ldi, ammo sonni so'zma-so'z qilib stringga
//aylantirishda qiynaldi.
//
//123 => bir yuz yigirma uch
//1001001111 => bir milliard bir million bir ming bir yuz o'n bir

//int main(){
//int n =1;
//cout << " Son kiriting men uni sizga so'zlarda ifodalab beraman  n =  "; cin>>n;
//// bu n sonni vaqtincha o'zida saqlab turadi;  sanash => kiritilgan son nechchi xonali ekanligini sanaydi
//int vaqtinchaUzlashtir = n;
//int sanash = 0;
//while(vaqtinchaUzlashtir != 0){
//    vaqtinchaUzlashtir = vaqtinchaUzlashtir/10;
//    sanash++;
//}
//int i=1, deg=1; // deg->xonalarni 10 likda darajada yozish
//while(i<sanash){
//    deg= deg *10;
//    i++;
//}
//
//while(sanash>=1){
//       vaqtinchaUzlashtir = n/deg;
//    if( sanash%3==2 || sanash==2 ) {
//        switch(vaqtinchaUzlashtir){
//            case 1:
//                cout << " o'n"; break;
//            case 2:
//                cout << " yigirma"; break;
//            case 3:
//                cout << " o'ttiz"; break;
//            case 4:
//                cout << " qirq"; break;
//            case 5:
//                cout << " ellik "; break;
//            case 6:
//                cout << " oltmish"; break;
//            case 7:
//                cout << " yetmish"; break;
//            case 8:
//                cout << " sakson"; break;
//            case 9:
//                cout << " to'qson"; break;
//
//        }
//    }
//    else{
//        switch(vaqtinchaUzlashtir){
//            case 1:
//                cout << " bir"; break;
//            case 2:
//                cout << " ikki "; break;
//            case 3:
//                cout << " uch "; break;
//            case 4:
//                cout << " to'rt "; break;
//            case 5:
//                cout << " besh  "; break;
//            case 6:
//                cout << " olti "; break;
//            case 7:
//                cout << " yetti "; break;
//            case 8:
//                cout << " sakkiz "; break;
//            case 9:
//                cout << " to'qqiz"; break;
//        }
//    }
//    if(sanash % 3 == 0){
//        cout << " yuz";
//        switch(sanash){
//            case 4:
//               cout << " ming"; break;
//            case 7:
//               cout << " million ";break;
//            case 10:
//               cout << " milliard "; break ;
//        }
//    }
//    n = n % deg;
//    deg /= 10;
//    sanash--;
//
//}
//
//return 0;
//
//}

//5 Namunada berilgan quyonni chop eting.
//int main(){
//
//cout << "       -            - " <<endl;
//cout << "       \   ' \  / '  / "<<endl;
//cout << "        \     \/    /  " <<endl;
//cout << "        /   .   .  \  " <<endl;
//cout << "       =\     *    /= " <<endl;
//cout << "        /     ^    \  " <<endl;
//cout << "       / \\      // \ " <<endl;
//cout << "       \   "    "  /  " <<endl;
//cout << "       --          -- " <<endl;
//cout << "      (      /^\     )" <<endl;
//cout << "       -----    ----- " <<endl;
//
//}



// 4.Kiritilgan 5 ta sonni sort qilib chop etadigan dastur tuzing.
//
//int main(){
//int  a,b,c,d,f,j;
//cout << " 1- sonni kiriting "; cin>>a;
//cout << " 2- sonni kiriting "; cin>>b;
//cout << " 3- sonni kiriting "; cin>>c;
//cout << " 4- sonni kiriting "; cin>>d;
//cout << " 5- sonni kiriting "; cin>>f;
//
//int arr1[] = {a,b,c,d};
//int n = sizeof(arr1)/sizeof(arr1[0]);
//sort(arr1, arr1+n);
//cout << "\n List of Array after sorting is: ";
//for(int i = 0; i <= n; ++i){
//cout << arr1[i] << " ";
//}
//
//return 0;
//
//}

//3. Bitta butun son o'qing. 1 dan boshlab kiritilgan N butun sonigacha bo'lgan barcha sonlarga
// bo'linadigan eng kichik sonni topadigan dastur tuzing.
//5 => 60

//int main() {
//    int n;
//    cout << "Sonni kiriting = ";
//    cin >> n;
//
//    int k = n;
//    int m = 0;
//
//    while (m != k) {
//        for (int i = 1; i <= k; i++) {
//            if (n % i == 0) {
//                m += 1;
//            } else {
//                m = 0;
//            }
//        }
//        n += 1;
//    }
//
//    cout << n - 1 << endl;
//
//    return 0;
//}


//4 Kiritilgan 5 ta sonni sort qilib chop etadigan dastur tuzing.

//#include <algorithm> // qo'shimcha kutubxona sort() funksiyasi uchun
//int main() {
//    int sonlar[5];
//
//    for(int i = 0; i < 5; i++) {
//        cout << i+1 << "-sonni kiriting: ";
//        cin >> sonlar[i];
//    }
//
//    sort(sonlar, sonlar+5);
//
//    cout << "Tartiblangan sonlar: ";
//    for(int i = 0; i < 5; i++) {
//        cout << sonlar[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


//int main(){
//int parol,  checkparol= 5555, tanlov, telnomer, balans=50000, pul;
//cout << " Parolni kiriting_ "; cin >> parol;
//if(parol == checkparol){
//    cout << " Menu\n";
//    cout << " 1. Karta Ma'lumoti\n";
//    cout << " 2.Sms xabarnoma\n";
//    cout << " 3.Balans\n";//
//    cout << " 4. Naqd pul yeshish\n";
//    cout << " 5.Parolni o'zgartirish \n";
//    cout << " Yuqoridagi menulardan birini tanlang_ \n";cin >> tanlov;
//    switch(tanlov){
//        case 1:
//            cout << " 86004857398782374 \n";
//            cout << " Abdilamiyeva Noila \n";
//            cout << " Muddati 03/27 \n";
//            break;
//        case 2:
//            cout <<"Telefon raqaminggizni kiriting: +998 ";cin>>telnomer;
//        case 3:
//            cout << " sizning kartadagi pulinggiz \n"<<balans;
//            //wcout << " qancha pul yechasiz ? ";
//            break;
//        case 4:
//            cout << " naqd pul yechish \n";
//            cout << " qancha so'm yechasiz  "; cin >>pul;
//            if(balans<(balans-pul*1.01))
//            break;
//        case 5:
//            cout << " Yangi kiritmoqchi bolgan parolni kirting \n";cin >>checkparol;
//            break;
//        default:
//            cout <<" Iltimos menudagilardan birini tanlang ";
//            break;
//    }
//    if(tanlov==4){
//        int  x=balans-pul*1.01;
//        cout << "Siz hisobizdan " << balans-x << "so'm yechdiz " <<endl;
//        cout << "Sizning balansinggizda " << x << "so'm qoldi";
//    }
//    else{
//        cout << "Mablag' yetarli emas !";
//    }
//}
//return 0;
//}

//int main(){
//int a; cin >>a;
//int yuzlik= a/100;// a+b+c - katta -kichik
//int onlik = a%100/10;
//int birlik = a%100%10;
// if(yuzlik > onlik && yuzlik>birlik ){
//    cout << yuzlik;
// }
// else if(yuzlik < onlik && yuzlik>birlik ){
//    cout <<onlik *100 + birlik*10 +birlik;
// }
// else if(yuzlik < birlik &&  yuzlik >onlik ){
//    cout <<birlik *100 + yuzlik*10 +onlik;
// }
//}
//
//int  main(){
//    int n;
//    cout <<"1- sonni kiriting: ";
//    cin>>n;
//    int i=1;
//    int k=1;
//
// while(n!=0){
//    cout << i+1 << "-sonni kiriting: "; cin >>n;
//    i++;
////    k=k*(n-1);
//    if(n!=0){
//      k=k*n;
//    }
// }
// cout <<k;
// return 0;
//}

//Switch case uchun masalalar
//1. Char tipida bitta amal tanlaymiz bu amallar( /,*,+,-,%) va float tipida ikkita
//variable qabul qilinadi foydalanuvchi tomonidan  va biz char tipidagi amallardan birini tanlasak
// shu ikkita float tipidagi sonlar yordamida shu amallar bajarilsin!

//int main(){
//    char operators;
//    float son1, son2;
//    cout << "Operatorni kiriting (+, -, *, /): ";
//    cin >> operators;
//    cout << "Ikkita son kiriting : " << endl;
//    cin >> son1 >> son2;
//
//    switch (operators) {
//        case '+':
//            cout  << son1+son2;
//            break;
//        case '-':
//            cout  <<son1-son2;
//            break;
//
//        case '/':
//            cout  << son1/son2;
//            break;
//        case '*':
//            cout  << son1*son2;
//            break;
//        default:
//            cout  << " bunaqa amalni bilmayman ";
//            break;
//    }
//    return 0;
//}


//2. Sonni  juft yoki toq son ekanligini aniqlash
//int main(){
//int a;
//cout << "a = ";
//cin >>a;
//cout <<((a%2==0)? " juft": "Toq");
//return 0;
//}


//If statement uchun masalalar
//1. Keyboarddagi xohlagan tugma bosilsa u tugma nima ekanligini
//aniqlovchi dastur tuzing bunda harf va sondan boshqasini harf va son emas desa boʻladi.
//Example : t =>" harf", 4 => " son" , # => " harf va son emas".
//int main(){
//char a;
//cout << "Keyboarddagi xohlagan tugma bosing  ";  cin >> a;
//if((a<=122 && a>=97 ) || (a>=65 && a<=90)){
//    cout << " harf";
//}
//else if(a>=48 && a<=57){
//    cout << " son";
//}
//else{
//    cout << "Son ham emas harf ham emas ";
//
//}
//return 0;
//}

//2. Tipni topish masalasi ya'ni choychaqa agar hisob 300 mingdan kichik boʻlsa 12 % 300 ming
// va 500 ming oraligʻida boʻlsa 15%  agar 500 mingdan yuqori boʻlsa 20% boʻladi sizning
//vazifangiz
//mijoz qancha summa toʻlashi kerakligini topish.

//int main(){
//int sum; cin >>sum;
//if( sum<300000){
//    cout << sum*1.12;
//}
//else if(sum >300000 && sum < 500000){
//    cout << sum*1.15;
//}
//else if( sum >500000){
//    cout << sum*1.2;
//}
//return 0;
//}


//Loop uchun masalalar
//1. Foydalanuvchi tomonidan sonlar kiritiladi qachonki
// 0 kiritilgunga qadar va shu 0 kiritilgungacha boʻlgan sonlarni koʻpaytmasini hisoblang.
//Example: 1 2  4  7  0  => 56
//int main(){
//int num;
//cout <<" 1-sonni kiriting "; cin >> num;
//int i=1;
//int k=1;// yig'indi
//while(num != 0){
//    cout <<i+1<< " -sonni kiriting "; cin >>num;
//    i++;
//    if(num!=0){
//       k=k*num;
//    }
//}
//cout <<" yig'indisi : " << k;
//}

//2. Sonning faktorialini toping.

//int main(){
//int n , sum =1;
//cout <<" n sonini kiriting : "; cin >> n;
//for(int i=1; i<= n; i++){
//    sum=sum*i;
//}
//cout << sum;
//return 0;
//}



//3.Bizga ikkita son berilgan va shu sonlarni eng katta umumiy boʻlinuvchisi
//topishimiz kerak.

//Example: 40 8 => 8

int main(){
 int a,b , Ekub=a;
 cout << " 1-son: a = "; cin >> a;
 cout << "2-son:  b = "; cin >> b;
while( a%Ekub !=0 || b%Ekub != 0 ){
     Ekub--;
}

cout << "Ekub(a;b) = " << Ekub <<endl;
 return 0;
}

//4.Biz inputdan son qabul qilamiz va biz shu sonlarni birlik xonasidagi yigʻindisini topishimiz kerak.
//Example: 12345 => 15

//int main(){
// int n, yigindi=0 , raqam;
// cout << "n = "; cin >> n;
// int uzlashtir=n;
// int i=0;
// while(i<=uzlashtir){
//      raqam= n%10;
//      yigindi = yigindi + raqam;
//      n = n/10;
//      i++;
// }
// cout <<yigindi;
// return 0;
//}


//5.Inputdan qiymat kiritilganda shu qiymatga qadar boʻlgan barcha sonlarning kvadratini umumiy yigʻindisi toping.
//Example: 6 => 91 bunda 1=1 , 2= 4, 3=9,4=16,5= 25, 6= 36 va ularning yigʻindisi 91ga teng .

//int main(){
//int a, yigindi=0;
//cout << " a = "; cin >>a;
//for (int i=1; a>=i; i++){
//    yigindi = yigindi + pow(i,2);
//}
//cout << yigindi;
//return 0;
//}


//6.Sonning kubini topish math kutubxonasiz.
//Example: 4 => 64

//int main(){
//int a,pow=1,b;
//cout <<" darajasini hisoblamoqchi bolgan sonni kiriting: "; cin >> a;
//cout<< " nechinchi darajaga ko'tarmoqchisiz ? " ; cin >>b;
//for( int i=0; i<b; i++){
//    pow = pow*a;
//}
//cout << pow;
//}





//int main(){
//int n , sum =0;
//cout << " n soni kiriting : "; cin >>n;
//if(n>0){
//for(int i=0; i<=n; i++){
//    sum=sum+ pow((n+i),2);
//}
//cout << "yig'indisi: " << sum ;
//
//}
//else{
//    cout <<" Siz musbat son kiritmadinggiz: ";
//}
//return 0;
//}


//int n,a,b,c;
//    cout<<"a=";cin>>n;
//    if(99<n<=999){
//    a=n/100;
//    b=(n/10)%10;
//    c=n%10;
//    if(a>b&&b>c){
//        cout<<a<<b<<c;
//    }else if(a>c&&c>b){
//        cout<<a<<c<<b;
//    }else if(b>a&&a>c){
//        cout<<b<<a<<c;
//    }else if(b>c&&c>a){
//        cout<<b<<c<<a;
//    }else if(c>b&&b>a){
//        cout<<c<<b<<a;
//    }else if(c>a&&a>b){
//        cout<<c<<a<<b;
//    }
//
//    }




//cout << " summani kiriting "; cin >>sum;
//if( sum >=1500000){
//   maosh = 1500000+ 1500000*0.11;
//   cout << maosh;
//}
//else{
//    maosh = 1500000 + 1500000*0.09;
//    cout << maosh;
//
//}
//
//if(sum<=300000){
//    cout << 1.15*sum;
//}
//else if( sum >= 300000 && sum <500000){
//    cout << sum*1.20;
//}
//else {
//    cout << sum *1.25;
//}
//return 0;
//
//}



//////////////////// for operatori

//int main()
//{
//    int a, b , count = 0;
//
//    cout << " a = ";  cin >>a;
//    cout << " b= ";  cin >>b;
//    if(b>a){
//       for ( int i = b-1; i>a; i --  ){
//         cout <<i<< endl;
//         count++;
//
//    }
//    }else{
//        cout << " siz b sonini qiymatini  a sonini qiymatidan  katta qilib kiritmadinggiz ";
//    }
//    cout << " a dan b gacha bo'lgan sonlar soni:" << count;
//    return 0;
//}


//int main()
//{
//    int a;//1000  a
//
//    cout << " ** Konfetning narxini kiriting --> ";   cin >> a;
//
//    for (int i=1; i<=10; i++){
//            int sum ;
//            sum = a * i;
//        cout << i  << " kg  konfetning narxi : "  << sum <<" so'm ."<< endl;
//    }
//    return 0;
//}


//int main()
//{
//     int   a;
//
//    cout << " ** Konfetning narxini kiriting --> ";   cin >>a;
//
//    for (float  i = 0.1; i < 1.1;  i+=0.1){
//            float sum ;
//            sum = a * i;
//        cout <<  i << " kg  konfetning narxi : "  << sum <<" so'm."<< endl;
//    }
//    return 0;
//}


//int main()
//{
//     int   a;
//
//    cout << " ** Konfetning narxini kiriting --> ";   cin >>a;
//
//    for (float  i = 1.2; i < 2.1;  i+=0.2){
//
//           float sum ;
//            sum = a * i;
//        cout <<  i << " kg  konfetning narxi : "  << sum <<" so'm."<< endl;
//
//    }
//    return 0;
//}

//int main()
//{
//     int a, b, sum;
//     cout << "a = ";   cin >>a;
//     cout << "b = ";   cin >>b;
//
//     for (int i = a; i<=b; i ++){
//           sum += i;
//     }
//     cout  << sum << endl;
//     return 0;
//}

//
//int main()
//{
//     int a, b, sum;
//     cout << "a = ";   cin >>a;
//     cout << "b = ";   cin >>b;
//        sum=1;
//     for (int i = a; i<=b; i ++ ){
//             sum *= i;
//     }
//     cout  << sum << endl;
//     return 0;
//}

//
//int main()
//{
//     int a, b, sum;
//     cout << "a = ";   cin >>a;
//     cout << "b = ";   cin >>b;
//        sum=0;
//     for (int i = a; i<=b; i ++ ){
//             sum += pow (i,2);
//     }
//     cout  << "Kvadratlarining yiginedisi --> " <<  sum << endl;
//     return 0;
//}

// 10
//int main(){
//float n;
//float yigindi = 0;
//
//cout << " N sonini kiriting :"; cin >> n;
//
//if(n>0){
//    for( int  i=1; i <= n; i++ ){
//     yigindi = yigindi + 1.0/i;
//   }
//   cout << yigindi;
// }
//return 0;
//}





#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Oyunumuz baþlýyorrr.."<<endl;
	cout<<"Küçük harf kullanalým!!"<<endl;
	cout<<"Ýngilizce karakter kullanalým!!"<<endl;
	string b[40]={"ankara","moskova","kabil","tiran","buenos aires","erivan","canberra","viyana","baku","manama","dakka","minsk","bruksel","la paz","sofya","ottawa","santiago","pekin","bogota","zagreb","havana","lefkosa","prag","kopenhag","kahire","paris","helsinki","tiflis","berlin","atina","budapeste","delhi","cakarta","tahran","bagdat","dublin","tel aviv","roma","kingston","tokyo"};
	string c[40]={"türkiye","rusya","afganistan","arnavutluk","arjantin","ermenistan","avustralya","avusturya","azerbaycan","bahreyn","bangladeþ","belarus","belçika","bolivya","bulgaristan","kanada","þili","çin","kolombiya","hýrvatistan","kuba","kýbrýs","çek cumhuriyeti","danimarka","mýsýr","fransa","finlandiya","gürcistan","almanya","yunanistan","macaristan","hindistan","endonezya","iran","irak","irlanda","israil","italya","jamaika","japonya"};
	int sayi;
	string baskent;
	
	for(int i=0;i<39;i++){
		srand(time(0));
		sayi=rand()%40;
		cout<<"Ülkeniz: "<<c[sayi]<<endl;
	    cout<<"Ülkenin baþkentini giriniz:";
	    cin>>baskent;
	    if(baskent==b[sayi]){
		cout<<"Doðru bildiniz.."<<endl;
		cout<<"Score: "<<i+1<<endl;
	}
	    else{
		cout<<"Yanlýþþ!!!!!"<<endl;
		cout<<"Doðrusu:"<<b[sayi]<<" olucaktý."<<endl;
		cout<<"Score: "<<i<<endl;
		break;
	}}
	
	return 0;
}

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	cout<<"Oyunumuz ba�l�yorrr.."<<endl;
	cout<<"K���k harf kullanal�m!!"<<endl;
	cout<<"�ngilizce karakter kullanal�m!!"<<endl;
	string b[40]={"ankara","moskova","kabil","tiran","buenos aires","erivan","canberra","viyana","baku","manama","dakka","minsk","bruksel","la paz","sofya","ottawa","santiago","pekin","bogota","zagreb","havana","lefkosa","prag","kopenhag","kahire","paris","helsinki","tiflis","berlin","atina","budapeste","delhi","cakarta","tahran","bagdat","dublin","tel aviv","roma","kingston","tokyo"};
	string c[40]={"t�rkiye","rusya","afganistan","arnavutluk","arjantin","ermenistan","avustralya","avusturya","azerbaycan","bahreyn","banglade�","belarus","bel�ika","bolivya","bulgaristan","kanada","�ili","�in","kolombiya","h�rvatistan","kuba","k�br�s","�ek cumhuriyeti","danimarka","m�s�r","fransa","finlandiya","g�rcistan","almanya","yunanistan","macaristan","hindistan","endonezya","iran","irak","irlanda","israil","italya","jamaika","japonya"};
	int sayi;
	string baskent;
	
	for(int i=0;i<39;i++){
		srand(time(0));
		sayi=rand()%40;
		cout<<"�lkeniz: "<<c[sayi]<<endl;
	    cout<<"�lkenin ba�kentini giriniz:";
	    cin>>baskent;
	    if(baskent==b[sayi]){
		cout<<"Do�ru bildiniz.."<<endl;
		cout<<"Score: "<<i+1<<endl;
	}
	    else{
		cout<<"Yanl���!!!!!"<<endl;
		cout<<"Do�rusu:"<<b[sayi]<<" olucakt�."<<endl;
		cout<<"Score: "<<i<<endl;
		break;
	}}
	
	return 0;
}

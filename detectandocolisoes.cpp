#include <iostream>
using namespace std;
int main()
{
	
    int ainferioreX, ainferioreY, asuperiordX, asuperiordY; 
	/* ainferioreX: ponto A inferior esquerdo de X,
	ainferioreY: ponto A inferior esquerdo de Y, 
	asuperiordX: ponto A superior direito de X,
	asuperiordirY: ponto A superior direito de Y; */
	
    int binferioreX, binferioreY, bsuperiordX, bsuperiordY;
    /*binferioreX: ponto B inferior esquerdo X,
	binferioreY: ponto B inferior de Y,
	bsuperiordX: ponto B superior direito de X,
	bsuperiordY: ponto B superior direito de Y;*/

    	cin>> ainferioreX >> ainferioreY >> asuperiordX >> asuperiordY;
    	cin>> binferioreX >> binferioreY >> bsuperiordX >> bsuperiordY;

    if (asuperiordX < binferioreX || asuperiordY < binferioreY ||
        bsuperiordX < ainferioreX || bsuperiordY < ainferioreY )
        cout << "0" <<endl;
    else 
    		cout << "1"<<endl;

    return 0;
}




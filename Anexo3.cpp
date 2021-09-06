/**
 * «Copyright 2021 Roberto Reinosa»
 * 
 * This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * */

#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream archivo_guardado;
	
	archivo_guardado.open("1.dat", ios::out);

	double x1 = 0.8;
	double x2 = 0.2;
		
	double r = 1.5;
		
	archivo_guardado << 0 << " " << x1-x2 << endl;
		
	for(int i = 1; i < 100; i++){
		
		x1 = (r * x1 *(1.0 -x1));
			
		x2 = (r * x2 *(1.0 -x2));
						
		archivo_guardado << i << " " << x1-x2 << endl;
				
	}
			
	archivo_guardado.close();
	
	return 0;
	
}

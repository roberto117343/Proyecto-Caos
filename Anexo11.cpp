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
#include <cmath>

using namespace std;

int main(){

	ofstream archivo_guardado;
	
	archivo_guardado.open("1.dat", ios::out);

	double x = 0.6;
	
	for(double r = -2.0; r < 2.0; r += 0.001){
		
		for(int i = 0; i < 1500; i++){
		
			x = pow(x, 2.0) + r;
		
			if(i > 1350){
			
				archivo_guardado << r << " " << x << endl;
			
			}
		}
		
		x = 0.6;
		
	}
	
	archivo_guardado.close();
	
	return 0;
	
}

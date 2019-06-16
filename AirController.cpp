/*
 * AirController.cpp
 *
 *  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{
AirController::AirController() {
	// TODO Auto-generated constructor stub

}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
			std::list<Flight*> flights = Airport::getInstance()->getFlights();
			std::list<Flight*>::iterator it;

			//APROXIMAXION FINAL A PISTA
			Position pos0(4000.0, 20.0, 200.0);
			Position pos1(3500.0, 40.0, 100.0);
			Position pos2(1500.0, 80.0, 50.0);
			Position pos3(200.0, 30.0, 30.0);
			Position pos4(-750.0, 0.0, 25.0);

			Route r0, r1, r2, r3, r4;
				r0.pos = pos0;
				r0.speed = 230.0;
				r1.pos = pos1;
				r1.speed = 200.0;
				r2.pos = pos2;
				r2.speed = 150.0;
				r3.pos = pos3;
				r3.speed = 80.0;
				r4.pos= pos4;
				r4.speed= 15.0;

				//RUTA APROXIMACION Alpha
				Position pos_alpha_1(5200.0, -700.0, 200.0);
				Position pos_alpha_2(6000.0, -2500.0, 400.0);

				Route 	aprox_alpha_1, aprox_alpha_2;
					aprox_alpha_1.pos= pos_alpha_1;
					aprox_alpha_1.speed=280.0;
					aprox_alpha_2.pos=pos_alpha_2;
					aprox_alpha_2.speed=380.0;

				//RUTA APROXIMACION Beta
				Position pos_beta_1(5200.0, 700.0, 200.0);
				Position pos_beta_2(6000.0, 2500.0, 400.0);

				Route 	aprox_beta_1, aprox_beta_2;
					aprox_beta_1.pos= pos_beta_1;
					aprox_beta_1.speed=280.0;
					aprox_beta_2.pos=pos_beta_2;
					aprox_beta_2.speed=380.0;

				//RUTA APROXIMACION Charlie
				Position pos_charlie_1(6000.0, 200.0, 200.0);
				Position pos_charlie_2(11000.0, -2500.0, 800.0);

				Route 	aprox_charlie_1, aprox_charlie_2;
					aprox_charlie_1.pos= pos_charlie_1;
					aprox_charlie_1.speed=400.0;
					aprox_charlie_2.pos=pos_charlie_2;
					aprox_charlie_2.speed=400.0;

				//RUTA APROXIMACION Delta
				Position pos_delta_1(6000.0, 20.0, 200.0);
				Position pos_delta_2(11000.0, 2500.0, 800.0);

				Route 	aprox_delta_1, aprox_delta_2;
					aprox_delta_1.pos= pos_delta_1;
					aprox_delta_1.speed=400.0;
					aprox_delta_2.pos=pos_delta_2;
					aprox_delta_2.speed=400.0;

				//HIPODROMO DE ESPERA Alpha
				Position pos_hipoalpha_1(4000.0,-13500.0,2000.0);	Position pos_hipoalpha_2(3000.0,-12000.0,2000.0);
				Position pos_hipoalpha_3(2000.0,-10500.0,2000.0);	Position pos_hipoalpha_4(2000.0,-9000.0,2000.0);
				Position pos_hipoalpha_5(3000.0,-7500.0,2000.0);	Position pos_hipoalpha_6(4000.0,-6000.0,2000.0);
				Position pos_hipoalpha_7(5000.0,-4500.0,2000.0);	Position pos_hipoalpha_8(6000.0,-4200.0,2000.0);
				Position pos_hipoalpha_9(7000.0,-4500.0,2000.0);	Position pos_hipoalpha_10(8000.0,-6000.0,2000.0);
				Position pos_hipoalpha_11(9000.0,-7500.0,2000.0);	Position pos_hipoalpha_12(9900.0,-9000.0,2000.0);
				Position pos_hipoalpha_13(9900.0,-10500.0,2000.0);Position pos_hipoalpha_14(9000.0,-12000.0,2000.0);
				Position pos_hipoalpha_15(8000.0,-13500.0,2000.0);Position pos_hipoalpha_16(7000.0,-15000.0,2000.0);
				Position pos_hipoalpha_17(6000.0,-15300.0,2000.0);Position pos_hipoalpha_18(5000.0,-15000.0,2000.0);

				Route hipodromo_alpha_1, hipodromo_alpha_2, hipodromo_alpha_3, hipodromo_alpha_4, hipodromo_alpha_5, hipodromo_alpha_6,
			 				hipodromo_alpha_7, hipodromo_alpha_8,	hipodromo_alpha_9, hipodromo_alpha_10, hipodromo_alpha_11, hipodromo_alpha_12,
							hipodromo_alpha_13, hipodromo_alpha_14, hipodromo_alpha_15, hipodromo_alpha_16,	hipodromo_alpha_17, hipodromo_alpha_18;

						hipodromo_alpha_1.pos=pos_hipoalpha_1;		hipodromo_alpha_1.speed=200.0;
						hipodromo_alpha_2.pos=pos_hipoalpha_2; 		hipodromo_alpha_2.speed=200.0;
						hipodromo_alpha_3.pos=pos_hipoalpha_3;		hipodromo_alpha_3.speed=200.0;
						hipodromo_alpha_4.pos=pos_hipoalpha_4;		hipodromo_alpha_4.speed=200.0;
						hipodromo_alpha_5.pos=pos_hipoalpha_5;		hipodromo_alpha_5.speed=200.0;
						hipodromo_alpha_6.pos=pos_hipoalpha_6;		hipodromo_alpha_6.speed=200.0;
						hipodromo_alpha_7.pos=pos_hipoalpha_7;		hipodromo_alpha_7.speed=200.0;
						hipodromo_alpha_8.pos=pos_hipoalpha_8;		hipodromo_alpha_8.speed=200.0;
						hipodromo_alpha_9.pos=pos_hipoalpha_9;		hipodromo_alpha_9.speed=200.0;
						hipodromo_alpha_10.pos=pos_hipoalpha_10;	hipodromo_alpha_10.speed=200.0;
						hipodromo_alpha_11.pos=pos_hipoalpha_11;	hipodromo_alpha_11.speed=200.0;
						hipodromo_alpha_12.pos=pos_hipoalpha_12;	hipodromo_alpha_12.speed=200.0;
						hipodromo_alpha_13.pos=pos_hipoalpha_13;	hipodromo_alpha_13.speed=200.0;
						hipodromo_alpha_14.pos=pos_hipoalpha_14;	hipodromo_alpha_14.speed=200.0;
						hipodromo_alpha_15.pos=pos_hipoalpha_15;	hipodromo_alpha_15.speed=200.0;
						hipodromo_alpha_16.pos=pos_hipoalpha_16;	hipodromo_alpha_16.speed=200.0;
						hipodromo_alpha_17.pos=pos_hipoalpha_17;	hipodromo_alpha_17.speed=200.0;
						hipodromo_alpha_18.pos=pos_hipoalpha_18;	hipodromo_alpha_18.speed=200.0;


				//HIPODROMO DE ESPERA Beta
				Position pos_hipobeta_1(4000.0,13500.0,1200.0); Position pos_hipobeta_2(3000.0,12000.0,2000.0);
				Position pos_hipobeta_3(2000.0,10500.0,1200.0);	Position pos_hipobeta_4(2000.0,9000.0,2000.0);
				Position pos_hipobeta_5(3000.0,7500.0,1200.0);		Position pos_hipobeta_6(4000.0,6000.0,1200.0);
				Position pos_hipobeta_7(5000.0,4500.0,1200.0);		Position pos_hipobeta_8(6000.0,4200.0,1200.0);
				Position pos_hipobeta_9(7000.0,4500.0,1200.0);		Position pos_hipobeta_10(8000.0,6000.0,1200.0);
				Position pos_hipobeta_11(9000.0,7500.0,1200.0);		Position pos_hipobeta_12(9900.0,9000.0,1200.0);
				Position pos_hipobeta_13(9900.0,10500.0,1200.0);	Position pos_hipobeta_14(9000.0,12000.0,2000.0);
				Position pos_hipobeta_15(8000.0,13500.0,1200.0);	Position pos_hipobeta_16(7000.0,15000.0,1200.0);
				Position pos_hipobeta_17(6000.0,15300.0,1200.0);	Position pos_hipobeta_18(5000.0,15000.0,1200.0);

				Route hipodromo_beta_1, hipodromo_beta_2, hipodromo_beta_3, hipodromo_beta_4,	hipodromo_beta_5, hipodromo_beta_6,
							hipodromo_beta_7, hipodromo_beta_8,	hipodromo_beta_9, hipodromo_beta_10, hipodromo_beta_11, hipodromo_beta_12,
							hipodromo_beta_13, hipodromo_beta_14, hipodromo_beta_15, hipodromo_beta_16,hipodromo_beta_17, hipodromo_beta_18;

						hipodromo_beta_1.pos=pos_hipobeta_1;		hipodromo_beta_1.speed=200.0;
						hipodromo_beta_2.pos=pos_hipobeta_2;		hipodromo_beta_2.speed=200.0;
						hipodromo_beta_3.pos=pos_hipobeta_3;		hipodromo_beta_3.speed=200.0;
						hipodromo_beta_4.pos=pos_hipobeta_4;		hipodromo_beta_4.speed=200.0;
						hipodromo_beta_5.pos=pos_hipobeta_5;		hipodromo_beta_5.speed=200.0;
						hipodromo_beta_6.pos=pos_hipobeta_6;		hipodromo_beta_6.speed=200.0;
						hipodromo_beta_7.pos=pos_hipobeta_7;		hipodromo_beta_7.speed=200.0;
						hipodromo_beta_8.pos=pos_hipobeta_8;		hipodromo_beta_8.speed=200.0;
						hipodromo_beta_9.pos=pos_hipobeta_9;		hipodromo_beta_9.speed=200.0;
						hipodromo_beta_10.pos=pos_hipobeta_10;	hipodromo_beta_10.speed=200.0;
						hipodromo_beta_11.pos=pos_hipobeta_11;	hipodromo_beta_11.speed=200.0;
						hipodromo_beta_12.pos=pos_hipobeta_12;	hipodromo_beta_12.speed=200.0;
						hipodromo_beta_13.pos=pos_hipobeta_13;	hipodromo_beta_13.speed=200.0;
						hipodromo_beta_14.pos=pos_hipobeta_14;	hipodromo_beta_14.speed=200.0;
						hipodromo_beta_15.pos=pos_hipobeta_15;	hipodromo_beta_15.speed=200.0;
						hipodromo_beta_16.pos=pos_hipobeta_16;	hipodromo_beta_16.speed=200.0;
						hipodromo_beta_17.pos=pos_hipobeta_17;	hipodromo_beta_17.speed=200.0;
						hipodromo_beta_18.pos=pos_hipobeta_18;		hipodromo_beta_18.speed=200.0;

				//HIPODROMO DE ESPERA Charlie
				Position pos_hipocharlie_1(12000.0,-13500.0,3000.0);	Position pos_hipocharlie_2(11000.0,-12000.0,3000.0);
				Position pos_hipocharlie_3(10000.0,-10500.0,3000.0);	Position pos_hipocharlie_4(10000.0,-9000.0,3000.0);
				Position pos_hipocharlie_5(11000.0,-7500.0,3000.0);		Position pos_hipocharlie_6(12000.0,-6000.0,3000.0);
				Position pos_hipocharlie_7(13000.0,-4500.0,3000.0);		Position pos_hipocharlie_8(14000.0,-4200.0,3000.0);
				Position pos_hipocharlie_9(15000.0,-4500.0,3000.0);		Position pos_hipocharlie_10(16000.0,-6000.0,3000.0);
				Position pos_hipocharlie_11(17000.0,-7500.0,3000.0);	Position pos_hipocharlie_12(17900.0,-9000.0,3000.0);
				Position pos_hipocharlie_13(17900.0,-10500.0,3000.0);	Position pos_hipocharlie_14(17000.0,-12000.0,3000.0);
				Position pos_hipocharlie_15(16000.0,-13500.0,3000.0);	Position pos_hipocharlie_16(15000.0,-15000.0,3000.0);
				Position pos_hipocharlie_17(14000.0,-15300.0,3000.0);	Position pos_hipocharlie_18(13000.0,-15000.0,3000.0);

				Route hipodromo_charlie_1, hipodromo_charlie_2, hipodromo_charlie_3, hipodromo_charlie_4, hipodromo_charlie_5, hipodromo_charlie_6,
						 	hipodromo_charlie_7, hipodromo_charlie_8, hipodromo_charlie_9, hipodromo_charlie_10, hipodromo_charlie_11, hipodromo_charlie_12,
							hipodromo_charlie_13, hipodromo_charlie_14, hipodromo_charlie_15, hipodromo_charlie_16,hipodromo_charlie_17, hipodromo_charlie_18;

						hipodromo_charlie_1.pos=pos_hipocharlie_1;		hipodromo_charlie_1.speed=200.0;
						hipodromo_charlie_2.pos=pos_hipocharlie_2;		hipodromo_charlie_2.speed=200.0;
						hipodromo_charlie_3.pos=pos_hipocharlie_3;		hipodromo_charlie_3.speed=200.0;
						hipodromo_charlie_4.pos=pos_hipocharlie_4;		hipodromo_charlie_4.speed=200.0;
						hipodromo_charlie_5.pos=pos_hipocharlie_5;		hipodromo_charlie_5.speed=200.0;
						hipodromo_charlie_6.pos=pos_hipocharlie_6;		hipodromo_charlie_6.speed=200.0;
						hipodromo_charlie_7.pos=pos_hipocharlie_7;		hipodromo_charlie_7.speed=200.0;
						hipodromo_charlie_8.pos=pos_hipocharlie_8;		hipodromo_charlie_8.speed=200.0;
						hipodromo_charlie_9.pos=pos_hipocharlie_9;		hipodromo_charlie_9.speed=200.0;
						hipodromo_charlie_10.pos=pos_hipocharlie_10;	hipodromo_charlie_10.speed=200.0;
						hipodromo_charlie_11.pos=pos_hipocharlie_11;	hipodromo_charlie_11.speed=200.0;
						hipodromo_charlie_12.pos=pos_hipocharlie_12;	hipodromo_charlie_12.speed=200.0;
						hipodromo_charlie_13.pos=pos_hipocharlie_13;	hipodromo_charlie_13.speed=200.0;
						hipodromo_charlie_14.pos=pos_hipocharlie_14;	hipodromo_charlie_14.speed=200.0;
						hipodromo_charlie_15.pos=pos_hipocharlie_15;	hipodromo_charlie_15.speed=200.0;
						hipodromo_charlie_16.pos=pos_hipocharlie_16;	hipodromo_charlie_16.speed=200.0;
						hipodromo_charlie_17.pos=pos_hipocharlie_17;	hipodromo_charlie_17.speed=200.0;
						hipodromo_charlie_18.pos=pos_hipocharlie_18;	hipodromo_charlie_18.speed=200.0;


				//HIPODROMO DE ESPERA DELTA
				Position pos_hipodelta_1(12000.0,13500.0,4000.0);		Position pos_hipodelta_2(11000.0,12000.0,4000.0);
				Position pos_hipodelta_3(10000.0,10500.0,4000.0);		Position pos_hipodelta_4(10000.0,9000.0,4000.0);
				Position pos_hipodelta_5(11000.0,7500.0,4000.0);		Position pos_hipodelta_6(12000.0,6000.0,4000.0);
				Position pos_hipodelta_7(13000.0,4500.0,4000.0);		Position pos_hipodelta_8(14000.0,4200.0,4000.0);
				Position pos_hipodelta_9(15000.0,4500.0,4000.0);		Position pos_hipodelta_10(16000.0,6000.0,4000.0);
				Position pos_hipodelta_11(17000.0,7500.0,4000.0);		Position pos_hipodelta_12(17900.0,9000.0,4000.0);
				Position pos_hipodelta_13(17900.0,10500.0,4000.0);	Position pos_hipodelta_14(17000.0,12000.0,4000.0);
				Position pos_hipodelta_15(16000.0,13500.0,4000.0);	Position pos_hipodelta_16(15000.0,15000.0,4000.0);
				Position pos_hipodelta_17(14000.0,15265.0,4000.0);	Position pos_hipodelta_18(13000.0,15000.0,4000.0);


				Route hipodromo_delta_1, hipodromo_delta_2, hipodromo_delta_3, hipodromo_delta_4, hipodromo_delta_5, hipodromo_delta_6,
 							hipodromo_delta_7, hipodromo_delta_8, hipodromo_delta_9, hipodromo_delta_10, hipodromo_delta_11, hipodromo_delta_12,
							hipodromo_delta_13, hipodromo_delta_14, hipodromo_delta_15, hipodromo_delta_16,hipodromo_delta_17, hipodromo_delta_18;

						hipodromo_delta_1.pos=pos_hipodelta_1;		hipodromo_delta_1.speed=200.0;
						hipodromo_delta_2.pos=pos_hipodelta_2;		hipodromo_delta_2.speed=200.0;
						hipodromo_delta_3.pos=pos_hipodelta_3;		hipodromo_delta_3.speed=200.0;
						hipodromo_delta_4.pos=pos_hipodelta_4;		hipodromo_delta_4.speed=200.0;
						hipodromo_delta_5.pos=pos_hipodelta_5;		hipodromo_delta_5.speed=200.0;
						hipodromo_delta_6.pos=pos_hipodelta_6;		hipodromo_delta_6.speed=200.0;
						hipodromo_delta_7.pos=pos_hipodelta_7;		hipodromo_delta_7.speed=200.0;
						hipodromo_delta_8.pos=pos_hipodelta_8;		hipodromo_delta_8.speed=200.0;
						hipodromo_delta_9.pos=pos_hipodelta_9;		hipodromo_delta_9.speed=200.0;
						hipodromo_delta_10.pos=pos_hipodelta_10;		hipodromo_delta_10.speed=200.0;
						hipodromo_delta_11.pos=pos_hipodelta_11;	hipodromo_delta_11.speed=200.0;
						hipodromo_delta_12.pos=pos_hipodelta_12;	hipodromo_delta_12.speed=200.0;
						hipodromo_delta_13.pos=pos_hipodelta_13;	hipodromo_delta_13.speed=200.0;
						hipodromo_delta_14.pos=pos_hipodelta_14;	hipodromo_delta_14.speed=200.0;
						hipodromo_delta_15.pos=pos_hipodelta_15;	hipodromo_delta_15.speed=200.0;
						hipodromo_delta_16.pos=pos_hipodelta_16;	hipodromo_delta_16.speed=200.0;
						hipodromo_delta_17.pos=pos_hipodelta_17;	hipodromo_delta_17.speed=200.0;
						hipodromo_delta_18.pos=pos_hipodelta_18;	hipodromo_delta_18.speed=200.0;




						//ASIGNACION DE TRAYECTORIAS
						for(it = flights.begin(); it!=flights.end(); ++it)
						{
							if((*it)->getRoute()->empty())
							{
								Flight* vuelo= *it;

								if(vuelo->getPosition().get_y()<=0)
								{
									if(vuelo->getPosition().get_x()<=10000)
									{
										//CUADRANTE ALPHA
										vuelo->getRoute()->push_front(hipodromo_alpha_2);
										vuelo->getRoute()->push_front(hipodromo_alpha_1);
										vuelo->getRoute()->push_front(hipodromo_alpha_18);
										vuelo->getRoute()->push_front(hipodromo_alpha_17);
										vuelo->getRoute()->push_front(hipodromo_alpha_16);
										vuelo->getRoute()->push_front(hipodromo_alpha_15);
										vuelo->getRoute()->push_front(hipodromo_alpha_14);
										vuelo->getRoute()->push_front(hipodromo_alpha_13);
										vuelo->getRoute()->push_front(hipodromo_alpha_12);
										vuelo->getRoute()->push_front(hipodromo_alpha_11);
										vuelo->getRoute()->push_front(hipodromo_alpha_10);
										vuelo->getRoute()->push_front(hipodromo_alpha_9);
										vuelo->getRoute()->push_front(hipodromo_alpha_8);
										vuelo->getRoute()->push_front(hipodromo_alpha_7);
										vuelo->getRoute()->push_front(hipodromo_alpha_6);
										vuelo->getRoute()->push_front(hipodromo_alpha_5);
										vuelo->getRoute()->push_front(hipodromo_alpha_4);
										vuelo->getRoute()->push_front(hipodromo_alpha_3);
									}

									if(vuelo->getPosition().get_x()>10000)
									{
										if(vuelo->getPosition().get_x()<=13000)
										{
											//SUBDIVISION CUADRANTE CHARLIE
											vuelo->getRoute()->push_front(hipodromo_charlie_2);
											vuelo->getRoute()->push_front(hipodromo_charlie_1);
											vuelo->getRoute()->push_front(hipodromo_charlie_18);
											vuelo->getRoute()->push_front(hipodromo_charlie_17);
											vuelo->getRoute()->push_front(hipodromo_charlie_16);
											vuelo->getRoute()->push_front(hipodromo_charlie_15);
											vuelo->getRoute()->push_front(hipodromo_charlie_14);
											vuelo->getRoute()->push_front(hipodromo_charlie_13);
											vuelo->getRoute()->push_front(hipodromo_charlie_12);
											vuelo->getRoute()->push_front(hipodromo_charlie_11);
											vuelo->getRoute()->push_front(hipodromo_charlie_10);
											vuelo->getRoute()->push_front(hipodromo_charlie_9);
											vuelo->getRoute()->push_front(hipodromo_charlie_8);
											vuelo->getRoute()->push_front(hipodromo_charlie_7);
											vuelo->getRoute()->push_front(hipodromo_charlie_6);
											vuelo->getRoute()->push_front(hipodromo_charlie_5);
											vuelo->getRoute()->push_front(hipodromo_charlie_4);
											vuelo->getRoute()->push_front(hipodromo_charlie_3);
										}
										if((vuelo->getPosition().get_x()>13000))
										{
											if(vuelo->getPosition().get_y()<-10000)
											{
												//SUBDIVISION CUADRANTE CHARLIE
												vuelo->getRoute()->push_front(hipodromo_charlie_2);
												vuelo->getRoute()->push_front(hipodromo_charlie_1);
											}
											if((vuelo->getPosition().get_y()>-14500))
											{
												vuelo->getRoute()->push_front(hipodromo_charlie_2);
												vuelo->getRoute()->push_front(hipodromo_charlie_1);
												vuelo->getRoute()->push_front(hipodromo_charlie_18);
												vuelo->getRoute()->push_front(hipodromo_charlie_17);
												vuelo->getRoute()->push_front(hipodromo_charlie_16);
												vuelo->getRoute()->push_front(hipodromo_charlie_15);
											}
										}
									}
									///////////////////////////////////SEPARACION IZDA |||| DERECHA///////////////////////////////////////////
							}else if(vuelo->getPosition().get_y()>0)
								{
									if(vuelo->getPosition().get_x()<=10000)
									{
										//CUADRANTE BETA
										vuelo->getRoute()->push_front(hipodromo_beta_2);
										vuelo->getRoute()->push_front(hipodromo_beta_1);
										vuelo->getRoute()->push_front(hipodromo_beta_18);
										vuelo->getRoute()->push_front(hipodromo_beta_17);
										vuelo->getRoute()->push_front(hipodromo_beta_16);
										vuelo->getRoute()->push_front(hipodromo_beta_15);
										vuelo->getRoute()->push_front(hipodromo_beta_14);
										vuelo->getRoute()->push_front(hipodromo_beta_13);
										vuelo->getRoute()->push_front(hipodromo_beta_12);
										vuelo->getRoute()->push_front(hipodromo_beta_11);
										vuelo->getRoute()->push_front(hipodromo_beta_10);
										vuelo->getRoute()->push_front(hipodromo_beta_9);
										vuelo->getRoute()->push_front(hipodromo_beta_8);
										vuelo->getRoute()->push_front(hipodromo_beta_7);
										vuelo->getRoute()->push_front(hipodromo_beta_6);
										vuelo->getRoute()->push_front(hipodromo_beta_5);
										vuelo->getRoute()->push_front(hipodromo_beta_4);
										vuelo->getRoute()->push_front(hipodromo_beta_3);
									}
									if(vuelo->getPosition().get_x()>10000)
									{
										if(vuelo->getPosition().get_x()<=13000)
										{
										//SUBDIVISION CUADRANTE DELTA
											vuelo->getRoute()->push_front(hipodromo_delta_2);
											vuelo->getRoute()->push_front(hipodromo_delta_1);
											vuelo->getRoute()->push_front(hipodromo_delta_18);
											vuelo->getRoute()->push_front(hipodromo_delta_17);
											vuelo->getRoute()->push_front(hipodromo_delta_16);
											vuelo->getRoute()->push_front(hipodromo_delta_15);
											vuelo->getRoute()->push_front(hipodromo_delta_14);
											vuelo->getRoute()->push_front(hipodromo_delta_13);
											vuelo->getRoute()->push_front(hipodromo_delta_12);
											vuelo->getRoute()->push_front(hipodromo_delta_11);
											vuelo->getRoute()->push_front(hipodromo_delta_10);
											vuelo->getRoute()->push_front(hipodromo_delta_9);
											vuelo->getRoute()->push_front(hipodromo_delta_8);
											vuelo->getRoute()->push_front(hipodromo_delta_7);
											vuelo->getRoute()->push_front(hipodromo_delta_6);
											vuelo->getRoute()->push_front(hipodromo_delta_5);
											vuelo->getRoute()->push_front(hipodromo_delta_4);
											vuelo->getRoute()->push_front(hipodromo_delta_3);
										}
										if((vuelo->getPosition().get_x()>13000))
											{
											if(vuelo->getPosition().get_y()<10000)
											{
												vuelo->getRoute()->push_front(hipodromo_delta_2);
												vuelo->getRoute()->push_front(hipodromo_delta_1);
												vuelo->getRoute()->push_front(hipodromo_delta_18);
												vuelo->getRoute()->push_front(hipodromo_delta_17);
												vuelo->getRoute()->push_front(hipodromo_delta_16);
												vuelo->getRoute()->push_front(hipodromo_delta_15);
											}
											if((vuelo->getPosition().get_y()>14500))
											{
											vuelo->getRoute()->push_front(hipodromo_delta_2);
											vuelo->getRoute()->push_front(hipodromo_delta_1);
											vuelo->getRoute()->push_front(hipodromo_delta_18);
											vuelo->getRoute()->push_front(hipodromo_delta_17);
											}
										}
									}
								}
							}


								//ASIGNACION DE ATERRIZAJES
								int plane_landed=0;
								Flight* vuelo= *it;

								if((*it)->getLanding())
								{
									plane_landed++;
								}

								if(plane_landed==0)
								{
									vuelo->setLanding(true);
									vuelo->getRoute()->clear();
									vuelo->getRoute()->push_back(r4);
									vuelo->getRoute()->push_front(r3);
									vuelo->getRoute()->push_front(r2);
									vuelo->getRoute()->push_front(r1);
									vuelo->getRoute()->push_front(r0);

									if(vuelo->getPosition().get_x()<=10000)
									{
										if(vuelo->getPosition().get_y()<0)
										{
											vuelo->getRoute()->push_front(aprox_alpha_1);
											vuelo->getRoute()->push_front(aprox_alpha_2);
										}
										if(vuelo->getPosition().get_y()>=0)
										{
											vuelo->getRoute()->push_front(aprox_beta_1);
											vuelo->getRoute()->push_front(aprox_beta_2);
										}
									} else{
										if(vuelo->getPosition().get_y()<0)
										{
											vuelo->getRoute()->push_front(aprox_charlie_1);
											vuelo->getRoute()->push_front(aprox_charlie_2);
										}
										if(vuelo->getPosition().get_y()>=0)
										{
											vuelo->getRoute()->push_front(aprox_delta_1);
											vuelo->getRoute()->push_front(aprox_delta_2);
										}
									}
									plane_landed++;
								}
						}
			}
}

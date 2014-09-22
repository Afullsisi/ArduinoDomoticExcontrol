/*
	Este fichero crea las definiciones del proyecto Excontrol.

*/

/*
	#Numeración de tipos de circuitos.
*/

#define Reserva       	1
#define Ado_Digital   	2
#define Ado_3Etapas   	3
#define Ado_Retroaviso 	4
#define Enchufe		8
#define EnchufeRF	9
#define	Riego		14
#define Riego_Temporizado 15
#define Valvula		16
#define ConsignaTemp	30
#define Frio		20
#define Calor		25
#define Radiante	26
#define	Persiana	35
#define Toldo		36
#define	Puerta		40
#define	Ventilador	44
#define	Piloto  	52


/*
	#Precompilador calculo posiciones memoria EEProm.
	
	
	# N_name			=> Number de objets.
	# S_name			=> Size de objets in bytes.
	# Name_OFSSET 	=> Direccion inicial bloque de memoria Eeprom
*/

/*
	NUMBER SLOTS.
*/
#define N_ESCENES 	 		10
#define N_EN_TIMETABLE	 	50	//(N_CIRCUITS, N_ESCENES, N_CONDITIONED)
#define N_CIRCUITS	 		30
#define	N_UP_TIM_SHUTTER		30
#define	N_DO_TIM_SHUTTER		30
#define N_TRIGGER			12
#define N_TIME_DAY			80	//			 daily schedule
#define N_TIME_ESPECIAL1		80
#define N_TIME_ESPECIAL2		80
#define N_DATE_ESPECIAL1		25	//month ,day			
#define N_DATE_ESPECIAL2		25
#define N_ALARMS				20	//BYTE ??
#define N_CONDITIONED		10 
#define N_SETPOINTS			10


/*
	SIZE SLOTS.
*/
#define S_ESCENES 	 		30
#define S_EN_TIMETABLE 		1	//(N_CIRCUITS, N_ESCENES, N_CONDITIONED)
#define S_CIRCUITS	 		1
#define	S_UP_TIM_SHUTTER		10
#define	S_DO_TIM_SHUTTER		10
#define S_TRIGGER			4
#define S_TIME_DAY			4
#define S_TIME_ESPECIAL1		4
#define S_TIME_ESPECIAL2		4
#define S_DATE_ESPECIAL1		2	//month ,day			
#define S_DATE_ESPECIAL2		2
#define S_ALARMS				1	//BYTE ??
#define S_CONDITIONED		1 
#define S_SETPOINTS			1





#define EM_ESCENES_OFFSET  0
#define EM_ESCENES_SIZE            (N_ESCENES  * S_ESCENES )
#define EM_EN_TIMETABLE_OFFSET    (EM_ESCENES_OFFSET + EM_ESCENES_SIZE)
#define EM_EN_TIMETABLE_SIZE      (N_EN_TIMETABLE * S_EN_TIMETABLE)
#define EM_CIRCUITS_OFFSET        (EM_EN_TIMETABLE_OFFSET + EM_EN_TIMETABLE_SIZE)
#define EM_CIRCUITS_SIZE          (N_UP_TIM_SHUTTER * S_UP_TIM_SHUTTER)
#define	EM_UP_TIM_SHUTTER_OFFSET (EM_CIRCUITS_OFFSET + EM_CIRCUITS_SIZE )
#define	EM_UP_TIM_SHUTTER_SIZE	 (N_UP_TIM_SHUTTER * S_UP_TIM_SHUTTER)
#define	EM_DO_TIM_SHUTTER_OFFSET (EM_UP_TIM_SHUTTER_OFFSET + EM_UP_TIM_SHUTTER_SIZE)
#define	EM_DO_TIM_SHUTTER_SIZE   (N_DO_TIM_SHUTTER * S_DO_TIM_SHUTTER)
#define	EM_TRIGGER_OFFSET 		 (EM_DO_TIM_SHUTTER_OFFSET + EM_DO_TIM_SHUTTER_SIZE)
#define	EM_TRIGGER_SIZE 		 (N_TRIGGER * S_TRIGGER)
#define	EM_TIME_DAY1_OFFSET		 (EM_TRIGGER_OFFSET + EM_TRIGGER_SIZE)
#define	EM_TIME_DAY1_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define	EM_TIME_DAY2_OFFSET		 (EM_TIME_DAY1_OFFSET + EM_TIME_DAY1_SIZE )
#define	EM_TIME_DAY2_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define	EM_TIME_DAY3_OFFSET		 (EM_TIME_DAY2_OFFSET + EM_TIME_DAY2_SIZE )
#define	EM_TIME_DAY3_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define	EM_TIME_DAY4_OFFSET      (EM_TIME_DAY3_OFFSET + EM_TIME_DAY3_SIZE )
#define	EM_TIME_DAY4_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define	EM_TIME_DAY5_OFFSET      (EM_TIME_DAY4_OFFSET + EM_TIME_DAY4_SIZE )
#define	EM_TIME_DAY5_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define	EM_TIME_DAY6_OFFSET      (EM_TIME_DAY5_OFFSET + EM_TIME_DAY5_SIZE )
#define	EM_TIME_DAY6_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define	EM_TIME_DAY7_OFFSET	 (EM_TIME_DAY6_OFFSET + EM_TIME_DAY6_SIZE )
#define	EM_TIME_DAY7_SIZE     	 (N_TIME_DAY * S_TIME_DAY)
#define EM_END_TIME_WEEKLY	 (EM_TIME_DAY7_OFFSET + EM_TIME_DAY7_SIZE )
#define EM_TIME_ESPECIAL1_OFSSET (EM_TIME_DAY7_OFFSET + EM_TIME_DAY7_SIZE )
#define EM_TIME_ESPECIAL1_SIZE   (N_TIME_ESPECIAL1 * S_TIME_ESPECIAL1)
#define EM_TIME_ESPECIAL2_OFSSET (EM_TIME_ESPECIAL1_OFSSET + EM_TIME_ESPECIAL1_SIZE)
#define EM_TIME_ESPECIAL2_SIZE	 (N_DATE_ESPECIAL1 * S_DATE_ESPECIAL1)
#define EM_DATE_ESPECIAL1_OFSSET (EM_TIME_ESPECIAL2_OFSSET + EM_TIME_ESPECIAL2_SIZE)
#define EM_DATE_ESPECIAL1_SIZE   (S_DATE_ESPECIAL1 * N_DATE_ESPECIAL1)
#define EM_DATE_ESPECIAL2_OFSSET (EM_DATE_ESPECIAL1_OFSSET + EM_DATE_ESPECIAL1_SIZE )
#define EM_DATE_ESPECIAL2_SIZE	 (N_DATE_ESPECIAL2 * S_DATE_ESPECIAL2)
#define EM_ALARMS_OFSSET		 (EM_DATE_ESPECIAL2_OFSSET + EM_DATE_ESPECIAL2_SIZE)
#define EM_ALARMS_SIZE			 (N_ALARMS * S_ALARMS)
#define EM_CONDITIONED_OFSSET    (EM_ALARMS_OFSSET + EM_ALARMS_SIZE)
#define EM_CONDITIONED_SIZE		 (N_CONDITIONED * S_CONDITIONED)
#define EM_SETPOINTS_OFSSET 	 (EM_CONDITIONED_OFSSET	+ EM_CONDITIONED_SIZE)
#define EM_SETPOINTS_SIZE		 (N_SETPOINTS * S_SETPOINTS)
#define EM_END  				 (EM_SETPOINTS_OFSSET + EM_SETPOINTS_SIZE)

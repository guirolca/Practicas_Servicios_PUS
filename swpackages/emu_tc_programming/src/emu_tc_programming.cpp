/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *      Author: user
 */

#include <public/emu_sc_channel_drv_slib_v1.h>

#define UNITIME_AFTER_POWER_ON 100001



// FUNCTIONAL TESTS EXECUTION CONTROL
//#define FT_SOLO_EPD_ICU_SERV_17_0010
//#define FT_SOLO_EPD_ICU_SERV_9_0020

//TODO
#define FT_SOLO_EPD_ICU_SERV_20_0030
#define FT_SOLO_EPD_ICU_SERV_3_0040
//#define FT_SOLO_EPD_ICU_SERV_3_0050
#define FT_SOLO_EPD_ICU_SERV_5_0050
//#define FT_SOLO_EPD_ICU_SERV_12_0060
//#define FT_SOLO_EPD_ICU_SERV_12_0070
//#define FT_SOLO_EPD_ICU_SERV_12_0080
//...


//Uni Time
Program9_129TC prog_tc1(0,"Set Power-On Universal Time",UNITIME_AFTER_POWER_ON);


#ifdef FT_SOLO_EPD_ICU_SERV_17_0010

Program17_1TC prog_FT_0010_step_0(UNITIME_AFTER_POWER_ON + 6,"FT_SOLO_EPD_ICU_SERV_17_0010 step 0, Connection Test");

#endif

#ifdef FT_SOLO_EPD_ICU_SERV_9_0020

#define FT_SOLO_EPD_ICU_SERV_9_0020_TIME 200001

Program9_129TC prog_FT_0020_step_0(UNITIME_AFTER_POWER_ON + 10 ,"FT_SOLO_EPD_ICU_SERV_9_0020 step 0, Update UniTime Test",FT_SOLO_EPD_ICU_SERV_9_0020_TIME);

#endif


//Primera prueba-> Habilitamos la lectura del SID 10 y su monitorización, como por defecto el RID 0x4002
//esta activado y cambiamos el parametro a 20 que supera el rango 3-10, salta este error. Luego cambiamos el valor del sid 10 a uno menor que el rango (1) y vemos si
//recibimos el otro error, 0x4001

#ifdef FT_SOLO_EPD_ICU_SERV_12_0060

Program12_5TC prog_FT_0060_step2 (UNITIME_AFTER_POWER_ON + 15 ,
		"FT_SRG_EPD_ICU_TBD_0040TBD Test, Define Param 10 Monitoring",
                10,
                10,
                0x4001,
                3,
                0x4002,
                10);

Program12_1TC prog_FT_0060_step3 (UNITIME_AFTER_POWER_ON +20,
		"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Enable Param 10 Monitoring",10);

Program20_3TC prog_FT_0060_step4 (UNITIME_AFTER_POWER_ON +
40,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 20", 10, 20);

Program20_3TC prog_FT_0060_step5 (UNITIME_AFTER_POWER_ON +
55,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 5", 10, 5);

Program20_3TC prog_FT_0060_step6 (UNITIME_AFTER_POWER_ON +
70,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 1", 10, 1);

#endif

//Segunda prueba-> Habilitamos la lectura del SID 10 y su monitorización, como por defecto el RID 0x4002
//esta activado y cambiamos el parametro a 20 que supera el rango 3-10, salta este error. Luego cambiamos el valor del sid 10 a uno menor que el rango (1) y vemos si
//recibimos el otro error, 0x4001

#ifdef FT_SOLO_EPD_ICU_SERV_12_0070


Program12_5TC prog_FT_0070_step2 (UNITIME_AFTER_POWER_ON + 15 ,
		"FT_SRG_EPD_ICU_TBD_0040TBD Test, Define Param 10 Monitoring",
                10,
                10,
                0x4001,
                3,
                0x4002,
                10);

Program12_1TC prog_FT_0070_step3 (UNITIME_AFTER_POWER_ON +20,
		"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Enable Param 10 Monitoring",10);

Program12_2TC prog_FT_0070_step4 (UNITIME_AFTER_POWER_ON +40,
		"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Disable Param 10 Monitoring",10);


Program20_3TC prog_FT_0070_step5 (UNITIME_AFTER_POWER_ON +55,
		"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 20", 10, 20);

#endif*/



//Tercera prueba-> Si no habilitamos la monitorización, esta no se produce y no se genera el 5,4 cuando se sale de rango

#ifdef FT_SOLO_EPD_ICU_SERV_12_0080

Program12_5TC prog_FT_0090_step2 (UNITIME_AFTER_POWER_ON + 15 ,
		"FT_SRG_EPD_ICU_TBD_0040TBD Test, Define Param 10 Monitoring",
                10,
                10,
                0x4001,
                3,
                0x4002,
                10);

Program20_3TC prog_FT_0090_step3 (UNITIME_AFTER_POWER_ON +
40,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 20", 10, 20);

#endif*/

//Cuarta prueba-> Desabilitamos y volvemos a habilitar el RID 0x4002 con el TC(5,5) y el TC (5,6)

#ifdef FT_SOLO_EPD_ICU_SERV_5_0050

Program12_5TC prog_FT_0050_step0 (UNITIME_AFTER_POWER_ON + 3 ,
		"FT_SRG_EPD_ICU_TBD_0040TBD Test, Define Param 10 Monitoring",
                10,
                10,
                0x4001,
                3,
                0x4002,
                10);

Program12_1TC prog_FT_0050_step1 (UNITIME_AFTER_POWER_ON +5,
		"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Enable Param 10 Monitoring",10);

Program5_6TC prog_FT_0050_step2 (UNITIME_AFTER_POWER_ON + 10,
		"FT_SRG_EPD_ICU_TBD_00CCTBD Test, step 1, Disable TM(5,4) RID 0x4002", 0x4002);


Program20_3TC prog_FT_0050_step3 (UNITIME_AFTER_POWER_ON +
15,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 20", 10, 20);

Program20_3TC prog_FT_0050_step4 (UNITIME_AFTER_POWER_ON +27,
		"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 5", 10, 5);

Program20_3TC prog_FT_0050_step5 (UNITIME_AFTER_POWER_ON +
39,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 1", 10, 1);

Program5_5TC prog_FT_0050_step6 (UNITIME_AFTER_POWER_ON + 51,
		"FT_SRG_EPD_ICU_TBD_00CCTBD Test, step 0, Enable TM(5,4) RID 0x4002", 0x4002);

Program20_3TC prog_FT_0050_step7 (UNITIME_AFTER_POWER_ON +
63,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 5", 10, 5);

Program20_3TC prog_FT_0050_step8 (UNITIME_AFTER_POWER_ON +
75,"FT_SRG_EPD_ICU_TBD_0040 TBD Test, Set Param 10 to value 20", 10, 20);

#endif









//**********************************
//Enable Monitoring
//**********************************

//Enable Param 0 Monitoring


/*
Program12_1TC prog_tc7(UNITIME_AFTER_POWER_ON + 15,
                       "Enable Monitoring Param 0",0);

#endif

Program5_5TC prog_tc6(UNITIME_AFTER_POWER_ON + 3,
                       "Enable EvRID 0x4002",
                       0x4002);

Program5_6TC prog_tc7(UNITIME_AFTER_POWER_ON + 4,
                       "Disable EvRID 0x4002",
                       0x4002);
//**********************************
//Housekeeping
//**********************************

/*

Program3_31TC prog_tcx(UNITIME_AFTER_POWER_ON + 3,
                        "Change period of SID 0 to 5 seconds",
             0,5);

Program3_6TC prog_tc_disable_SID_0(UNITIME_AFTER_POWER_ON + 26,
				"DISABLE SID 0", 0);

Program3_31TC prog_tcx2(UNITIME_AFTER_POWER_ON + 30,
                        "Change period of SID 0 to 10 seconds",
             0,10);

Program3_5TC prog_tc_enable_SID_0(UNITIME_AFTER_POWER_ON + 40,
				"ENABLE SID 0", 0);


*/
//**********************************
//Service 20 System Data Pool Mng
//**********************************


/*
//Set Param 0 to 6
Program20_3TC prog_tc10 (UNITIME_AFTER_POWER_ON + 11,
                         "Set Param 0 to value 6",0,6);

//Read Param 0 value
Program20_1TC prog_tc11(UNITIME_AFTER_POWER_ON + 12,
                        "Get Param 0 value",0);
*/
/*
//Set Param 0 to 6
Program20_3TC prog_tc12 (UNITIME_AFTER_POWER_ON + 35,
                         "Set Param 0 to value 3",0,3);


//Set Param 0 to 6
Program20_3TC prog_tc13 (UNITIME_AFTER_POWER_ON + 55,
                         "Set Param 0 to value 7",0,7);


*/


//**********************************
//Define Monitoring
//**********************************

//Add Param 0 monitoring definition

/*

Program12_5TC prog_tc2 (UNITIME_AFTER_POWER_ON + 10 ,
                "Define Monitoring Param 0",
                0,
                10,
                0x4001,
                0,
                0x4002,
                5);
*/

//**********************************
//Enable Monitoring
//**********************************

//Enable Param 0 Monitoring


/*
Program12_1TC prog_tc7(UNITIME_AFTER_POWER_ON + 15,
                       "Enable Monitoring Param 0",0);



//Set Param 0 to 6

Program20_3TC prog_tc10 (UNITIME_AFTER_POWER_ON + 20,
                         "Set Param 0 to value 12",0,12);

*/

//Set Param 0 to 3
/*
Program20_3TC prog_tc12 (UNITIME_AFTER_POWER_ON + 35,
                         "Set Param 0 to value 3",0,3);
*/


//**********************************
//Event-Action
//**********************************

//Event 0x4002- Action

/*
Program19_1TC prog_tc5(UNITIME_AFTER_POWER_ON + 3,
                       "Assign TC(128,2) as action of Event 0x4002",
                       0x4002,
                       128,2);


//Enable Event 0x4002- Action

Program19_4TC prog_tc6(UNITIME_AFTER_POWER_ON + 3,
                       "Enable Action of Event 0x4002",
                       0x4002);

*/

//**********************************
//Memory Management
//**********************************


/*
Program6_2TC prog_tc8 (UNITIME_AFTER_POWER_ON + 5,
                         "Memory Patch",0x10000,32,NULL);

Program6_5TC prog_tc9 (UNITIME_AFTER_POWER_ON + 6,
                         "Memory Dump",0x10000,32);
*/

//**********************************
//Housekeeping
//**********************************

/*
Program3_31TC prog_tcx(UNITIME_AFTER_POWER_ON + 12,
                        "FT_ Change period of SID 0 to 5 seconds",
             0,5);

Program3_6TC prog_tc_disable_SID_0(UNITIME_AFTER_POWER_ON + 25,
				"FT_ DISABLE SID 0", 0);

Program3_5TC prog_tc_enable_SID_0(UNITIME_AFTER_POWER_ON + 50,
				"FT_ ENABLE SID 0", 0);
*/

//**********************************
//Private Service System Data Pool Mng
//**********************************



/*
//Read Param 0 value
Program20_1TC prog_tc11(UNITIME_AFTER_POWER_ON + 13,
                        "Get Param 0 value",0);

*/



/*
//Set Param 0 to 6
Program20_3TC prog_tc13 (UNITIME_AFTER_POWER_ON + 55,
                         "Set Param 0 to value 7",0,7);

*/

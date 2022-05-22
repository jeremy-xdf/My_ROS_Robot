/*
	Copyright 2022 Fan Ziqi

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

#ifndef BSP_KINEMATICS_H
#define BSP_KINEMATICS_H
#include "bsp_define.h"


#define ENCODER_RESOLUTION 1440.0 //�������ֱ���, ����תһȦ��������������������(�������ֱ��ʣ�12*30*4��12�ߣ�1��30���ٱȣ��ı�Ƶ��)
#define WHEEL_DIAMETER 0.097 //����ֱ��,��λ����
#define D_X 0.193 //����Y�����������ĵļ��
#define D_Y 0.169 //����X�����������ĵļ��
#define PID_RATE                50      //PID����PWMֵ��Ƶ��(50HZ=20ms)

#define ROBOT_LINEAR_SPEED_LIMIT 5000   //���������ٶ���ֵ m/s*1000
#define ROBOT_ANGULAR_SPEED_LIMIT 10000  //�����˽��ٶ���ֵ rad/s*1000

#define ENCODER_MAX 32767        
#define ENCODER_MIN -32768 
#define ENCODER_LOW_WRAP  ((ENCODER_MAX - ENCODER_MIN)*0.3+ENCODER_MIN)
#define ENCODER_HIGH_WRAP ((ENCODER_MAX - ENCODER_MIN)*0.7+ENCODER_MIN)
#define PI 3.1415926

//ROBOT���ܺ���
void Kinematics_Init(int16_t* robot_params);  //������ʼ��
void Kinematics_Forward(int16_t* input, int16_t* output); //����(ForwardKinematics)�����ӱ���ֵ->����������̼�����
void Kinematics_Inverse(int16_t* input, int16_t* output); //���(InverseKinematics)�����������ٶ�->�����ٶ�


#endif
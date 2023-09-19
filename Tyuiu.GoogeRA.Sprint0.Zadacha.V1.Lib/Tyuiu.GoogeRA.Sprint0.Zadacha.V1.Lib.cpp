// Tyuiu.GoogeRA.Sprint0.Zadacha.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"




class Service : public ISprint0Task8V2
{
	virtual int Rezultat(int a, int b, int c) override
	{
		return ( a + b - c)/(a*a + 2);
	}
};
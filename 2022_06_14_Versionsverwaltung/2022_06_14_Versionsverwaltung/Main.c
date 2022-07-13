//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_14_Versionsverwaltung	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/14/2022 6:05:14 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()

#define RELEASE 3
#define HAUPTVERSIONSNUMMER 2
#define NEBENVERSIONSNUMMER 3
#define REVISIONSNUMMER 4
#define BUILDNUMMER 156

//Functions
//**************************************************************************


int main(void)
{
	//Variables



	//Code
#ifdef RELEASE
	printf("Release\n");
#endif

#ifdef DEMO
	printf("Demo\n");
#endif




	getchar();
	fflush(stdin);
	getchar();
	return 0;
}
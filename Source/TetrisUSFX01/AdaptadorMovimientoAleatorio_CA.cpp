// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorMovimientoAleatorio_CA.h"

void UAdaptadorMovimientoAleatorio_CA::SetLimitesMovimiento(float XMovimiento, float YMovimiento, float ZMovimiento)
{
	AnchoMovimiento = ZMovimiento;
	AltoMovimiento = YMovimiento;
	ProfundidadMovimiento = ZMovimiento;
}

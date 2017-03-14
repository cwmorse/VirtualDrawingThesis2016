// Fill out your copyright notice in the Description page of Project Settings.

#include "VirtualDrawing_CM.h"
#include "ReadWriteLibrary.h"

bool UReadWriteLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UReadWriteLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}

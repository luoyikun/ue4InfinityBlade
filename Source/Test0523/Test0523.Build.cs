// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Test0523 : ModuleRules
{
	public Test0523(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" ,"UMG" ,"MoviePlayer"});
	}
}

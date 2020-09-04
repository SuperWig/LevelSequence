// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyCPlusPlus_LS : ModuleRules
{
	public MyCPlusPlus_LS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

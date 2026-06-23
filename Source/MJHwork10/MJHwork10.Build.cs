// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MJHwork10 : ModuleRules
{
	public MJHwork10(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Test" });
	}
}

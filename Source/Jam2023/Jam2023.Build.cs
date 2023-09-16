// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Jam2023 : ModuleRules
{
	public Jam2023(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

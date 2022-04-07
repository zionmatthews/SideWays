// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SideWays : ModuleRules
{
	public SideWays(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

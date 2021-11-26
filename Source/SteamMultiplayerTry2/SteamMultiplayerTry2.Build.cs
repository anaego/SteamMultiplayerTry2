// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SteamMultiplayerTry2 : ModuleRules
{
	public SteamMultiplayerTry2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

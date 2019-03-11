/*!***********************************************************************

 @file           PVRMonitorPlugin.Build.cs
 @copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved.
 
**************************************************************************/

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class PVRMonitorPlugin : ModuleRules
	{
		public PVRMonitorPlugin(ReadOnlyTargetRules Target) : base(Target)
		{
            PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);

			PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);

			PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);

			PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...
                "CoreUObject",
                "Engine",
                "EngineSettings",
                "Slate",
                "SlateCore",
            }
			);

			DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

            if (Target.Platform == UnrealTargetPlatform.Android)
            {
                //Additional Android dependencies
                string PVRScopeArmLibPath = Path.Combine(ModuleDirectory, "../Thirdparty/lib/armeabi-v7a/");
                string PVRScopeArm64LibPath = Path.Combine(ModuleDirectory, "../Thirdparty/lib/arm64-v8a/");

                // toolchain will filter properly
                PublicLibraryPaths.Add(PVRScopeArmLibPath);
                PublicLibraryPaths.Add(PVRScopeArm64LibPath);

                if (File.Exists(PVRScopeArmLibPath + "libPVRScopeComplete.so") || File.Exists(PVRScopeArm64LibPath + "libPVRScopeComplete.so"))
                {
                    PublicAdditionalLibraries.Add("PVRScopeComplete");
                }

                if (File.Exists(PVRScopeArmLibPath + "libPVRScopeDeveloper.so") || File.Exists(PVRScopeArm64LibPath + "libPVRScopeDeveloper.so"))
                {
                    PublicAdditionalLibraries.Add("PVRScopeDeveloper");
                }

                AdditionalPropertiesForReceipt.Add("AndroidPlugin", Path.Combine(ModuleDirectory, "PVRMonitorPlugin_APL.xml"));
            }

            if (Target.bBuildEditor)
            {
				//??
            }

			//AddEngineThirdPartyPrivateStaticDependencies(Target, "PVRScope");

            PublicIncludePaths.Add(Path.Combine(ModuleDirectory, ""));
			PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../Thirdparty/include/"));

            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        }
	}
}

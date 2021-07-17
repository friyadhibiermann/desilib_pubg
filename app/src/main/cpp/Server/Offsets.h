#ifndef OFFSETS_H
#define OFFSETS_H

namespace Offsets {
    enum Offsets {
        //Global
        GWorld = 0x70AB2BC,
        GNames =  0x7364D94,
		PointerSize = 0x4,
		FtransformSpace = 0x43fc724,

		//---------SDK-----------
		//Class: FNameEntry
		FNameEntryToNameString = 0x8,
		//Class: UObject
		UObjectToClassPrivate = 0xC,
		UObjectToFNameindex = 0x10,
		//Class: UStruct
		UStructToSuperStruct = 0x20,

		//---------PUBG UEClasses-----------
		//Class: UWorld
		UWorldToPersistentLevel = 0x10,
		//Class: ULevel
		ULevelToAActors = 0x58,
		//Class: UController
		UControllerToTransformComponent = 0x2f4,
		//Class: UPlayerController
		UPlayerControllerToPlayerCameraManager = 0x340,
		//Class: APlayerCameraManager
		APlayerCameraManagerToCameraCacheEntry = 0x350,
		//Class: USceneComponent
		USceneComponentToComponentToWorld = 0x1bc,
		//Class: USkeletalMeshComponent
		USkeletalMeshComponentToCachedComponentSpaceTransforms = 0x710,
		//Class: AActor
		AActorToRootComponent = 0x14c,
		//Class: UCharacter
		UCharacterToMesh = 0x11,
		//Class: UAECharacter
		UAECharacterToPlayerName = 0x620,
		UAECharacterToTeamID = 0x644,
		//Class: STExtraCharacter
		STExtraCharacterToHealth = 0x1fba,
    };
}

#endif

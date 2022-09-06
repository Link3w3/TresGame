#pragma once
#include "CoreMinimal.h"
#include "SQEX_KBDAssetElement.generated.h"

class UAssetUserData;

USTRUCT(BlueprintType)
struct KBDRT_API FSQEX_KBDAssetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName ElementName;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UAssetUserData*> AssetUserDatas;
    
    FSQEX_KBDAssetElement();
};


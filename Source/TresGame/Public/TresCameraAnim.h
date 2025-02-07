#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTarget.h"
#include "Engine/LatentActionManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ViewTargetTransitionParamsEx -FallbackName=ViewTargetTransitionParamsEx
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraAnim.generated.h"

class UCameraAnimInst;
class ASQEX_CameraInterest;
class UCameraAnim;
class ASQEX_CameraUpVector;
class ATresCameraAnim;
class UObject;

UCLASS(Blueprintable)
class ATresCameraAnim : public ATresCameraTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnimInst* m_CamAnimIns;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_CameraInterest* m_CameraInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_CameraUpVector* m_CameraUpVector;
    
public:
    ATresCameraAnim();
    UFUNCTION(BlueprintCallable)
    void WaitPlayEnd(bool bDummy, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void StartTresCameraAnim(UCameraAnim* Anim, bool bLoop, bool bTakeover, FViewTargetTransitionParamsEx TransitionParams, bool bAutoEnd, bool bEndTakeover, FViewTargetTransitionParamsEx EndTransitionParams);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraAnim* BP_SpawnTresCameraAnim(UObject* WorldContextObject, TSubclassOf<ATresCameraAnim> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraAnimPlayZeroFrame(bool bEbnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraAnimCtrl(bool bEnable, float WaitTime, float ReturnTime, float LimitPitchMin, float LimitPitchMax);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraAnimBaseOffset(FVector offsetLocation, FRotator OffsetRotation);
    
};


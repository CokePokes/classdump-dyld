/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iap2d/iap2d-Structs.h>
@interface iAP2PowerUpdates : NSObject {

	unsigned paramCountArr[3];
	unsigned long long updateTypesBitmask;

}
-(void)clearUpdateTypes;
-(unsigned)paramCount:(int)arg1 ;
-(void)incrementParamCount:(int)arg1 ;
-(void)setUpdateTypesBitmask:(unsigned long long)arg1 ;
-(void)enableUpdateType:(int)arg1 ;
-(BOOL)isUpdateTypeEnabled:(int)arg1 ;
-(void)processPowerInfoChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end


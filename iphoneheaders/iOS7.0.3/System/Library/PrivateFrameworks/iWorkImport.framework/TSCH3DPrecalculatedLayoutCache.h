/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary;

@interface TSCH3DPrecalculatedLayoutCache : NSObject {

	NSMutableDictionary* mCache;

}
+(SCD_Struct_TS407)IOSLayoutSettings;
+(SCD_Struct_TS407)desktopLayoutSettings;
+(void)populateIPadInsertionIconsIntoDictionary:(id)arg1 ;
+(void)populateIPadInspectorIconsIntoDictionary:(id)arg1 ;
+(void)populateIPhoneInsertionIconsIntoDictionary:(id)arg1 ;
+(void)populateIPhoneInspectorIconsIntoDictionary:(id)arg1 ;
+(void)populateIPhonePortraitInsertionIconsIntoDictionary:(id)arg1 ;
+(void)populateIPhonePortraitInspectorIconsIntoDictionary:(id)arg1 ;
+(void)populateDesktopInsertionIconsIntoDictionary:(id)arg1 ;
+(id)sharedCache;
-(id)layoutCacheForChartType:(id)arg1 cacheType:(TSCH3DPrecalculatedLayoutCacheType)arg2 ;
-(id)initWithCache:(id)arg1 ;
-(void)dealloc;
@end


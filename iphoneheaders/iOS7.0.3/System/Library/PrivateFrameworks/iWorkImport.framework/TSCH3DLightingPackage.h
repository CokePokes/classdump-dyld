/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface TSCH3DLightingPackage : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mLights;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * localizedName; 
+(id)instanceWithArchive:(const Chart3DLightingPackageArchive*)arg1 unarchiver:(id)arg2 ;
+(id)packageFromName:(id)arg1 ;
+(id)packageWithSageLightingPackageData:(id)arg1 ;
+(id)localizedNameForName:(id)arg1 ;
+(id)allNamedPackages;
+(id)p_sageLightingPackageNames;
+(id)nameFromSageLightingPackageName:(id)arg1 ;
+(id)sageNameFromLightingPackageName:(id)arg1 ;
+(id)package;
-(void)saveToArchive:(Chart3DLightingPackageArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightingPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(void)addLight:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)localizedName;
@end


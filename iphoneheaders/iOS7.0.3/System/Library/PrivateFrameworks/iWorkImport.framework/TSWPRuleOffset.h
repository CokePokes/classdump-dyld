/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSWPRuleOffset : NSObject <NSCopying> {

	float _dX;
	float _dY;

}

@property (nonatomic,readonly) float dX;              //@synthesize dX=_dX - In the implementation block
@property (nonatomic,readonly) float dY;              //@synthesize dY=_dY - In the implementation block
+(id)ruleOffset;
-(void)saveToArchive:(PointRef)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const PointRef)arg1 unarchiver:(id)arg2 ;
-(id)initWithDX:(float)arg1 dY:(float)arg2 ;
-(float)dX;
-(float)dY;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CGSize)sizeValue;
-(CGPoint)pointValue;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface CIVector : NSObject <NSCopying, NSCoding> {

	unsigned long _count;
	SCD_Union_CI13* _u;

}
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 W:(float)arg4 ;
+(id)vectorWithValues:(const float*)arg1 count:(unsigned long)arg2 ;
+(id)vectorWithX:(float)arg1 ;
+(id)vectorWithX:(float)arg1 Y:(float)arg2 ;
+(id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)vectorWithCGRect:(CGRect)arg1 ;
-(float*)_values;
-(float)X;
-(float)Y;
-(float)Z;
-(float)W;
-(id)initWithValues:(const float*)arg1 count:(unsigned long)arg2 ;
-(id)initWithX:(float)arg1 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 W:(float)arg4 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(CGRect)CGRectValue;
-(CGPoint)CGPointValue;
-(CGAffineTransform)CGAffineTransformValue;
-(id)initWithString:(id)arg1 ;
-(float)valueAtIndex:(unsigned long)arg1 ;
-(void)finalize;
-(id)stringRepresentation;
@end


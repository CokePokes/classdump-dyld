/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSCoding.h>

@interface CACGPathCodingSegment : NSObject <NSCoding> {

	int _type;
	CGPoint _points[3];

}
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id).cxx_construct;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface PLRange : NSObject {

	double _location;
	double _length;

}

@property (assign) double location;                   //@synthesize location=_location - In the implementation block
@property (assign) double length;                     //@synthesize length=_length - In the implementation block
@property (readonly) double endLocation; 
-(id)description;
-(double)length;
-(void)setLength:(double)arg1 ;
-(double)location;
-(id)initWithLocation:(double)arg1 length:(double)arg2 ;
-(id)intersectionRange:(id)arg1 ;
-(double)endLocation;
-(BOOL)locationInRange:(double)arg1 ;
-(BOOL)equalRange:(id)arg1 ;
-(id)unionRange:(id)arg1 ;
-(BOOL)intersectsRange:(id)arg1 ;
-(void)setLocation:(double)arg1 ;
@end


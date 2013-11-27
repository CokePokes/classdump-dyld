/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:38:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <ChatKit/MKAnnotation.h>

@class NSString;

@interface StepAnnotation : NSObject <MKAnnotation> {

	SCD_Struct_Si10 _coordinate;

}

@property (nonatomic,readonly) SCD_Struct_Si10 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(SCD_Struct_Si10)coordinate;
-(id)initWithCoordinate:(SCD_Struct_Si10)arg1 ;
@end


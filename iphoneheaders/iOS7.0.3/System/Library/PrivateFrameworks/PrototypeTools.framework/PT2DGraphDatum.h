/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PT2DGraphDatum.h>

@protocol PT2DGraphDatum
@property (nonatomic,retain) UIColor * color; 
@optional
-(id)color;
-(void)setColor:(id)arg1;
-(CGPoint*)graphPointForContext:(id)arg1;

@required
-(CGPoint*)graphPoint;
@end


@class UIColor;

@interface PT2DGraphDatum : NSObject <PT2DGraphDatum> {

	UIColor* _color;
	CGPoint _graphPoint;

}

@property (assign,nonatomic) CGPoint graphPoint;              //@synthesize graphPoint=_graphPoint - In the implementation block
@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
+(id)datumWithPoint:(CGPoint)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setGraphPoint:(CGPoint)arg1 ;
-(CGPoint)graphPoint;
-(void).cxx_destruct;
@end


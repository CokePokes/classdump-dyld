/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UITextPosition;

@interface UITextInputArrowKeyHistory : NSObject {

	UITextPosition* startPosition;
	int amount;
	int anchor;
	UITextPosition* start;
	UITextPosition* end;
	UITextPosition* cursor;
	BOOL affinityDownstream;

}

@property (nonatomic,retain) UITextPosition * startPosition; 
@property (assign,nonatomic) int anchor; 
@property (nonatomic,retain) UITextPosition * start; 
@property (nonatomic,retain) UITextPosition * end; 
@property (nonatomic,retain) UITextPosition * cursor; 
@property (assign,nonatomic) BOOL affinityDownstream; 
@property (assign,nonatomic) int amount; 
-(void)dealloc;
-(id)startPosition;
-(id)start;
-(id)end;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
-(void)setStartPosition:(id)arg1 ;
-(id)cursor;
-(int)anchor;
-(void)setAnchor:(int)arg1 ;
-(BOOL)affinityDownstream;
-(void)setCursor:(id)arg1 ;
-(void)setAffinityDownstream:(BOOL)arg1 ;
-(void)setAmount:(int)arg1 ;
-(int)amount;
@end


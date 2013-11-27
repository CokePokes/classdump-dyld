/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputTokenizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {

	UIResponder<UITextInput>* _textInput;

}
-(id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3 ;
-(id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3 ;
-(BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3 ;
-(int)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(int)arg1 atPosition:(id)arg2 ;
-(NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(int)arg2 downstream:(BOOL)arg3 ;
-(id)initWithTextInput:(id)arg1 ;
@end


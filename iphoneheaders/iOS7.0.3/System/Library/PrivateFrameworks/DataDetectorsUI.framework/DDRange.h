/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long _startOffset;
	long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long)endOffset;
-(long)startOffset;
-(id)initWithDOMRange:(id)arg1 ;
-(id)node;
-(void)setStartOffset:(long)arg1 ;
-(void)setNode:(id)arg1 ;
-(void)setEndOffset:(long)arg1 ;
@end


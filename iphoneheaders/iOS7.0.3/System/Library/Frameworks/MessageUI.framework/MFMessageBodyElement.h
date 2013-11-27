/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MFMessageBodyElement_Private.h>

@class MFMessageBodyParser, NSArray;

@interface MFMessageBodyElement : NSObject <MFMessageBodyElement_Private> {

	MFMessageBodyParser* _parser;
	NSArray* _nodes;
	unsigned _quoteLevel;
	unsigned _externalRetainCount;
	int _validAttributes;
	int _attributes;

}

@property (assign,nonatomic) MFMessageBodyParser * parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSArray * nodes; 
-(unsigned)quoteLevel;
-(void)setParser:(id)arg1 ;
-(BOOL)isExternallyRetained;
-(void)setNodes:(id)arg1 ;
-(BOOL)_hasValueForAttributes:(int)arg1 ;
-(void)_setValue:(int)arg1 forAttributes:(int)arg2 ;
-(id)retainExternally;
-(void)releaseExternally;
-(int)valueForAttributes:(int)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(unsigned)getQuoteLevel;
-(id)parser;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)reset;
-(id)nodes;
@end


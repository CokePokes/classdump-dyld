/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MFMessageBodyTreeNode.h>
#import <MessageUI/MFMessageBodyConsumableInnerTextNode.h>

@class NSMutableArray, NSString;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {

	NSMutableArray* _childNodes;
	_MFParsedHTMLNode* _parentNode;
	_MFParsedHTMLNode* _nextSibling;
	NSString* _htmlString;
	unsigned _startLocation;
	unsigned _endLocation;

}

@property (assign,nonatomic) _MFParsedHTMLNode * parentNode;                //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic) _MFParsedHTMLNode * nextSibling;               //@synthesize nextSibling=_nextSibling - In the implementation block
@property (nonatomic,readonly) BOOL hasChildNodes; 
@property (nonatomic,readonly) _MFParsedHTMLNode * firstChild; 
@property (nonatomic,readonly) _MFParsedHTMLNode * lastChild; 
@property (nonatomic,readonly) NSString * tagName; 
@property (nonatomic,retain) NSString * htmlString;                         //@synthesize htmlString=_htmlString - In the implementation block
@property (assign,nonatomic) unsigned startLocation;                        //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) unsigned endLocation;                          //@synthesize endLocation=_endLocation - In the implementation block
-(id)htmlString;
-(void)collectDescendanceIntoArray:(id)arg1 ;
-(id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(void)setHtmlString:(id)arg1 ;
-(void)setEndLocation:(unsigned)arg1 ;
-(void)setParentNode:(id)arg1 ;
-(void)setNextSibling:(id)arg1 ;
-(void)addRecursiveDescriptionWithLevel:(unsigned)arg1 toString:(id)arg2 ;
-(id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1 ;
-(unsigned)startLocation;
-(void)dealloc;
-(id)init;
-(id)recursiveDescription;
-(id)lastChild;
-(id)tagName;
-(id)firstChild;
-(void)setStartLocation:(unsigned)arg1 ;
-(id)parentNode;
-(id)nextSibling;
-(unsigned)endLocation;
-(void)appendChild:(id)arg1 ;
-(BOOL)hasChildNodes;
@end


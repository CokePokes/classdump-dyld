/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class DOMDocument;

@interface MFMessageBodyDOMParser : MFMessageBodyParser {

	DOMDocument* _document;

}
+(BOOL)documentContainsAnyQuotation:(id)arg1 ;
-(BOOL)parse;
-(id)initWithDOMDocument:(id)arg1 ;
-(id)rangeForElement:(id)arg1 ;
-(Class)messageBodyElementClass;
-(void)_consumeAccumulatedNodes:(id)arg1 ;
-(void)extendRange:(id)arg1 toElement:(id)arg2 ;
-(id)rangeFromElement:(id)arg1 toElement:(id)arg2 ;
-(void)dealloc;
@end


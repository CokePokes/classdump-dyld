/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSXMLParser, NSMutableString, IMXMLReparserContext, NSError;

@interface IMXMLReparser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	NSMutableString* _output;
	IMXMLReparserContext* _context;
	NSError* _error;
	unsigned _depth;

}
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)parseWithContext:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MIME/MFMessageHeaders.h>

@class NSMutableDictionary, NSMutableArray;

@interface MFMutableMessageHeaders : MFMessageHeaders {

	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;

}
-(id)allHeaderKeys;
-(void)setAddressListForBcc:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)mutableCopy;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)mergeHeaders:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)encodedHeaders;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(void)stripInternalHeaders;
-(void)removeHeaderForKey:(id)arg1 ;
-(void)setAddressListForSender:(id)arg1 ;
-(void)setAddressListForTo:(id)arg1 ;
-(void)setAddressListForCc:(id)arg1 ;
-(void)setReferences:(id)arg1 ;
@end


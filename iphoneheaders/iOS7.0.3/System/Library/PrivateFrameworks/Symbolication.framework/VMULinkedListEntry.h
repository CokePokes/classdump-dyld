/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class VMUSymbolOwner;

@interface VMULinkedListEntry : NSObject {

	VMULinkedListEntry* _prev;
	VMULinkedListEntry* _next;
	unsigned _size;
	VMUSymbolOwner* _symbolOwner;

}
+(id)linkedListEntryWithSymbolOwner:(id)arg1 ;
-(void)dealloc;
-(unsigned)size;
-(id)description;
-(id)next;
-(id)symbolOwner;
-(id)initWithSymbolOwner:(id)arg1 ;
-(void)setPrev:(id)arg1 ;
-(id)prev;
-(void)setNext:(id)arg1 ;
@end


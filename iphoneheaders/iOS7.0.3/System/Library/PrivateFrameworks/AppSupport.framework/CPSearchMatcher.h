/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {

	int _options;
	NSArray* _components;
	NSArray* _asciiComponents;
	NSData* _wholeSearchStringData;
	NSData* _context;

}
-(BOOL)matches:(id)arg1 ;
-(void)dealloc;
-(BOOL)matchesASCIIString:(const char*)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3 ;
-(BOOL)matches:(id)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 andLocale:(id)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 matchType:(int)arg2 ;
-(id)initWithSearchString:(id)arg1 options:(int)arg2 ;
-(BOOL)matchesUTF8String:(const char*)arg1 ;
-(id)initWithSearchString:(id)arg1 ;
@end


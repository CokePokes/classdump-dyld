/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUBacktrace.h>

@class NSArray, NSDictionary;

@interface TUSimpleBacktrace : NSObject <TUBacktrace> {

	NSArray* _symbolicatedBacktraceStrings;
	NSDictionary* _dyldContext;
	void* _unsymbolicatedBacktrace;
	int _unsymbolicatedBacktraceLength;
	opaque_pthread_mutex_t _symbolicateLock;
	BOOL _shouldSymbolicate;

}

@property (assign) BOOL shouldSymbolicate;                                  //@synthesize shouldSymbolicate=_shouldSymbolicate - In the implementation block
@property (readonly) NSArray * unsymbolicatedBacktraceStrings; 
@property (readonly) NSArray * symbolicatedBacktraceStrings; 
@property (readonly) NSDictionary * dyldContext; 
+(id)dyldContext;
+(void)_rebuildDyldContext;
-(void)dealloc;
-(id)init;
-(id)initIgnoringTopEntries:(int)arg1 symbolicateImmediately:(BOOL)arg2 ;
-(void)setShouldSymbolicate:(BOOL)arg1 ;
-(id)symbolicatedBacktraceStrings;
-(id)dyldContext;
-(void)symbolicate;
-(void)_initWithBacktrace:(void*)arg1 length:(int)arg2 ignoreTopEntries:(int)arg3 symbolicateImmediately:(BOOL)arg4 ;
-(BOOL)shouldSymbolicate;
-(id)unsymbolicatedBacktraceStrings;
-(id)initWithExistingBacktrace:(void*)arg1 length:(int)arg2 symbolicateImmediately:(BOOL)arg3 ;
-(id)initWithSymbolicatedBacktraceStrings:(id)arg1 dyldContext:(id)arg2 ;
@end


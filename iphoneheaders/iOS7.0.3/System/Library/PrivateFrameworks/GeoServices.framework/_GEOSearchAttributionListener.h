/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {

	NSString* _identifier;
	unsigned _version;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                   //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(id)identifier;
-(unsigned)version;
-(void)handleInfo:(id)arg1 updatedManifest:(BOOL)arg2 ;
-(void)handleError:(id)arg1 ;
-(void)addCompletionHandler:(/*^block*/ id)arg1 errorHandler:(/*^block*/ id)arg2 ;
-(id)initWithIdentifier:(id)arg1 version:(unsigned)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSArray;

@interface CheckHashesOperation : ISOperation {

	long long _bytesToHash;
	NSString* _filePath;
	NSArray* _hashes;

}

@property (readonly) NSString * filePath; 
@property (readonly) NSArray * hashes; 
@property (readonly) long long numberOfBytesToHash; 
-(id)initWithFilePath:(id)arg1 hashes:(id)arg2 bytesToHash:(long long)arg3 ;
-(void)dealloc;
-(void)run;
-(id)filePath;
-(long long)numberOfBytesToHash;
-(id)hashes;
@end


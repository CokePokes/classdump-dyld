/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:46:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSURL;

@interface TSPDatabaseObject : NSObject {

	int _classType;
	long long _identifier;

}

@property (nonatomic,readonly) long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int classType;                     //@synthesize classType=_classType - In the implementation block
@property (nonatomic,readonly) BOOL hasDataState; 
@property (nonatomic,readonly) long long dataState; 
@property (nonatomic,readonly) BOOL hasFileState; 
@property (nonatomic,readonly) NSString * fileState; 
@property (nonatomic,readonly) NSURL * fileURL; 
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3 ;
+(id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4 ;
-(BOOL)hasDataState;
-(long long)dataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 ;
-(BOOL)hasFileState;
-(id)fileState;
-(int)classType;
-(id)init;
-(long long)identifier;
-(id)fileURL;
@end


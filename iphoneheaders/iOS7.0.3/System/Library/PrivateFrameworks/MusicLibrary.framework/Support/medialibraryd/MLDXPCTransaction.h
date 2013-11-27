/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSUUID, NSString;

@interface MLDXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)endTransactionOnDate:(id)arg1 ;
-(void)beginTransaction;
-(id)_identifier;
-(void)endTransaction;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void).cxx_destruct;
@end


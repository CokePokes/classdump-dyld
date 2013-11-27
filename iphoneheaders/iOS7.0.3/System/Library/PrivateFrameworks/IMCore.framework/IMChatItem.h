/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:34:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSDate, NSString, IMMessage;

@interface IMChatItem : NSObject {

	NSDate* _date;
	id _datum1;
	id _datum2;
	id _datum3;
	BOOL _isFromArchive;
	NSString* _guid;

}

@property (nonatomic,retain) NSString * guid;                       //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) BOOL isFromArchive; 
-(void)dealloc;
-(id)date;
-(id)message;
-(id)stringValue;
-(int)_reverseCompareToChatItem:(id)arg1 ;
-(int)_compareToChatItem:(id)arg1 ;
-(id)_initWithGUID:(id)arg1 date:(id)arg2 datum1:(id)arg3 datum2:(id)arg4 datum3:(id)arg5 ;
-(void)_setIsFromArchive:(BOOL)arg1 ;
-(BOOL)isFromArchive;
-(id)guid;
-(void)setGuid:(id)arg1 ;
@end


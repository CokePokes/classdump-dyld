/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding> {

	NSString* _clientIdentifier;
	int _itemState;
	NSString* _representativeTitle;
	NSString* _statusString;
	int _totalNumberOfItems;
	unsigned _transferTypes;

}

@property (nonatomic,copy) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) int itemState;                             //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,copy) NSString * representativeTitle;              //@synthesize representativeTitle=_representativeTitle - In the implementation block
@property (nonatomic,copy) NSString * statusString;                     //@synthesize statusString=_statusString - In the implementation block
@property (assign,nonatomic) int totalNumberOfItems;                    //@synthesize totalNumberOfItems=_totalNumberOfItems - In the implementation block
@property (assign,nonatomic) unsigned transferTypes;                    //@synthesize transferTypes=_transferTypes - In the implementation block
-(void)dealloc;
-(id)statusString;
-(void)setItemState:(int)arg1 ;
-(int)itemState;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)representativeTitle;
-(void)setRepresentativeTitle:(id)arg1 ;
-(void)setStatusString:(id)arg1 ;
-(int)totalNumberOfItems;
-(void)setTotalNumberOfItems:(int)arg1 ;
-(unsigned)transferTypes;
-(void)setTransferTypes:(unsigned)arg1 ;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
@end


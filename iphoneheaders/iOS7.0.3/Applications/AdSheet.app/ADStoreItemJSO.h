/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADStoreItemJSO_Bindings.h>

@class NSNumber, NSString, NSArray, NSDate, SSItem;

@interface ADStoreItemJSO : ADJavaScriptObject <ADStoreItemJSO_Bindings> {

	NSDate* _expirationDate;
	int _error;
	SSItem* _storeItem;
	NSNumber* _adamId;
	NSString* _title;
	NSArray* _offers;
	NSArray* _previews;

}

@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) int error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SSItem * storeItem;                   //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,readonly) NSNumber * adamId;                  //@synthesize adamId=_adamId - In the implementation block
@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * offers;                   //@synthesize offers=_offers - In the implementation block
@property (nonatomic,readonly) NSArray * previews;                 //@synthesize previews=_previews - In the implementation block
-(id)previews;
-(id)initWithAdamId:(id)arg1 delegate:(id)arg2 ;
-(void)setError:(int)arg1 ;
-(id)storeItem;
-(void)setStoreItem:(id)arg1 ;
-(id)adamId;
-(void)dealloc;
-(id)title;
-(id)expirationDate;
-(int)error;
-(void)setExpirationDate:(id)arg1 ;
-(id)offers;
@end


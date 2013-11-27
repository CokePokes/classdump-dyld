/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/SKUIItemRequestDelegate.h>

@protocol SKUIMissingItemDelegate;
@class , NSString, SKUIResourceLoader, NSMutableDictionary;

@interface SKUIMissingItemLoader : NSObject <SKUIItemRequestDelegate> {

	int _batchSize;
	<SKUIMissingItemDelegate>* _delegate;
	NSString* _imageProfile;
	NSString* _keyProfile;
	SKUIResourceLoader* _loader;
	NSMutableDictionary* _requests;

}

@property (assign,nonatomic) int batchSize;                                            //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) NSString * imageProfile;                                    //@synthesize imageProfile=_imageProfile - In the implementation block
@property (nonatomic,copy) NSString * keyProfile;                                      //@synthesize keyProfile=_keyProfile - In the implementation block
@property (assign,nonatomic,__weak) <SKUIMissingItemDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setKeyProfile:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setBatchSize:(int)arg1 ;
-(int)batchSize;
-(void)loadItemsForPageComponent:(id)arg1 startIndex:(int)arg2 reason:(int)arg3 ;
-(id)initWithResourceLoader:(id)arg1 ;
-(id)imageProfile;
-(void)setImageProfile:(id)arg1 ;
-(void)itemRequest:(id)arg1 didFinishWithItems:(id)arg2 ;
-(void)loadItemsWithIdentifiers:(id)arg1 reason:(int)arg2 ;
-(id)_existingRequestIDForItemID:(id)arg1 ;
-(void)_requestItems:(id)arg1 withReason:(int)arg2 ;
-(void).cxx_destruct;
-(id)keyProfile;
@end


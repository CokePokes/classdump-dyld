/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PassKitCore/PKPassLibraryExportedInterface.h>

@protocol PKPassLibraryExportedInterface;
@class ;

@interface PKPassLibraryExportedProxy : NSObject <PKPassLibraryExportedInterface> {

	<PKPassLibraryExportedInterface>* _delegate;

}

@property (assign,nonatomic) <PKPassLibraryExportedInterface> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2 ;
-(void)passAdded:(id)arg1 ;
-(void)passUpdated:(id)arg1 ;
-(void)passRemoved:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end


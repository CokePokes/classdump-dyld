/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	BOOL addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) BOOL addsContentToExistingCollection; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)connectForSimulator;
-(void)connect;
-(id)runtimeCollectionClassName;
-(void)performConnect;
-(void)setRuntimeCollectionClassName:(id)arg1 ;
-(BOOL)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(BOOL)arg1 ;
@end


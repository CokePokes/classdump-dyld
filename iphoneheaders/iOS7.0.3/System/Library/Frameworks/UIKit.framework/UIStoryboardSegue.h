/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface UIStoryboardSegue : NSObject {

	NSString* _identifier;
	id _sourceViewController;
	id _destinationViewController;
	/*^block*/ id _performHandler;

}

@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id sourceViewController;                   //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) id destinationViewController;              //@synthesize destinationViewController=_destinationViewController - In the implementation block
@property (nonatomic,copy) id performHandler;                             //@synthesize performHandler=_performHandler - In the implementation block
+(id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(/*^block*/ id)arg4 ;
-(void)dealloc;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)perform;
-(void)setPerformHandler:(/*^block*/ id)arg1 ;
-(id)sourceViewController;
-(id)destinationViewController;
-(/*^block*/ id)performHandler;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.facebook.xpc/com.apple.facebook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class SLFacebookPost, NSArray;

@interface FBDPostUploadPart : NSObject {

	SLFacebookPost* _post;
	NSArray* _partAssets;

}

@property (retain) SLFacebookPost * post;              //@synthesize post=_post - In the implementation block
@property (retain) NSArray * partAssets;               //@synthesize partAssets=_partAssets - In the implementation block
-(id)post;
-(void)setPost:(id)arg1 ;
-(void)setPartAssets:(id)arg1 ;
-(id)initWithPost:(id)arg1 partAssets:(id)arg2 ;
-(id)partAssets;
-(void).cxx_destruct;
@end


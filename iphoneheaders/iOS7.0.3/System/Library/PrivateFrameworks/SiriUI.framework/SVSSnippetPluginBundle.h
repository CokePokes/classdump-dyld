/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SiriUISnippetPlugin;
@class NSBundle, ;

@interface SVSSnippetPluginBundle : NSObject {

	NSBundle* _bundle;
	<SiriUISnippetPlugin>* _snippetPlugin;

}

@property (nonatomic,retain) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) <SiriUISnippetPlugin> * snippetPlugin;              //@synthesize snippetPlugin=_snippetPlugin - In the implementation block
+(id)snippetPluginWithBundle:(id)arg1 ;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(id)snippetPlugin;
-(void)setSnippetPlugin:(id)arg1 ;
-(void).cxx_destruct;
@end


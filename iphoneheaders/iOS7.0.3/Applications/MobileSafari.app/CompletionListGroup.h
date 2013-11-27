/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray;

@interface CompletionListGroup : NSObject {

	NSString* _title;
	NSArray* _completions;

}

@property (nonatomic,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * completions;              //@synthesize completions=_completions - In the implementation block
-(id)initWithTitle:(id)arg1 completions:(id)arg2 ;
-(void)dealloc;
-(id)title;
-(id)completions;
@end


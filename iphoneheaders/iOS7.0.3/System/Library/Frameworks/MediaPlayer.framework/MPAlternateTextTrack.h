/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPAlternateTrack.h>

@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {

	int _type;
	NSString* _name;
	NSLocale* _locale;
	int _tag;

}

@property (nonatomic,readonly) BOOL isInBand; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) int tag;                          //@synthesize tag=_tag - In the implementation block
+(id)offTrack;
+(id)autoTrack;
-(BOOL)isInBand;
-(id)_displayNameForName:(id)arg1 ;
-(id)initWithType:(int)arg1 name:(id)arg2 locale:(id)arg3 ;
-(int)type;
-(void)setTag:(int)arg1 ;
-(int)tag;
-(int)compare:(id)arg1 ;
-(id)locale;
-(id)displayName;
-(void).cxx_destruct;
@end


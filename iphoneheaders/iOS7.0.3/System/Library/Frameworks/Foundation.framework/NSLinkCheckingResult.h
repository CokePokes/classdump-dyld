/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSURL* _url;

}
-(id)resultByAdjustingRangesWithOffset:(int)arg1 ;
-(BOOL)_adjustRangesWithOffset:(int)arg1 ;
-(id)initWithRange:(NSRange)arg1 URL:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)URL;
-(NSRange)range;
-(unsigned long long)resultType;
@end


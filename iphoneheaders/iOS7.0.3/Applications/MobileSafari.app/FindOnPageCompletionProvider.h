/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:39:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileSafari/CompletionProvider.h>

@protocol UIWebFindOnPageHighlighter;
@class ;

@interface FindOnPageCompletionProvider : CompletionProvider {

	<UIWebFindOnPageHighlighter>* _highlighter;

}

@property (nonatomic,readonly) <UIWebFindOnPageHighlighter> * highlighter;              //@synthesize highlighter=_highlighter - In the implementation block
-(void)setStringToComplete:(id)arg1 ;
-(id)highlighter;
-(id)initWithHighlighter:(id)arg1 ;
-(id)completionsForString:(id)arg1 ;
-(void)dealloc;
@end


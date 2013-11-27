/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/DOMElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString * idName; 
@property (copy) NSString * title; 
@property (copy) NSString * lang; 
@property (copy) NSString * dir; 
@property (assign) int tabIndex; 
@property (copy) NSString * accessKey; 
@property (copy) NSString * innerHTML; 
@property (copy) NSString * innerText; 
@property (copy) NSString * outerHTML; 
@property (copy) NSString * outerText; 
@property (readonly) DOMHTMLCollection * children; 
@property (copy) NSString * contentEditable; 
@property (readonly) BOOL isContentEditable; 
@property (readonly) NSString * titleDisplayString; 
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3 ;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 ;
-(void)setContentEditable:(id)arg1 ;
-(void)setInnerHTML:(id)arg1 ;
-(id)innerHTML;
-(id)innerText;
-(BOOL)isContentEditable;
-(id)idName;
-(int)structuralComplexityContribution;
-(BOOL)hidden;
-(void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4 ;
-(id)accessKey;
-(void)setAccessKey:(id)arg1 ;
-(void)click;
-(id)dir;
-(void)setDir:(id)arg1 ;
-(void)setIdName:(id)arg1 ;
-(id)lang;
-(void)setLang:(id)arg1 ;
-(BOOL)translate;
-(void)setTranslate:(BOOL)arg1 ;
-(int)tabIndex;
-(void)setTabIndex:(int)arg1 ;
-(BOOL)draggable;
-(void)setDraggable:(BOOL)arg1 ;
-(id)webkitdropzone;
-(void)setWebkitdropzone:(id)arg1 ;
-(void)setInnerText:(id)arg1 ;
-(id)outerHTML;
-(void)setOuterHTML:(id)arg1 ;
-(id)outerText;
-(void)setOuterText:(id)arg1 ;
-(id)children;
-(id)contentEditable;
-(BOOL)spellcheck;
-(void)setSpellcheck:(BOOL)arg1 ;
-(id)titleDisplayString;
-(id)insertAdjacentElement:(id)arg1 element:(id)arg2 ;
-(void)insertAdjacentHTML:(id)arg1 html:(id)arg2 ;
-(void)insertAdjacentText:(id)arg1 text:(id)arg2 ;
@end


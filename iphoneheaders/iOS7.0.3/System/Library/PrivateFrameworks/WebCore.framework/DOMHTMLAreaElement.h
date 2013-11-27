/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement

@property (copy) NSString * alt; 
@property (copy) NSString * coords; 
@property (copy) NSString * href; 
@property (assign) BOOL noHref; 
@property (copy) NSString * shape; 
@property (copy) NSString * target; 
@property (copy) NSString * accessKey; 
@property (readonly) NSString * hashName; 
@property (readonly) NSString * host; 
@property (readonly) NSString * hostname; 
@property (readonly) NSString * pathname; 
@property (readonly) NSString * port; 
@property (readonly) NSString * protocol; 
@property (readonly) NSString * search; 
@property (readonly) NSURL * absoluteLinkURL; 
-(id)absoluteQuadsAtPoint:(CGPoint)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)host;
-(id)absoluteLinkURL;
-(id)shape;
-(void)setShape:(id)arg1 ;
-(id)absoluteQuadsWithOwner:(id)arg1 ;
-(id)protocol;
-(id)href;
-(id)coords;
-(void)setCoords:(id)arg1 ;
-(void)setHref:(id)arg1 ;
-(id)ping;
-(void)setPing:(id)arg1 ;
-(id)accessKey;
-(void)setAccessKey:(id)arg1 ;
-(id)hashName;
-(id)hostname;
-(id)pathname;
-(id)port;
-(id)search;
-(id)alt;
-(void)setAlt:(id)arg1 ;
-(BOOL)noHref;
-(void)setNoHref:(BOOL)arg1 ;
-(CGRect)boundingBoxWithOwner:(id)arg1 ;
-(WKQuad)absoluteQuadWithOwner:(id)arg1 ;
-(id)boundingBoxesWithOwner:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VimeoPostDelegate <NSObject>
@optional
-(void)vimeoPost:(id)arg1 uploadProgressDidChange:(float)arg2;

@required
-(void)vimeoPost:(id)arg1 uploadFailedWithError:(id)arg2;
-(void)vimeoPostUploadSucceeded:(id)arg1;
-(void)vimeoPost:(id)arg1 uploadSucceededWithWarning:(int)arg2;
@end


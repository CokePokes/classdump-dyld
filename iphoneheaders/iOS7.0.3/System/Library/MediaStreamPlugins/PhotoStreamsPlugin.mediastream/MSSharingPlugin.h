/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:43:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/MediaStreamPlugins/PhotoStreamsPlugin.mediastream/PhotoStreamsPlugin
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol MSSharingPlugin <MSSharingManagerDelegate>
@optional
-(void)sharingManagerWillAssignPluginAsDelegateOfSharingManager:(id)arg1;
-(void)sharingManagerWillDeassignPluginAsDelegateOfSharingManager:(id)arg1;

@required
+(id)sharingPluginForPersonID:(id)arg1;
+(BOOL)personIDIsAcceptingInvitations:(id)arg1;
@end


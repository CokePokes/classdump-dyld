/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreMediaStream/MSSharingManager.h>

@protocol MSSharingManager <NSObject>
@property (assign,nonatomic) <MSSharingManagerDelegate> * delegate; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,retain) NSArray * shares; 
@required
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(id)shares;
-(void)setShares:(id)arg1;
-(void)sendInvitationsForShares:(id)arg1;
-(void)respondToInvitation:(id)arg1 accept:(BOOL)arg2;
-(void)modifyShare:(id)arg1;
-(void)removeShare:(id)arg1;
-(void)refreshCurrentShareState;
-(id)personID;
@end

#import <CoreMediaStream/MSSharingProtocolDelegate.h>

@protocol MSSharingManagerDelegate;
@class NSString, NSArray, NSMutableArray, MSSharingProtocol, NSMutableDictionary, NSTimer, , MSMediaStreamDaemon;

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate> {

	NSString* _personID;
	NSString* _manifestPath;
	NSArray* _shares;
	NSMutableArray* _sharesWithLocalModifications;
	MSSharingProtocol* _protocol;
	int _state;
	BOOL _requestCurrentStateRequested;
	NSMutableArray* _invitationQueue;
	NSMutableArray* _invitationResponseQueue;
	NSMutableDictionary* _manageShareByPersonID;
	NSMutableArray* _deleteQueue;
	NSTimer* _manageShareDebounceTimer;
	<MSSharingManagerDelegate>* _delegate;
	MSMediaStreamDaemon* _daemon;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                       //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) <MSSharingManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                              //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSArray * shares; 
+(id)sharingManagerForPersonID:(id)arg1 ;
+(id)existingSharingManagerForPersonID:(id)arg1 ;
+(void)abortAllActivities;
+(id)_clearInstantiatedSharingManagersByPersonID;
+(void)forgetPersonID:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setDaemon:(id)arg1 ;
-(id)shares;
-(void)setShares:(id)arg1 ;
-(void)sendInvitationsForShares:(id)arg1 ;
-(void)respondToInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(void)modifyShare:(id)arg1 ;
-(void)removeShare:(id)arg1 ;
-(void)refreshCurrentShareState;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(id)daemon;
-(void)_performNextQueuedAction;
-(void)_shareDebounceTimerDidFire:(id)arg1 ;
-(id)_sharesWithLocalModifications;
-(void)_sendNextDeletion;
-(void)_sendNextInvitationResponse;
-(void)_sendNextInvitation;
-(void)_sendNextManagedShare;
-(void)_requestCurrentShareState;
-(void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2 ;
-(void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2 ;
-(void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2 ;
-(void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)abort;
-(id)personID;
-(void).cxx_destruct;
@end


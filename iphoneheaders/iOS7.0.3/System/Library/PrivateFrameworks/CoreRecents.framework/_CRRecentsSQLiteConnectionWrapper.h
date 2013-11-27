/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:44:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CRSQLiteConnection;

@interface _CRRecentsSQLiteConnectionWrapper : NSObject {

	unsigned _refcount;
	BOOL _writer;
	CRSQLiteConnection* _connection;

}

@property (nonatomic,retain) CRSQLiteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL writer;                                  //@synthesize writer=_writer - In the implementation block
+(id)wrapperWithConnection:(id)arg1 forWriting:(BOOL)arg2 ;
-(void)dealloc;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(unsigned)incrementRefcount;
-(unsigned)decrementRefcount;
-(id)initWithConnection:(id)arg1 forWriting:(BOOL)arg2 ;
-(BOOL)writer;
-(void)setWriter:(BOOL)arg1 ;
@end


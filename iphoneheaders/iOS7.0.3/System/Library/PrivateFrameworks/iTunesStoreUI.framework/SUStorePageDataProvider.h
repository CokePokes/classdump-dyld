/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISDataProvider.h>

@class SUClientInterface, ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {

	SUClientInterface* _clientInterface;
	int _outputType;
	ISPropertyListProvider* _propertyListDataProvider;

}

@property (retain) SUClientInterface * clientInterface;                          //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign) int outputType;                                               //@synthesize outputType=_outputType - In the implementation block
@property (copy) ISPropertyListProvider * propertyListDataProvider;              //@synthesize propertyListDataProvider=_propertyListDataProvider - In the implementation block
-(void)dealloc;
-(void)setOutputType:(int)arg1 ;
-(int)outputType;
-(id)clientInterface;
-(void)setClientInterface:(id)arg1 ;
-(id)propertyListDataProvider;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg1 ;
-(void)setPropertyListDataProvider:(id)arg1 ;
@end


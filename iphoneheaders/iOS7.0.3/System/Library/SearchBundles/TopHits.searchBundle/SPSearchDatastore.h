/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:37:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SearchBundles/TopHits.searchBundle/TopHits
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SPSearchDatastore <NSObject>
@optional
-(void)preheat;
-(id)resultForIdentifier:(id)arg1 domain:(unsigned)arg2;
-(BOOL)wantsEveryResultInItsOwnSection;
-(id)categoryForDomain:(unsigned)arg1;
-(id)imageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3;

@required
-(id)searchDomains;
-(id)displayIdentifierForDomain:(unsigned)arg1;
-(void)performQuery:(id)arg1 withResultsPipe:(id)arg2;
@end


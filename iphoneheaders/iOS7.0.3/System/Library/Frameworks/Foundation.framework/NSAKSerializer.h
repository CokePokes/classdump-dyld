/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface NSAKSerializer : NSObject {

	id ss;

}
-(unsigned)serializeData:(id)arg1 ;
-(unsigned)serializeList:(id)arg1 ;
-(unsigned)serializePropertyList:(id)arg1 ;
-(unsigned)serializeString:(id)arg1 ;
-(unsigned)serializeListItemIn:(id)arg1 at:(unsigned)arg2 ;
-(unsigned)serializeObject:(id)arg1 ;
-(unsigned)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(unsigned)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)initForSerializerStream:(id)arg1 ;
-(id)serializerStream;
-(void)dealloc;
@end


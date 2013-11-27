/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface VMUDirectedGraph : NSObject {

	unsigned _nodeCount;
	unsigned _edgeCount;
	unsigned _nextNodeName;
	unsigned _nextEdgeName;
	VMUDirectedGraphNode* _nodes;
	VMUDirectedGraphEdge* _edges;
	unsigned* _nodeNameMap;
	unsigned _edgeCapacity;
	BOOL _needsAdjacencyUpdate;

}

@property (nonatomic,readonly) unsigned nodeCount;                      //@synthesize nodeCount=_nodeCount - In the implementation block
@property (nonatomic,readonly) unsigned edgeCount;                      //@synthesize edgeCount=_edgeCount - In the implementation block
@property (nonatomic,readonly) unsigned nodeNamespaceSize;              //@synthesize nextNodeName=_nextNodeName - In the implementation block
@property (nonatomic,readonly) unsigned edgeNamespaceSize;              //@synthesize nextEdgeName=_nextEdgeName - In the implementation block
+(void)initialize;
-(void)dealloc;
-(unsigned)nodeCount;
-(void)enumerateNodesWithBlock:(/*^block*/ id)arg1 ;
-(void)_adjustAdjacencyMap;
-(void)_dfsCore:(unsigned)arg1 colors:(unsigned char*)arg2 nodeBlock:(/*^block*/ id)arg3 edgeBlock:(/*^block*/ id)arg4 ;
-(void)_searchMainLoop:(unsigned)arg1 action:(/*^block*/ id)arg2 ;
-(void)_bfsCore:(unsigned)arg1 colors:(unsigned char*)arg2 nodeBlock:(/*^block*/ id)arg3 edgeBlock:(/*^block*/ id)arg4 ;
-(id)initWithNodes:(unsigned)arg1 ;
-(unsigned)addEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 ;
-(void)enumerateEdgesWithBlock:(/*^block*/ id)arg1 ;
-(void)enumerateEdgesOfNode:(unsigned)arg1 withBlock:(/*^block*/ id)arg2 ;
-(id)subgraphWithMarkedNodes:(void*)arg1 edges:(void*)arg2 ;
-(id)invertedGraph;
-(void)withNodeMarkingMap:(/*^block*/ id)arg1 ;
-(void)withEdgeMarkingMap:(/*^block*/ id)arg1 ;
-(void)depthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/ id)arg2 edgeVisitBlock:(/*^block*/ id)arg3 ;
-(void)breadthFirstSearch:(unsigned)arg1 nodeVisitBlock:(/*^block*/ id)arg2 edgeVisitBlock:(/*^block*/ id)arg3 ;
-(void)_dumpAdjacencyList;
-(void)invertEdges;
-(unsigned)edgeCount;
-(unsigned)nodeNamespaceSize;
-(unsigned)edgeNamespaceSize;
@end


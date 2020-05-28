//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _index;
    unordered_set_c6a929bd _uuidSet;
}

@property(readonly) unsigned int index; // @synthesize index=_index;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)p_removeUUIDsFromVector:(const vector_4dc5f307 )arg1;
- (void)p_addUUIDsFromVector:(const vector_4dc5f307 )arg1;
- (void)p_removeUUIDs:(const unordered_set_c6a929bd )arg1;
- (void)p_addUUIDs:(const unordered_set_c6a929bd )arg1;
- (BOOL)p_removeUUID:(const UUIDData_60906e89 )arg1;
- (BOOL)p_addUUID:(const UUIDData_60906e89 )arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger count;
- (void)foreachUuid:(id /* CDUnknownBlockType */)arg1;
- (id)reducedSetMinusUuidsFromVector:(const vector_4dc5f307 )arg1;
- (id)expandedSetWithUuidsFromVector:(const vector_4dc5f307 )arg1;
- (id)reducedSetMinusUuids:(const unordered_set_c6a929bd )arg1;
- (id)expandedSetWithUuids:(const unordered_set_c6a929bd )arg1;
- (id)reducedSetMinusUuid:(const UUIDData_60906e89 )arg1;
- (id)expandedSetWithUuid:(const UUIDData_60906e89 )arg1;
- (BOOL)isAllInvalid;
- (UUIDData_60906e89)anyUuid;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)containsUuid:(const UUIDData_60906e89 )arg1;
- (id)description;
- (vector_4dc5f307)uuidsAsVector;
- (id)initWithUUIDVector:(const vector_4dc5f307 )arg1;
- (id)initWithUUIDSet:(id)arg1;
- (id)initWithUUID:(const UUIDData_60906e89 )arg1;

@end

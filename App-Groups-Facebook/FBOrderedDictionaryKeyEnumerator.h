//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@interface FBOrderedDictionaryKeyEnumerator : NSEnumerator
{
    map_29e207ab *_map;
    struct __map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<id, id>, std::__1::__tree_node<std::__1::__value_type<id, id>, void *>*, int>> {
        struct __tree_const_iterator<std::__1::__value_type<id, id>, std::__1::__tree_node<std::__1::__value_type<id, id>, void *>*, int> {
            struct __tree_node<std::__1::__value_type<id, id>, void *> *__ptr_;
        } __i_;
    } _iter;
}

- (id).cxx_construct;
- (id)nextObject;
- (id)initWithMap:(map_29e207ab *)arg1;

@end


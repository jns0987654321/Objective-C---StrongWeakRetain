//
//  Backpack.h
//  StrongWeakRetain
//
//  Created by Junior Samaroo on 2017-04-30.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Person;


@interface Backpack : NSObject
@property(nonatomic,weak) Person *owner;
@end

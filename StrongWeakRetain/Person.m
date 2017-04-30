//
//  Person.m
//  StrongWeakRetain
//
//  Created by Junior Samaroo on 2017-04-30.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import "Person.h"
#import "Backpack.h"

@implementation Person

-(void)initData {
    // Don't point 2 strong objects to each other, creates memory leak;
    // one goes nil, but both still exists
    // both holding on to each other, but no important part of app is using it
    self.backpack = [[Backpack alloc]init];
    self.backpack.owner = self;
}

@end

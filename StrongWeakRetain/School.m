//
//  School.m
//  StrongWeakRetain
//
//  Created by Junior Samaroo on 2017-04-30.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import "School.h"
#import "Person.h"

@implementation School

-(void)initData {
    self.student = [[Person alloc]init];
    [self.student initData];
    
    // person did a prank
    self.student = nil;
}

@end

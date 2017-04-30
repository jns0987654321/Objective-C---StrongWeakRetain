//
//  ViewController.h
//  StrongWeakRetain
//
//  Created by Junior Samaroo on 2017-04-30.
//  Copyright © 2017 Junior Samaroo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// weak/strong are property attributes
// nonatomic is faster, use atomic for thread safety
// default is atomic
// Strong means hold strong reference to property, meanisn property will always exist if not nil ()unless you set to nil
// use strong on all objects
// assign property such as value types and default is assign
// ARC in place so dont need retain
// weak ref is used, if it goes nil somewhere else, it is lost at all places in app
// view controller is automatically strong reference so dont need westrongak VC references
//what is a retain cycel and how can you precvent it?

@property(nonatomic,strong) NSString *name;

@end


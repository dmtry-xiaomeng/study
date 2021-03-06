//
//  DragonFactory.h
//  ArchitectureOCDemo
//
//  Created by DaiMing on 2018/6/12.
//  Copyright © 2018年 Starming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Dragon.h"

@protocol DragonFactory <NSObject>

- (id<Dragon>)newDragon;

@end

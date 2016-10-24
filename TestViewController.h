//
//  TestViewController.h
//  Test
//
//  Created by zhoushuai on 16/3/7.
//  Copyright © 2016年 zhoushuai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestViewController : UIViewController

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) int age;
@property (nonatomic, copy) NSString *job;
//测试普通合并：修改master
//测试普通合并：修改dev
//测试 --no-ff普通模式合并，合并后的历史有分支，
//fast forward合并看不出来曾经做过合并 helloworld
@end

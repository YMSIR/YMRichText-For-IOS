//
//  ViewController.h
//  TestOC
//
//  Created by zhangxinwei on 16/6/6.
//  Copyright © 2016年 zhangxinwei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>


-(void) onClickLinkLabel:(NSString*)linkData;

@end


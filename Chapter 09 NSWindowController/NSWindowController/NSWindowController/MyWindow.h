//
//  MyWindow.h
//  NSWindowController
//
//  Created by zhaojw on 15/9/13.
//  Copyright (c) 2015年 zhaojw. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MyWindow : NSWindow<NSTextFieldDelegate>
@property(nonatomic,strong)NSTextField *textField;
@end

//
//  ViewController.h
//  PickerView
//
//  Created by RichyLeo on 16/5/17.
//  Copyright © 2016年 WTC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) UIPickerView * pickerView;

/**
 *  数据源
 */
@property (nonatomic, strong) NSArray * arrayDS;

@end


//
//  RegisterVC.h
//  NoScreenAudio
//
//  Created by S3Graphic on 16/11/2.
//  Copyright © 2016年 s3graphics. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "macro.h"
#import "CommonHeadFile.h"
@interface RegisterVC : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *accountTextFeild;
@property (weak, nonatomic) IBOutlet UILabel *remindLabel;
@property (assign,nonatomic) AccountType accountType;
@end

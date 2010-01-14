//
//  AlertPrompt.h
//  gMapsDataiPhone
//
//  Created by Bruno Conti on 26/07/09.
//  Copyright 2009 Bruno Conti. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlertPrompt : UIAlertView <UITextFieldDelegate>
{
    UITextField *alertTextField;
}
@property (nonatomic, retain) UITextField *alertTextField;
@property (readonly) NSString *enteredText;
- (id)initWithTitle:(NSString *)title message:(NSString *)message delegate:(id)delegate cancelButtonTitle:(NSString *)cancelButtonTitle okButtonTitle:(NSString *)okButtonTitle;
@end

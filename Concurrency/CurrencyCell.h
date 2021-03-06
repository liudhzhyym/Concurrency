//
//  CurrencyCell.h
//  CurrencyConverter
//
//  Created by Nick Lockwood on 01/07/2013.
//  Copyright (c) 2013 Charcoal Design. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Currency.h"

@interface CurrencyCell : UITableViewCell

+ (UINib *)nib;
+ (NSString *)reuseIdentifier;
- (void)configureWithCurrency:(Currency *)currency;

@end

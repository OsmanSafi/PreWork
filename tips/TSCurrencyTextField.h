

#import <UIKit/UIKit.h>

@interface TSCurrencyTextField : UITextField

@property (nonatomic) NSCharacterSet* invalidInputCharacterSet;
@property (nonatomic) NSNumberFormatter* currencyNumberFormatter;

@property (nonatomic) NSNumber* amount;

@end

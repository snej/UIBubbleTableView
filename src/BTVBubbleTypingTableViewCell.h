//
//  BTVBubbleTypingTableCell.h
//  BTVBubbleTableViewExample
//
//  Created by Александр Баринов on 10/7/12.
//  Copyright (c) 2012 Stex Group. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTVBubbleTableView.h"


@interface BTVBubbleTypingTableViewCell : UITableViewCell

+ (CGFloat)height;

@property (nonatomic) BTVBubbleTypingType type;
@property (nonatomic) BOOL showAvatar;

@end
